// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Public/Item.h"
#include "Items/Globals/Public/ItemHelpers.h"
#include "Items/Modules/Public/LimbsModule.h"
#include "ArmModule.generated.h"

/**
 *
 */
UCLASS()
class SURVIVAL_API AArmModule : public ALimbsModule
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		FArmModuleProperties m_props;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class AHandModule> m_handModule;

	UFUNCTION(BlueprintCallable)
		class AHandModule* GetHandModule() const;
	UFUNCTION(BlueprintCallable)
	virtual ECharModuleType GetModuleType() override;
	virtual bool GetLimbType() final;
	virtual FString GenerateToolTip() const override; 

	AArmModule();



};