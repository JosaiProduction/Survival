// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Helpers.generated.h"


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
	UPROPERTY(EditAnywhere, Category = Properties)
		unsigned int ID;
	UPROPERTY(EditAnywhere, Category = Properties)
		UTexture2D* Image;
	UPROPERTY(EditAnywhere, Category = Properties)
		unsigned int RegisteredID;
};

/**
 * 
 */
UCLASS()
class SURVIVAL_API UHelpers : public UObject
{
	GENERATED_BODY()
public:
	UHelpers();
	~UHelpers();
};
