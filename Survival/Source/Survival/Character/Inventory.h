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
protected: 
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		TArray<FItemProperties> m_itemProps;
	UPROPERTY(VisibleAnywhere, Category = "Inventory| Energy")
		TArray<FItemProperties> m_energyRelatedItemProps;

	UPROPERTY(EditAnywhere, Category = "Inventory")
		TArray<TSubclassOf<AItem>> m_startItems;

	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		bool m_isActive;
	UPROPERTY(VisibleAnywhere, Category = "Inventory| Modules")
		class AFootModule* m_rightModule;
	UPROPERTY(VisibleAnywhere, Category = "Inventory| Modules")
		class AFootModule* m_leftModule;

	class UCharStats* m_charStats;
public:
	void AddItem(AItem* item);

	AItem* DropItem(unsigned int index);

	void UseItem(unsigned int index);

	void Enable(); 

	void Disable();

	void SetCharStats(class UCharStats* stats) { m_charStats = stats; }

	UFUNCTION(BlueprintCallable)
		TArray<FItemProperties> GetItemProps() const;

	UFUNCTION(BlueprintCallable)
		bool IsEnabled();
	~UInventory();
};
