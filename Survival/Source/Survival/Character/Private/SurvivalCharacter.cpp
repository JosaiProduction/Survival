// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "../Public/SurvivalCharacter.h"
#include "Items/Projectiles/Public/Projectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Character/Public/Inventory.h"
#include "Character/Public/Abilities.h"
#include "Survival/Character/Public/AdvancedCharMovementComp.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "World/PhysicalMaterials/Public/ClimbPhysMat.h"
#include "Character/Public/CharStats.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Runtime/Engine/Public/Net/VoiceConfig.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// ASurvivalCharacter

ASurvivalCharacter::ASurvivalCharacter(const FObjectInitializer& objectInitializer)
	:Super(objectInitializer.SetDefaultSubobjectClass<UAdvancedCharMovementComp>(ACharacter::CharacterMovementComponentName))
	, m_freeLook(false)
	, m_bClimbIsPossible(false)
	, m_bIsClimbingOnEdge(false)
	, m_bFoundEdge(false)
	, m_energy(100)
	, m_moveSpeedMultiplicator(0.0f)
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;


	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
	RootComponent->bAbsoluteRotation = true;

	m_inventory = CreateDefaultSubobject<UInventory>(TEXT("Inventory"));
	this->AddOwnedComponent(m_inventory);
	m_abilities = CreateDefaultSubobject<UAbilities>(TEXT("Abilities"));
	m_stats = CreateDefaultSubobject<UCharStats>(TEXT("Stats"));
	m_inventory->SetCharStats(m_stats);
}

void ASurvivalCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
	m_moveSpeed = m_stats->m_currentMoveSpeed;
}

void ASurvivalCharacter::Tick(float DeltaSeconds)
{
	FHitResult outHit;
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	{
		outHit = CheckObstacleInFront();
		CheckGroundAngle();
	}
	break;
	case EControlMode::VE_Climbing:
	{
		outHit = CheckClimbingObstacle();
		if (outHit.GetActor())
		{
			GetController()->SetControlRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), outHit.ImpactPoint));
			this->SetActorLocation(outHit.ImpactPoint - (m_climbDist + 5) * GetActorForwardVector());
			DrawDebugLine(GetWorld(), outHit.ImpactPoint, outHit.ImpactPoint + outHit.ImpactNormal * 70, FColor::Green, false, .1f, 0, 1);
		}
		else
		{
			DeactivateClimbMode();
		}
	}
	break;
	}
	if (m_bIsJumping)
	{
		CheckJumping(DeltaSeconds);
	}
	if (FMath::IsNearlyZero(this->GetVelocity().Size()))
	{
		m_stats->SetMovementConsumptionToZero();
	}
	//const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EControlMode"), true);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *enumPtr->GetNameByValue((int64)m_controlMode).ToString());
	//UE_LOG(LogTemp, Warning, TEXT("%s"), m_moveComp->IsCrouching() ? TEXT("is crouching") : TEXT("isn't crouching"));
	//UE_LOG(LogTemp, Warning, TEXT("%s"), m_moveComp->IsLaid() ? TEXT("is lying") : TEXT("isn't lying"));
	//const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EMoveSpeed"), true);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *enumPtr->GetNameByValue((int64)m_moveSpeed).ToString());
	//const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EMovementMode"), true);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *enumPtr->GetNameByValue((int64)m_moveComp->MovementMode).ToString());
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASurvivalCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	//Bind mouse inputs
	PlayerInputComponent->BindAction("BodyToSight", IE_Pressed, this, &ASurvivalCharacter::OrientBodyToSight);
	PlayerInputComponent->BindAction("FreeLook", IE_DoubleClick, this, &ASurvivalCharacter::ToggleFreeLook);
	PlayerInputComponent->BindAction("SightToBody", IE_Pressed, this, &ASurvivalCharacter::OrientSightToBody);
	PlayerInputComponent->BindAction("IncreaseMoveSpeedMouseWheel", IE_Pressed, this, &ASurvivalCharacter::IncreaseMoveSpeed);
	PlayerInputComponent->BindAction("DecreaseMoveSpeedMouseWheel", IE_Pressed, this, &ASurvivalCharacter::DecreaseMoveSpeed);


	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ASurvivalCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ASurvivalCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASurvivalCharacter::MoveRight);

	PlayerInputComponent->BindAction("IncreaseMoveSpeed", IE_DoubleClick, this, &ASurvivalCharacter::IncreaseMoveSpeed);
	PlayerInputComponent->BindAction("DecreaseMoveSpeed", IE_DoubleClick, this, &ASurvivalCharacter::DecreaseMoveSpeed);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ASurvivalCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ASurvivalCharacter::LookUpAtRate);

	// Bind pose events
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASurvivalCharacter::Crouch);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASurvivalCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ASurvivalCharacter::StopJumping);


	PlayerInputComponent->BindAction("Inventory", IE_Pressed, this, &ASurvivalCharacter::ToggleInventory);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ASurvivalCharacter::Interact);
	PlayerInputComponent->BindAction("SafeMove", IE_Pressed, this, &ASurvivalCharacter::ToggleSafeMode);
	PlayerInputComponent->BindAction("SafeMove", IE_Released, this, &ASurvivalCharacter::ToggleSafeMode);
}

void ASurvivalCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void ASurvivalCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ASurvivalCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ASurvivalCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void ASurvivalCharacter::Crouch()
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	{
		if (m_moveComp)
		{
			if (!m_moveComp->IsCrouching() && !m_moveComp->IsLaid())
			{
				if (m_moveComp->CrouchedHalfHeight < GetCapsuleComponent()->GetUnscaledCapsuleRadius())
				{
					m_startCapsuleRadius = GetCapsuleComponent()->GetUnscaledCapsuleRadius();
					GetCapsuleComponent()->SetCapsuleRadius(m_moveComp->CrouchedHalfHeight);
				}
				m_moveComp->bWantsToCrouch = true;
				return;
			}
			if (!m_moveComp->IsLaid() && m_moveComp->IsCrouching())
			{
				m_moveComp->LayDown();
				return;
			}
		}

	}
	}
}


void ASurvivalCharacter::Jump()
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	{
		if (m_moveComp)
		{
			if (m_moveComp->IsCrouching() && !m_moveComp->IsLaid())
			{
				if (m_moveComp->CrouchedHalfHeight < m_startCapsuleRadius)
				{
					GetCapsuleComponent()->SetCapsuleRadius(m_startCapsuleRadius);
				}
				m_moveComp->bWantsToCrouch = false;
				return;
			}
			if (m_moveComp->IsLaid())
			{
				m_moveComp->UnLayDown();
				return;
			}
			m_bIsJumping = true;
			ACharacter::Jump();
		}
	}
	}
}

void ASurvivalCharacter::StopJumping()
{
	ACharacter::StopJumping();
}

void ASurvivalCharacter::Interact()
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	{

		if (m_bClimbIsPossible && !m_bIsClimbing)
		{
			ActivateClimbMode();
			return;
		}		
	}
	case EControlMode::VE_Climbing:
	{
		if (m_bIsClimbing)
		{
			DeactivateClimbMode();
			return;
		}
	}
	}
}

void ASurvivalCharacter::ToggleSafeMode()
{
	m_bSafeMode = !m_bSafeMode;
	if (m_bSafeMode)
	{
		m_moveSpeed = EMoveSpeed::VE_Walk;
		UpdateMoveSpeed();
	}
}


bool ASurvivalCharacter::SafeMoveForward(float value)
{
	FCollisionQueryParams collParams;
	collParams.AddIgnoredActor(this);
	collParams.bTraceComplex = false;
	collParams.bReturnPhysicalMaterial = true;
	FHitResult outHit(ForceInit);
	FVector start = GetActorLocation() + GetCapsuleComponent()->GetUnscaledCapsuleRadius()*(GetActorForwardVector()*value) + GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight()*(-GetActorUpVector());
	FVector end = start + (m_moveComp->MaxStepHeight + 5) *(-GetActorUpVector());
	DrawDebugLine(GetWorld(), start, end, FColor::Blue);
	if (GetWorld()->LineTraceSingleByChannel(outHit, start, end, ECC_WorldStatic, collParams))
	{
		return true;
	}
	return false;
}

bool ASurvivalCharacter::SafeMoveRight(float value)
{
	FCollisionQueryParams collParams;
	collParams.AddIgnoredActor(this);
	collParams.bTraceComplex = false;
	collParams.bReturnPhysicalMaterial = true;
	FHitResult outHit(ForceInit);
	FVector start = GetActorLocation() + GetCapsuleComponent()->GetUnscaledCapsuleRadius()*(GetActorRightVector()*value) + GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight()*(-GetActorUpVector());
	FVector end = start + (m_moveComp->MaxStepHeight + 5) *(-GetActorUpVector());
	DrawDebugLine(GetWorld(), start, end, FColor::Blue);
	if (GetWorld()->LineTraceSingleByChannel(outHit, start, end, ECC_WorldStatic, collParams))
	{
		return true;
	}
	return false;
}


FHitResult ASurvivalCharacter::CheckClimbingObstacle()
{
	FHitResult outHit = CheckObstacleInFront();
	if (outHit.GetActor())
	{
		FCollisionQueryParams collParams;
		collParams.AddIgnoredActor(this);
		collParams.bTraceComplex = false;
		collParams.bReturnPhysicalMaterial = true;
		FVector targetLoc = outHit.Actor->GetActorLocation();
		GetWorld()->LineTraceSingleByChannel(outHit, this->GetActorLocation(), FVector(targetLoc.X, targetLoc.Y, GetActorLocation().Z), ECC_WorldStatic, collParams);
	}
	return outHit;
}


FHitResult  ASurvivalCharacter::CheckObstacleInFront()
{
	FVector end = this->GetActorLocation() + 70 * GetActorForwardVector();
	FHitResult outHit(ForceInit);
	FCollisionQueryParams collParams;
	collParams.AddIgnoredActor(this);
	collParams.bTraceComplex = false;
	collParams.bReturnPhysicalMaterial = true;

	if (GetWorld()->LineTraceSingleByChannel(outHit, this->GetActorLocation(), end, ECC_WorldStatic, collParams))
	{
		UClimbPhysMat* cPhysMat = Cast<UClimbPhysMat>(outHit.PhysMaterial.Get());
		if (cPhysMat)
		{
			if (cPhysMat->GetReqClimbLvl() >= m_stats->m_props.ClimbLvl)
			{
				ReceiveInteractionInfo(EInteractionType::VE_Climbing);
				m_bClimbIsPossible = true;
			}
		}
	}
	else
	{
		DropInteractionInfo(EInteractionType::VE_Climbing);
		m_bClimbIsPossible = false;
		DeactivateClimbMode();
	}
	return outHit;

}

void  ASurvivalCharacter::CheckEdge(float deltaSeconds)
{
	static FVector destPos;
	if (!m_bFoundEdge)
	{
		FVector frontLocation(GetActorLocation() + GetCapsuleComponent()->GetUnscaledCapsuleRadius()*GetActorForwardVector());
		FVector handLocation(frontLocation + FVector(0, 0, GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight()));
		FHitResult outHit(ForceInit);
		FCollisionQueryParams collParams;
		collParams.AddIgnoredActor(this);
		collParams.bTraceComplex = false;
		collParams.bReturnPhysicalMaterial = true;
		if (GetWorld()->LineTraceSingleByChannel(outHit, frontLocation, frontLocation + 20 * GetActorForwardVector(), ECC_WorldStatic, collParams))
		{
			TWeakObjectPtr<AActor> currentActor = outHit.Actor;
			if (!GetWorld()->LineTraceSingleByChannel(outHit, handLocation, handLocation + 20 * GetActorForwardVector(), ECC_WorldStatic, collParams))
			{
				FBox box = currentActor->GetComponentsBoundingBox();
				destPos = box.GetClosestPointTo(GetActorLocation() + FVector(0, 0, box.GetExtent().Z) + 20) + GetCapsuleComponent()->GetUnscaledCapsuleRadius()*GetActorForwardVector() + FVector(0, 0, GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight());
				if (!GetWorld()->LineTraceSingleByChannel(outHit, GetActorLocation(), GetActorLocation() - GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight()*GetActorUpVector(), ECC_WorldStatic, collParams))
				{
					m_bFoundEdge = true;
				}
				return;
			}
		}
	}
	else
	{
		ClimbOnEdge(destPos, deltaSeconds);
	}
}

void ASurvivalCharacter::UpdateMoveSpeed()
{
	m_moveComp->MaxWalkSpeed = m_stats->GetCurrentMoveSpeed()*m_moveSpeedMultiplicator;
	m_moveComp->MaxWalkSpeedCrouched = m_stats->GetCurrentMoveSpeed()* m_moveSpeedMultiplicator;
}

void ASurvivalCharacter::CheckGroundAngle()
{
	FHitResult outHit(ForceInit);
	FCollisionQueryParams collParams;
	collParams.AddIgnoredActor(this);
	collParams.bTraceComplex = false;
	collParams.bReturnPhysicalMaterial = true;
	FVector start = GetActorLocation() - FVector(0, 0, GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight());
	FVector end = start - 20 * GetActorUpVector();
	if (GetWorld()->LineTraceSingleByChannel(outHit, start, end, ECC_WorldStatic, collParams))
	{
		DrawDebugLine(GetWorld(), outHit.ImpactPoint, outHit.ImpactPoint + outHit.ImpactNormal * 30, FColor::Black);
		double angle = FMath::RadiansToDegrees(acos(FVector::DotProduct(GetActorUpVector().GetSafeNormal(), outHit.ImpactNormal.GetSafeNormal())));
		float multiplicator = 0.0f;
		if (FVector::DotProduct(GetActorForwardVector(), outHit.ImpactNormal) > 0)
		{
			multiplicator = (100 + angle) / 100;
		}
		else
		{
			multiplicator = (100 - angle) / 100;
		}
		if (!FMath::IsNearlyEqual(multiplicator, m_moveSpeedMultiplicator))
		{
			m_moveSpeedMultiplicator = multiplicator;
			UpdateMoveSpeed();
		}
	}
}

void ASurvivalCharacter::ClimbOnEdge(FVector destinationPos, float deltaSeconds)
{
	this->SetActorLocation(destinationPos, false, (FHitResult*)nullptr, ETeleportType::ResetPhysics);
	m_bFoundEdge = false;
	m_bIsClimbingOnEdge = false;
}

UAdvancedCharMovementComp * ASurvivalCharacter::GetAdvCharacterMovement() const
{
	return Cast<UAdvancedCharMovementComp>(GetCharacterMovement());
}

void ASurvivalCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	m_moveComp = GetAdvCharacterMovement();
}

void ASurvivalCharacter::ToggleInventory()
{
	if (m_inventory->IsEnabled())
	{
		m_inventory->Disable();
		m_controlMode = EControlMode::VE_Default;
		return;
	}
	m_inventory->Enable();
	m_controlMode = EControlMode::VE_Inventory;
}

void ASurvivalCharacter::ReceiveInteraction(const EInteractionType & interactionType)
{
	switch (interactionType)
	{
	case EInteractionType::VE_Climbing:
		if (!m_bIsClimbing && m_bWantsToClimb)
		{
			m_bIsClimbing = true;
			m_controlMode = EControlMode::VE_Climbing;
			m_moveComp->SetMovementMode(MOVE_Flying);
			return;
		}
		if (m_bIsClimbing)
		{
			m_bIsClimbing = false;
			m_controlMode = EControlMode::VE_Default;
			m_moveComp->SetMovementMode(MOVE_Walking);
			return;
		}
		break;
	}
}

void ASurvivalCharacter::ReceiveInteractionInfo(const EInteractionType & interactionType)
{
	m_availableInteractions |= (int32)interactionType;
	m_currentSelectedInteraction = interactionType;
	UE_LOG(LogTemp, Warning, TEXT("%d"), m_availableInteractions);
}

void ASurvivalCharacter::DropInteractionInfo(const EInteractionType & interactionType)
{
	if (m_availableInteractions & (int32)interactionType)
	{
		m_availableInteractions ^= (int32)interactionType;
		UE_LOG(LogTemp, Warning, TEXT("%d"), m_availableInteractions);
	}
}

void ASurvivalCharacter::ActivateClimbMode()
{
	m_bWantsToClimb = true;
	ReceiveInteraction(EInteractionType::VE_Climbing);
	OnStartClimbing();
}

void ASurvivalCharacter::DeactivateClimbMode()
{
	m_bWantsToClimb = false;
	ReceiveInteraction(EInteractionType::VE_Climbing);
}

void ASurvivalCharacter::IncreaseMoveSpeed()
{
	m_stats->IncreaseMoveSpeed();
	UpdateMoveSpeed();
}

void ASurvivalCharacter::DecreaseMoveSpeed()
{
	m_stats->DecreaseMoveSpeed();
	UpdateMoveSpeed();
}

void ASurvivalCharacter::OnStartClimbing()
{
	FHitResult result = CheckObstacleInFront();
	m_climbDist = FVector::Dist(this->GetActorLocation(), result.ImpactPoint);
}

UInventory* ASurvivalCharacter::GetInventory() const
{
	return m_inventory;
}

UAbilities * ASurvivalCharacter::GetAbilities() const
{
	return m_abilities;
}

void ASurvivalCharacter::DisableMovement()
{
	m_controlMode = EControlMode::VE_Disable;
}

void ASurvivalCharacter::ReenableMovement()
{
	m_controlMode = EControlMode::VE_Default;
}

void ASurvivalCharacter::AddControllerYawInput(float Val)
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
		if (!m_freeLook)
		{
			Super::AddControllerYawInput(Val);
		}
		else
		{
			FRotator rot = FirstPersonCameraComponent->GetRelativeTransform().Rotator();

			if ((rot.Yaw < 85 && Val > 0) || (rot.Yaw > -85 && Val < 0))
			{
				FirstPersonCameraComponent->AddRelativeRotation(FRotator(0, Val, 0));
			}
		}
		break;
	}
}

void ASurvivalCharacter::AddControllerPitchInput(float Val)
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	{
	}
	if (!m_freeLook)
	{
		Super::AddControllerPitchInput(Val);
	}
	else
	{
		FRotator rot = FirstPersonCameraComponent->GetRelativeTransform().Rotator();
		if ((rot.Pitch < 85 && Val < 0) || (rot.Pitch > -85 && Val > 0))
		{
			FirstPersonCameraComponent->AddRelativeRotation(FRotator(-Val, 0, 0));
		}
		else if (rot.Pitch > 85)
		{
			FirstPersonCameraComponent->SetRelativeRotation(FRotator(85, rot.Yaw, 0));
		}
		else if (rot.Pitch < -85)
		{
			FirstPersonCameraComponent->SetRelativeRotation(FRotator(-85, rot.Yaw, 0));
		}
	}
	}
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void ASurvivalCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void ASurvivalCharacter::MoveForward(float Value)
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	case EControlMode::VE_Inventory:
		if (m_bSafeMode)
		{
			if (!SafeMoveForward(Value) && Value != 0.0f)
			{
				return;
			}
		}
		// add movement in that direction
		if (Value != 0.0f)
		{
			if (m_stats->m_movementProps.MovementMode != m_moveSpeed)
			{
				m_stats->SetCurrentMovementConsumption();
				UpdateMoveSpeed();
			}
			m_moveSpeed = m_stats->m_currentMoveSpeed;
			AddMovementInput(GetActorForwardVector(), Value);
		}
		break;
	case EControlMode::VE_Climbing:
	{
		if (Value != 0.0f)
		{
			AddMovementInput(GetActorUpVector(), Value / 4);
		}
		else
		{
			m_moveComp->Velocity = FVector(m_moveComp->Velocity.X, m_moveComp->Velocity.Y, 0);
		}
		break;
	}
	}
}

void ASurvivalCharacter::MoveRight(float Value)
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	case EControlMode::VE_Inventory: 
	{
		if (m_bSafeMode)
		{
			if (!SafeMoveRight(Value) && Value != 0.0f)
			{
				return;
			}
		}
		// add movement in that direction
		if (Value != 0.0f)
		{
			if (m_stats->m_movementProps.MovementMode != m_moveSpeed)
			{
				m_stats->SetCurrentMovementConsumption();
				UpdateMoveSpeed();
			}
			m_moveSpeed = m_stats->m_currentMoveSpeed;
			AddMovementInput(GetActorRightVector(), Value);
		}
		break;
	}
	case EControlMode::VE_Climbing:
		if (Value != 0.0f)
		{
			AddMovementInput(GetActorRightVector(), Value / 4);
		}
		else
		{
			m_moveComp->Velocity = FVector(0, 0, m_moveComp->Velocity.Z);
		}
		break;
	}
}

void ASurvivalCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if (Rate != 0.0f)
	{
		switch (m_controlMode)
		{

		case EControlMode::VE_Default:
			AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
			break;

		}
	}
}

void ASurvivalCharacter::CheckJumping(float deltaSeconds)
{
	switch (m_moveComp->MovementMode)
	{
	case EMovementMode::MOVE_Walking:
		if (!m_bIsFalling)
		{
			CheckEdge(deltaSeconds);
			return;
		}
		m_bIsFalling = false;
		m_bIsJumping = false;
		break;
	case EMovementMode::MOVE_Falling:
		CheckEdge(deltaSeconds);
		if (!m_bIsClimbingOnEdge)
		{
			m_bIsFalling = true;
		}
	case EMovementMode::MOVE_Flying:
		CheckEdge(deltaSeconds);
		break;
	}
}

void ASurvivalCharacter::OrientSightToBody()
{
}

void ASurvivalCharacter::OrientBodyToSight()
{
}

void ASurvivalCharacter::ToggleFreeLook()
{
	switch (m_controlMode)
	{
	case EControlMode::VE_Default:
	{
		m_freeLook = !m_freeLook;
		if (m_freeLook)
		{
			FirstPersonCameraComponent->bUsePawnControlRotation = false;
			return;
		}
		if (!m_freeLook)
		{
			FirstPersonCameraComponent->bUsePawnControlRotation = true;
			return;
		}

	}
	}
}

void ASurvivalCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool ASurvivalCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ASurvivalCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ASurvivalCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ASurvivalCharacter::TouchUpdate);
		return true;
	}

	return false;
}
