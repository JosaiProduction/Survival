// Fill out your copyright notice in the Description page of Project Settings.

#include "FootModule.h"

ECharModuleType AFootModule::GetModuleType()
{
	return m_props.ModuleType;
}

FString AFootModule::GenerateToolTip() const
{
	FString currentToolTip = Super::GenerateToolTip();
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ECharModuleType"), true);
	return FString(currentToolTip + LINE_TERMINATOR + enumPtr->GetDisplayNameTextByValue((int64)m_props.ModuleType).ToString());
}

AFootModule::AFootModule()
	:Super::AItem()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
