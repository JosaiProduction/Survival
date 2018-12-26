// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Character/Globals/CharHelpers.h"
#include "CharStats.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SURVIVAL_API UCharStats : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharStats();

	UPROPERTY(EditAnywhere, Category = "Stats")
		FCharProps m_props;
	UPROPERTY(VisibleAnywhere, Category = "Stats")
		FModuleProperties m_moduleProps;
	UFUNCTION()
		void AddEnergyStorage(float storage) { m_props.MaxEnergyStorage += storage; }
	UFUNCTION()
		void AddEnergyGain(float gain) { m_props.EnergyGain += gain; }
	UFUNCTION()
		void AddEnergyConsumption(float consumption) { m_props.EnergyConsumption += consumption; }
private:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;
	UFUNCTION()
		void UpdateEnergy(float DeltaTime);
};
