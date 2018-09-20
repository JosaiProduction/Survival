// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int Mood;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int Health;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int Stamina;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int Adrenaline;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int Exhaustion;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int StressLevel;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int Tiredness;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int ClimbLvl;
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
