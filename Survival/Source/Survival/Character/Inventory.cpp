// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"
#include "Character/SurvivalCharacter.h"

UInventory::UInventory()
	:m_isActive(false)
{
}

void UInventory::AddItem(AItem * item)
{
	m_itemProps.Add(item->GetProps());
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
