// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/ItemRegister.h"

#include "Items/Public/MeleeWeapon.h"
#include "Items/Public/RangeWeapon.h"
#include "Items/Globals/Public/ItemHelpers.h"


unsigned int UItemRegister::RegisterItem(AItem * item)
{
	switch (item->GetProps().Type)
	{
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
	case EItemType::VE_MeleeWeapon:
		return m_meleeWeapons[props.RegisteredID];
	case EItemType::VE_RangeWeapon:
		return m_rangeWeapons[props.RegisteredID];
	default: 
		return nullptr;
	}
}
