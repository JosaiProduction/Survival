// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Globals/ItemHelpers.h"
#include "Items/Modules/TorsoModule.h"
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
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		unsigned int m_itemSlots;
	UPROPERTY(EditAnywhere, Category = "Inventory")
		TArray<TSubclassOf<AItem>> m_startItems;

	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		bool m_isActive;
	UPROPERTY(EditAnywhere, Category = "Inventory")
		TSubclassOf<ATorsoModule> m_startTorso;
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		ATorsoModule* m_torso;

	class UCharStats* m_charStats;
public:
	void AddItem(AItem* item);

	AItem* DropItem(unsigned int index);

	void UseItem(unsigned int index);

	UFUNCTION(BlueprintCallable)
	void Enable(); 
	UFUNCTION(BlueprintCallable)
	void Disable();

	void SetCharStats(class UCharStats* stats) { m_charStats = stats; }

	UFUNCTION(BlueprintCallable)
		TArray<FItemProperties> GetItemProps() const;
	UFUNCTION(BlueprintCallable)
		ATorsoModule* GetTorsoModule(); 

	UFUNCTION(BlueprintCallable)
		bool IsEnabled();
	~UInventory();
};
