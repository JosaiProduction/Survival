// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Items/Globals/ItemHelpers.h"
#include "EnergyRelatedItem.generated.h"

/**
 * 
 */
UCLASS(abstract)
class SURVIVAL_API AEnergyRelatedItem : public AItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
		TArray<FEnergyItemProperties> m_energyProps;

	AEnergyRelatedItem();
	virtual void PostInit() final;
};
