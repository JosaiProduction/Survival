// Fill out your copyright notice in the Description page of Project Settings.

#include "ArmModule.h"
#include "Items/Modules/HandModule.h"

AHandModule * AArmModule::GetHandModule() const
{
	return Cast<AHandModule>(m_handModule.GetDefaultObject());
}

ECharModuleType AArmModule::GetModuleType()
{
	return m_props.ModuleType;
}

bool AArmModule::GetLimbType()
{
	return true;
}

AArmModule::AArmModule()
	:Super::ALimbsModule()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
