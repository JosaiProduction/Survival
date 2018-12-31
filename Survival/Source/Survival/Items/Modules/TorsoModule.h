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
		TSubclassOf<class ALimbsModule> m_upperLeftLimb; 
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class ALimbsModule> m_upperRightLimb;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class ALimbsModule> m_lowerLeftLimb;
	UPROPERTY(EditAnywhere, Category = "Properties| Module")
		TSubclassOf<class ALimbsModule> m_lowerRightLimb;

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


	virtual ECharModuleType GetModuleType() override;
	ATorsoModule();
};
