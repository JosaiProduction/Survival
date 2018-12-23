// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AdvancedCharMovementComp.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_API UAdvancedCharMovementComp : public UCharacterMovementComponent
{
	GENERATED_BODY()

private: 
	bool m_bIsLying; 
	bool m_bWantsToLie;
public:

	UAdvancedCharMovementComp(const FObjectInitializer& PCIP = FObjectInitializer::Get());

	UFUNCTION()
		bool IsLaid();
	
	UFUNCTION()
		void LayDown();
	UFUNCTION()
		void UnLayDown();

	UPROPERTY(EditAnywhere, Category = Pose)
		float m_lieEyeHeight;

protected: 
	virtual void InitializeComponent() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	void UpdateCharacterLieStateBeforeMovement(float DeltaSeconds);

	bool CanLie();
};
