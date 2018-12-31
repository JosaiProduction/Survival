// Fill out your copyright notice in the Description page of Project Settings.

#include "LegModule.h"
#include "Items/Modules/FootModule.h"

AFootModule * ALegModule::GetFootModule() const
{
	return Cast<AFootModule>(m_footModule.GetDefaultObject());
}

ECharModuleType ALegModule::GetModuleType()
{
	return m_props.ModuleType;
}

bool ALegModule::GetLimbType()
{
	return false;
}

ALegModule::ALegModule()
	:Super::ALimbsModule()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
