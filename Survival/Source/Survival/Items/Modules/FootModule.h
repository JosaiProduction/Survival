// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Items/Modules/Interfaces/ModuleItemInterface.h"
#include "Items/Globals/ItemHelpers.h"
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

	virtual ECharModuleType GetModuleType() override;
	AFootModule();
};