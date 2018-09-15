// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemRegister.h"

#include "Items/Interfaces/Consumables.h"
#include "Items/Interfaces/MeleeWeapon.h"
#include "Items/Interfaces/RangeWeapon.h"
#include "Items/Globals/Helpers.h"


unsigned int UItemRegister::RegisterItem(AItem * item)
{
	switch (item->GetProps().Type)
	{
	case EItemType::VE_Consumable: 
		for (AConsumables* consumable : m_consumables)
		{
			if (item == consumable)
				return consumable->GetProps().RegisteredID;
		}
		return m_consumables.Add(Cast<AConsumables>(item));
	case EItemType::VE_MeleeWeapon: 
		for (AMeleeWeapon* meleeWeapon : m_meleeWeapons)
		{
			if (item == meleeWeapon)
				return meleeWeapon->GetProps().RegisteredID;
		}
		return m_meleeWeapons.Add(Cast<AMeleeWeapon>(item));
	case EItemType::VE_RangeWeapon: 
		for (ARangeWeapon* rangeWeapon: m_rangeWeapons)
		{
			if (item == rangeWeapon)
				return rangeWeapon->GetProps().RegisteredID;
		}
		return m_rangeWeapons.Add(Cast<ARangeWeapon>(item));
		default: 
			return 0;
	}

}

AItem * UItemRegister::GetItem(FItemProperties props)
{
	switch (props.Type)
	{
	case EItemType::VE_Consumable:
		return m_consumables[props.RegisteredID];
	case EItemType::VE_MeleeWeapon:
		return m_meleeWeapons[props.RegisteredID];
	case EItemType::VE_RangeWeapon:
		return m_rangeWeapons[props.RegisteredID];
	default: 
		return nullptr;
	}
}
