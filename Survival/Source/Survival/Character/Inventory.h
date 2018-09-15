// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Inventory.generated.h"

class ASurvivalCharacter;

/**
 * 
 */
UCLASS()
class SURVIVAL_API UInventory : public UObject
{
	GENERATED_BODY()
public:
	UInventory();

private: 
	UPROPERTY(VisibleDefaultsOnly, Category = Items)
		TArray<FItemProperties> m_itemProps;

	UPROPERTY()
		bool m_isActive;
public:
	void AddItem(AItem* item);

	AItem* DropItem(unsigned int index);

	void UseItem(unsigned int index);

	void Enable(); 

	void Disable();

	UFUNCTION(BlueprintCallable)
		TArray<FItemProperties> GetItemProps() const;

	UFUNCTION(BlueprintCallable)
		bool IsEnabled();
	~UInventory();
};
