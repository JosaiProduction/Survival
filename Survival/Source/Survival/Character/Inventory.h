// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Globals/ItemHelpers.h"
#include "Inventory.generated.h"

class ASurvivalCharacter;
class AItem;

/**
 * 
 */
UCLASS()
class SURVIVAL_API UInventory : public UActorComponent
{
	GENERATED_BODY()
public:
	UInventory();

private: 
	UPROPERTY(VisibleAnywhere, Category = Items)
		TArray<FItemProperties> m_itemProps;

	UPROPERTY(VisibleAnywhere, Category = Items)
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
