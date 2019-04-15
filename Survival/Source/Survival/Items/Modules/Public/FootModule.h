// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Public/Item.h"
#include "Items/Modules/Interfaces/Public/ModuleItemInterface.h"
#include "Items/Globals/Public/ItemHelpers.h"
#include "FootModule.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_API AFootModule : public AItem, public IModuleItemInterface
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		FFootModuleProperties m_props;
	UFUNCTION(BlueprintCallable)
	virtual ECharModuleType GetModuleType() override;
	virtual FString GenerateToolTip() const override;
	AFootModule();
};
