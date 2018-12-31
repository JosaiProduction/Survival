// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Items/Globals/ItemHelpers.h"
#include "Items/Modules/LimbsModule.h"
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
		FHandModuleProperties m_props;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class AHandModule> m_handModule;

	UFUNCTION(BlueprintCallable)
		class AHandModule* GetHandModule() const;

	virtual ECharModuleType GetModuleType() override;
	virtual bool GetLimbType() final;

	AArmModule();



};