// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/AdvancedCharMovementComp.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"


UAdvancedCharMovementComp::UAdvancedCharMovementComp(const FObjectInitializer& PCIP)
	:Super(PCIP)
	, m_bIsLying(false)
	, m_bWantsToLie(false)
	, m_lieEyeHeight(20)
{

}

bool UAdvancedCharMovementComp::IsLaid()
{
	return m_bIsLying;
}


void UAdvancedCharMovementComp::LayDown()
{
	if (IsCrouching())
	{
		m_bIsLying = true;
		m_bWantsToLie = true;
	}
}

void UAdvancedCharMovementComp::UnLayDown()
{
	if (m_bIsLying)
	{
		m_bIsLying = false;
		m_bWantsToLie = false;
		CharacterOwner->GetCapsuleComponent()->SetCapsuleSize(CrouchedHalfHeight, CrouchedHalfHeight);
		CharacterOwner->GetCapsuleComponent()->MoveComponent(FVector(0, 0, m_lieEyeHeight),CharacterOwner->GetCapsuleComponent()->GetComponentQuat(),false);
		CharacterOwner->GetCapsuleComponent()->SetRelativeRotation(FRotator(0, 0, 0));
		this->bWantsToCrouch = true;
	}
}

void UAdvancedCharMovementComp::InitializeComponent()
{
	Super::InitializeComponent();
}

void UAdvancedCharMovementComp::UpdateCharacterLieStateBeforeMovement(float DeltaSeconds)
{

}

bool UAdvancedCharMovementComp::CanLie()
{
	return true;
}

void UAdvancedCharMovementComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateCharacterLieStateBeforeMovement(DeltaTime);

	if (CanLie() && m_bWantsToLie)
	{
		CharacterOwner->GetCapsuleComponent()->SetCapsuleSize(m_lieEyeHeight, m_lieEyeHeight);
		CharacterOwner->GetCapsuleComponent()->MoveComponent(FVector(0, 0, -m_lieEyeHeight), CharacterOwner->GetCapsuleComponent()->GetComponentQuat(), false);
		m_bWantsToLie = false;
	}
}

