// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Character/Globals/Public/CharHelpers.h"
#include "CharStats.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SURVIVAL_API UCharStats : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharStats();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Stats")
		FCharProps m_props;
	UPROPERTY(EditAnywhere, Category = "Stats")
		FMovementProps m_movementProps;
	EMoveSpeed m_currentMoveSpeed;
	UFUNCTION()
		void IncreaseEnergyStorage(float storage) { m_props.MaxEnergyStorage += storage; }
	UFUNCTION()
		void IncreaseEnergyGain(float gain) { m_props.EnergyGain += gain; }
	UFUNCTION()
		void IncreaseEnergyConsumption(float consumption) { m_props.EnergyConsumption += consumption; }
	UFUNCTION()
		float GetCurrentMoveSpeed();
	UFUNCTION()
		void UpdateMoveSpeedConsumption(EMoveSpeed currentMoveSpeed, EMoveSpeed nextMoveSpeed);
	UFUNCTION()
		void IncreaseMoveSpeed();
	UFUNCTION()
		void DecreaseMoveSpeed();
	UFUNCTION()
		void SetMovementConsumptionToZero();
	UFUNCTION()
		void SetCurrentMovementConsumption();
	UFUNCTION(BlueprintCallable)
		float GetCurrentEnergyAsPercent();
private:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;
	UFUNCTION()
		void UpdateEnergy(float DeltaTime);
};
