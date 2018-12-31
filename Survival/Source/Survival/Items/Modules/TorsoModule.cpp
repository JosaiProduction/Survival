// Fill out your copyright notice in the Description page of Project Settings.

#include "TorsoModule.h"
#include "Items/Modules/HeadModule.h"
#include "Items/Modules/LimbsModule.h"

AHeadModule * ATorsoModule::GetHeadModule() const
{
	return Cast<AHeadModule>(m_headModule.GetDefaultObject());
}

ALimbsModule * ATorsoModule::GetUpperLeftModule() const
{
	return Cast<ALimbsModule>(m_upperLeftLimb.GetDefaultObject());
}

ALimbsModule * ATorsoModule::GetUpperRightModule() const
{
	return Cast<ALimbsModule>(m_upperRightLimb.GetDefaultObject());

}

ALimbsModule * ATorsoModule::GetLowerLeftModule() const
{
	return Cast<ALimbsModule>(m_lowerLeftLimb.GetDefaultObject());
}

ALimbsModule * ATorsoModule::GetLowerRightModule() const
{
	return Cast<ALimbsModule>(m_lowerRightLimb.GetDefaultObject());
}

ECharModuleType ATorsoModule::GetModuleType()
{
	return m_props.ModuleType;
}

ATorsoModule::ATorsoModule()
	:Super::AItem()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
