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

FString ALegModule::GenerateToolTip() const
{
	FString currentToolTip = Super::GenerateToolTip();
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ECharModuleType"), true);
	return FString(currentToolTip + LINE_TERMINATOR + enumPtr->GetDisplayNameTextByValue((int64)m_props.ModuleType).ToString());
}

ALegModule::ALegModule()
	:Super::ALimbsModule()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
