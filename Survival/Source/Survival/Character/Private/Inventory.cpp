// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/Inventory.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Items/Public/EnergyRelatedItem.h"
#include "Character/Public/CharStats.h"
#include "Character/Public/SurvivalCharacter.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Items/Modules/Public/FootModule.h"
#include "Items/Modules/Interfaces/Public/ModuleItemInterface.h"
#include "Items/Interfaces/Public/Item.h"

UInventory::UInventory()
	:m_itemSlots(20)
	,m_isActive(false)
{
	bWantsBeginPlay = true;
}

void UInventory::BeginPlay()
{
	Super::BeginPlay();
	for (int32 i = 0; i < m_startItems.Num(); i++)
	{
		if (m_startItems[i])
		{
			AItem* item = m_startItems[i].GetDefaultObject();
			if (item)
			{
				this->AddItem(item);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Didn't get item"));
			}
		}
	}
	AItem* item = m_startTorso.GetDefaultObject();
	this->AddItem(item);
}

void UInventory::AddItem(AItem * item)
{
	if (item)
	{
		switch (item->GetProps().Type)
		{
		case EItemType::VE_EnergyRelated:
		{
			m_energyRelatedItemProps.Add(item->GetProps());
			AEnergyRelatedItem* eItem = Cast<AEnergyRelatedItem>(item);
			for (int i = 0; i < eItem->m_energyProps.Num(); i++)
			{
				switch (eItem->m_energyProps[i].EnergyRelation)
				{
				case EEnergyItemType::VE_Storage:
				{
					m_charStats->IncreaseEnergyStorage(eItem->m_energyProps[i].Value);
					break;
				}
				case EEnergyItemType::VE_Gain:
				{
					m_charStats->IncreaseEnergyGain(eItem->m_energyProps[i].Value);
					break;
				}
				case EEnergyItemType::VE_Consumption:
					m_charStats->IncreaseEnergyConsumption(eItem->m_energyProps[i].Value);
					break;
				}
			}
		}
		case EItemType::VE_Module:
		{
			ATorsoModule* torso = Cast<ATorsoModule>(item);
			if (torso)
			{
				m_torso = torso;
			}
		}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No item available"));
	}
}

AItem* UInventory::DropItem(unsigned int index)
{
	return nullptr;
}

void UInventory::UseItem(unsigned int index)
{
}

void UInventory::Enable()
{
	m_isActive = true;
}

void UInventory::Disable()
{
	m_isActive = false;
}

TArray<FItemProperties> UInventory::GetItemProps() const
{
	return m_itemProps;
}

ATorsoModule* UInventory::GetTorsoModule()
{
	return m_torso;
}

bool UInventory::IsEnabled()
{
	return m_isActive;
}

UInventory::~UInventory()
{
}
