// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Public/Item.h"
#include "Items/Globals/Public/ItemHelpers.h"
#include "Items/Modules/Interfaces/Public/ModuleItemInterface.h"
#include "HandModule.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_API AHandModule : public AItem, public IModuleItemInterface
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		FHandModuleProperties m_props;
	UFUNCTION(BlueprintCallable)
	virtual ECharModuleType GetModuleType() override;
	virtual FString GenerateToolTip() const override;
	AHandModule();
};

