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

UENUM(BlueprintType)
enum class EMoveSpeed :uint8 {
	VE_Immobile UMETA(DisplayName = "Immobile"),
	VE_Walk UMETA(DisplayName = "Walk"),
	VE_Jog UMETA(DisplayName = "Jog"),
	VE_Run UMETA(DisplayName = "Run"),
	VE_Sprint UMETA(DisplayName = "Sprint")
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
		float MaxEnergyStorage = 0;
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
		float CurrentEnergyStorage = 0;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Energy")
		float EnergyGain;
	UPROPERTY(VisibleAnywhere, Category = "Properties| Energy")
		float EnergyConsumption = 0;
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		int ClimbLvl;
};
USTRUCT(BlueprintType)
struct FMovementProps
{
	GENERATED_BODY()
public: 
	UPROPERTY(EditAnywhere, Category = "Stats| Movement")
		EMoveSpeed MovementMode = EMoveSpeed::VE_Walk;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement")
		float WalkSpeed;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement| Energy")
		float WalkEnergyConsumption;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement")
		float JogSpeed;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement| Energy")
		float JogEnergyConsumption;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement")
		float RunSpeed;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement| Energy")
		float RunEnergyConsumption;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement")
		float SprintSpeed;
	UPROPERTY(EditAnywhere, Category = "Stats| Movement| Energy")
		float SpringEnergyConsumption;
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
