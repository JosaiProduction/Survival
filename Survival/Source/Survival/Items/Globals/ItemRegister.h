// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemRegister.generated.h"

class AItem;
class AConsumables; 
class AMeleeWeapon; 
class ARangeWeapon;
struct FItemProperties;

/**
 * 
 */
UCLASS()
class SURVIVAL_API UItemRegister : public UObject
{
	GENERATED_BODY()
private:
	TArray<AConsumables*> m_consumables; 
	TArray<AMeleeWeapon*> m_meleeWeapons;
	TArray<ARangeWeapon*> m_rangeWeapons;
public:
	unsigned int RegisterItem(AItem* item);

	AItem* GetItem(FItemProperties props);

};
