// Fill out your copyright notice in the Description page of Project Settings.

#include "EnergyRelatedItem.h"

AEnergyRelatedItem::AEnergyRelatedItem()
	:Super::AItem()
{
	m_itemProps.Type = EItemType::VE_EnergyRelated;
}

void AEnergyRelatedItem::PostInit()
{
}
