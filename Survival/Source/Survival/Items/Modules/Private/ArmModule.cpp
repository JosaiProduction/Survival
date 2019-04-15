// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/ArmModule.h"
#include "Items/Modules/Public/HandModule.h"

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

FString AArmModule::GenerateToolTip() const
{
	FString currentToolTip = Super::GenerateToolTip();
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ECharModuleType"), true);
	return FString(currentToolTip + LINE_TERMINATOR + enumPtr->GetDisplayNameTextByValue((int64)m_props.ModuleType).ToString());
}

AArmModule::AArmModule()
	:Super::ALimbsModule()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
