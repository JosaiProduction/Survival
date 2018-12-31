// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Items/Globals/ItemHelpers.h"
#include "Items/Modules/Interfaces/ModuleItemInterface.h"
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

	virtual ECharModuleType GetModuleType() override;
	AHandModule();
};

