// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Items/Globals/ItemHelpers.h"
#include "Items/Modules/Interfaces/ModuleItemInterface.h"
#include "HeadModule.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_API AHeadModule : public AItem, public IModuleItemInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		FHeadModuleProperties m_props;
	UFUNCTION(BlueprintCallable)
	virtual ECharModuleType GetModuleType() override;
	virtual FString GenerateToolTip() const override;
	AHeadModule();

	
	
	
};
