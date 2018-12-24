// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "ItemHelpers.generated.h"


UENUM(BlueprintType)
enum class EItemType :uint8 {
	VE_Consumable UMETA(DisplayName ="Consumable"),
	VE_RangeWeapon UMETA(DisplayName = "RangeWeapon"), 
	VE_MeleeWeapon UMETA(DisplayName = "MeleeWeapon"),
	VE_EnergyRelated UMETA(DisplayName = "EnergyRelated")
};
UENUM(BlueprintType)
enum class EEnergyItemType : uint8 {
	VE_Gain = 1<<0 UMETA(DisplayName = "Gain"),
	VE_Consumption = 1<<1 UMETA(DisplayName = "Consumption"),
	VE_Storage = 1<<2 UMETA(DisplayName = "Storage")
};


USTRUCT(BlueprintType) 
struct FItemProperties
{
	GENERATED_BODY()
public: 
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		EItemType Type;
	UPROPERTY(EditAnywhere, Category = "Properties")
		FString Name;
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		unsigned int ID;
	UPROPERTY(EditAnywhere, Category = "Properties")
		UTexture2D* Image;
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		unsigned int RegisteredID;
	UPROPERTY(EditAnywhere, Category = "Properties")
		unsigned int RequiredSlots;
};
USTRUCT(BlueprintType)
struct FEnergyItemProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
	EEnergyItemType EnergyRelation;
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
		float Value; 
};


/**
 * 
 */
UCLASS()
class SURVIVAL_API UItemHelpers : public UObject
{
	GENERATED_BODY()
public:
	UItemHelpers();
	~UItemHelpers();
};
