// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Items/Globals/ItemHelpers.h"
#include "CharHelpers.generated.h"



UENUM(BlueprintType)
enum class EInteractionType :uint8 {
	VE_Climbing = 1 << 0 UMETA(DisplayName = "Climb"),
	VE_Pick_up = 1 << 1 UMETA(DisplayName = "PickUp"),
	VE_Use = 1 << 2 UMETA(DisplayName = "Use"),
};

USTRUCT(BlueprintType)
struct FCharAbilities
{
	GENERATED_BODY()
public: 

};

USTRUCT(BlueprintType)
struct FCharProps
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		int Mood;
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		int Health;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Energy")
		float MaxEnergyStorage;
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
		float CurrentEnergyStorage;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Energy")
		float EnergyGain;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Energy")
		float EnergyConsumption;
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		int ClimbLvl;
};

USTRUCT(BlueprintType)
struct FModuleProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FFootModuleProperties LeftFootProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FFootModuleProperties RightFootProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FLegModuleProperties LeftLegProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FLegModuleProperties RightLegProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FTorsoModuleProperties TorsoProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FArmModuleProperties LeftArmProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FArmModuleProperties RightArmProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FHandModuleProperties LeftHandProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FHandModuleProperties RightHandProps;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module")
		FHeadModuleProperties HeadProps;
};


/**
 * 
 */
UCLASS()
class SURVIVAL_API UCharHelpers : public UObject
{
	GENERATED_BODY()
public: 
	UCharHelpers(); 
	~UCharHelpers();
};
