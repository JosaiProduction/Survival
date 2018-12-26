// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Items/EnergyRelatedItem.h"
#include "Character/CharStats.h"
#include "Character/SurvivalCharacter.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Items/Modules/FootModule.h"
#include "Items/Modules/Interfaces/ModuleItemInterface.h"
#include "Items/Interfaces/Item.h"

UInventory::UInventory()
	:m_isActive(false)
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
					m_charStats->AddEnergyStorage(eItem->m_energyProps[i].Value);
					break;
				}
				case EEnergyItemType::VE_Gain:
				{
					m_charStats->AddEnergyGain(eItem->m_energyProps[i].Value);
					break;
				}
				case EEnergyItemType::VE_Consumption:
					m_charStats->AddEnergyConsumption(eItem->m_energyProps[i].Value);
					break;
				}
			}
		}
		case EItemType::VE_Module:
		{
			IModuleItemInterface* moduleInterface = Cast<IModuleItemInterface>(item);
			if (moduleInterface)
			{
				switch (moduleInterface->GetModuleType())
				{
				case ECharModuleType::VE_FootModule:
				{
					m_footModule = Cast<AFootModule>(item);
					m_charStats->m_moduleProps.FootProps = m_footModule->m_props;
				}
				}
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

bool UInventory::IsEnabled()
{
	return m_isActive;
}

UInventory::~UInventory()
{
}
