// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Items/Globals/ItemHelpers.h"
#include "Items/Modules/LimbsModule.h"
#include "LegModule.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_API ALegModule : public ALimbsModule
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		FLegModuleProperties m_props;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class AFootModule>m_footModule;

	UFUNCTION(BlueprintCallable)
		class AFootModule* GetFootModule() const;
	UFUNCTION(BlueprintCallable)
	virtual ECharModuleType GetModuleType() override;
	virtual bool GetLimbType() final;
	virtual FString GenerateToolTip() const override;
	ALegModule();
};
