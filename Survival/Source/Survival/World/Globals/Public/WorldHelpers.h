// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldHelpers.generated.h"

USTRUCT(BlueprintType)
struct FTime
{
	GENERATED_BODY()
public: 
	UPROPERTY(EditAnywhere, Category = "Time")
		uint8 Hours; 
	UPROPERTY(EditAnywhere, Category = "Time")
		uint8 Minutes; 
	UPROPERTY(EditAnywhere, Category = "Time")
		uint8 Seconds;
};

/**
 * 
 */
UCLASS()
class SURVIVAL_API UWorldHelpers : public UObject
{
	GENERATED_BODY()

public: 
		UWorldHelpers(); 
	~UWorldHelpers();
	
};
