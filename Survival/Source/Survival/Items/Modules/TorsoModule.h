// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Items/Globals/ItemHelpers.h"
#include "Items/Modules/Interfaces/ModuleItemInterface.h"
#include "TorsoModule.generated.h"

/**
 * 
 */
class ALimbsModule;

UCLASS()
class SURVIVAL_API ATorsoModule : public AItem, public IModuleItemInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		FTorsoModuleProperties m_props;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class AHeadModule> m_headModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class ALimbsModule> m_upperLeftLimbModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class ALimbsModule> m_upperRightLimbModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class ALimbsModule> m_lowerLeftLimbModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class ALimbsModule> m_lowerRightLimbModule; 

	UFUNCTION(BlueprintCallable)
		class AHeadModule* GetHeadModule() const;
	UFUNCTION(BlueprintCallable)
		 ALimbsModule* GetUpperLeftModule() const;
	UFUNCTION(BlueprintCallable)
		 ALimbsModule* GetUpperRightModule() const;
	UFUNCTION(BlueprintCallable)
		 ALimbsModule* GetLowerLeftModule() const;
	UFUNCTION(BlueprintCallable)
		 ALimbsModule* GetLowerRightModule() const;

	UFUNCTION(BlueprintCallable)
		void UpdateHeadModule(class AHeadModule* headModule); 
	UFUNCTION(BlueprintCallable)
		void UpdateLimbModule(class ALimbsModule* limbModule, class ALimbsModule* newLimbModule);

	UFUNCTION(BlueprintCallable)
	virtual ECharModuleType GetModuleType() override;
	virtual FString GenerateToolTip() const override; 
	ATorsoModule();
};
