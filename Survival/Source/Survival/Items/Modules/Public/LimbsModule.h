// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Public/Item.h"
#include "Items/Globals/Public/ItemHelpers.h"
#include "Items/Modules/Interfaces/Public/ModuleItemInterface.h"
#include "LimbsModule.generated.h"

/**
 * 
 */
UCLASS(abstract, meta=(IsBlueprintBase="false"))
class SURVIVAL_API ALimbsModule : public AItem, public IModuleItemInterface
{
	GENERATED_BODY()
public: 
	ALimbsModule();
	virtual ECharModuleType GetModuleType();
	/* 
	Returns true if it's an arm module, false if it's a leg module
	*/
	UFUNCTION(BlueprintCallable)
	virtual bool GetLimbType();
};
