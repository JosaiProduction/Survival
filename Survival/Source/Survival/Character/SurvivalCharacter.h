// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character/Globals/CharHelpers.h"
#include "SurvivalCharacter.generated.h"

class UInputComponent;
class UInventory;
class UCharacterMovementComponent;
class UAbilities;
class UCharStats;

UENUM(BlueprintType)
enum class EControlMode : uint8 {
	VE_Default UMETA(DisplayName = "Default"), 
	VE_Climbing UMETA(DisplayName = "Climbing"), 
	VE_Inventory UMETA(DisplayName = "Inventory")
};

UCLASS(config=Game)
class ASurvivalCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category="Mesh")
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	class USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	class USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	class USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;

public:
	ASurvivalCharacter(const class FObjectInitializer& objectInitializer);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Camera")
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Camera")
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gameplay")
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category="Projectile")
	TSubclassOf<class AProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Gameplay")
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	class UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	uint32 bUsingMotionControllers : 1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Tools")
		UInventory* m_inventory;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Tools")
		UAbilities* m_abilities;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tools")
		UCharStats* m_stats;
	UPROPERTY(VisibleAnywhere, Category = "Movement")
		class UAdvancedCharMovementComp* m_moveComp;
	UPROPERTY(VisibleAnywhere, Category = "Movement")
		EControlMode m_controlMode; 
	UPROPERTY(VisibleAnywhere, Category = "Interaction")
		uint32 m_availableInteractions;
	UPROPERTY(VisibleAnywhere, Category = "Interaction")
		EInteractionType m_currentSelectedInteraction;

	UPROPERTY(EditAnywhere, Category = "FreeLook")
		bool m_freeLook; 

	bool m_bClimbIsPossible;
	bool m_bIsClimbing; 
	bool m_bWantsToClimb;
	bool m_bIsJumping; 
	bool m_bIsFalling;
	bool m_bIsClimbingOnEdge; 
	bool m_bFoundEdge;
	bool m_bSafeMode;

	float m_climbDist;

	EMoveSpeed m_moveSpeed; 
protected:
	
	/** Fires a projectile. */
	void OnFire();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	void CheckJumping(float deltaSeconds);
	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
	void Crouch();

	void Jump() override;
	void StopJumping() override;

	void Interact();
	void ToggleSafeMode();
	bool SafeMoveForward(float value);
	bool SafeMoveRight(float value);

	float m_startCapsuleRadius;
	float m_energy;
	float m_moveSpeedMultiplicator;

	FHitResult CheckClimbingObstacle();

	FHitResult CheckObstacleInFront();

	void CheckEdge(float deltaSeconds); 

	void UpdateMoveSpeed();

	void CheckGroundAngle();

	void ClimbOnEdge(FVector destinationPos, float deltaSeconds);

	class UAdvancedCharMovementComp* GetAdvCharacterMovement() const;

	virtual void PostInitializeComponents()override; 
public: 
	UFUNCTION()
		void OrientSightToBody();
	UFUNCTION()
		void OrientBodyToSight();
	UFUNCTION()
		void ToggleFreeLook();
	UFUNCTION()
	void ToggleInventory(); 
	UFUNCTION()
	void ReceiveInteraction(const EInteractionType& interactionType);
	UFUNCTION()
	void ReceiveInteractionInfo(const EInteractionType& interactionType);
	UFUNCTION()
	void DropInteractionInfo(const EInteractionType& interactionType);
	UFUNCTION()
		void ActivateClimbMode();
	UFUNCTION()
		void DeactivateClimbMode();
	UFUNCTION()
		void IncreaseMoveSpeed();
	UFUNCTION()
		void DecreaseMoveSpeed();
	UFUNCTION()
		void OnStartClimbing();
	UFUNCTION(BlueprintCallable)
		UInventory* GetInventory() const;
	UFUNCTION(BlueprintCallable)
		UAbilities* GetAbilities() const; 
	UFUNCTION(BlueprintCallable)
		UCharStats* GetStats() const { return m_stats; }

		virtual void AddControllerYawInput(float Val) override;
		virtual void AddControllerPitchInput(float Val) override;

private: 
	FTimerHandle m_timerHandle;


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

