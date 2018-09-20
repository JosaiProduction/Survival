// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemHelpers.generated.h"


UENUM(BlueprintType)
enum class EItemType :uint8 {
	VE_Consumable UMETA(DisplayName ="Consumable"),
	VE_RangeWeapon UMETA(DisplayName = "RangeWeapon"), 
	VE_MeleeWeapon UMETA(DisplayName = "MeleeWeapon")
};


USTRUCT(BlueprintType) 
struct FItemProperties
{
	GENERATED_BODY()
public: 
	UPROPERTY(EditAnywhere, Category = Properties)
		EItemType Type;
	UPROPERTY(EditAnywhere, Category = Properties)
		FString Name;

		unsigned int ID;
	UPROPERTY(EditAnywhere, Category = Properties)
		UTexture2D* Image;
	UPROPERTY(EditAnywhere, Category = Properties)
		unsigned int RegisteredID;
	UPROPERTY(EditAnywhere, Category = Properties)
		unsigned int RequiredSlots;
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
