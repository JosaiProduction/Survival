// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/HandModule.h"

ECharModuleType AHandModule::GetModuleType()
{
	return m_props.ModuleType;
}

FString AHandModule::GenerateToolTip() const
{
	FString currentToolTip = Super::GenerateToolTip();
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ECharModuleType"), true);
	return FString(currentToolTip + LINE_TERMINATOR + enumPtr->GetDisplayNameTextByValue((int64)m_props.ModuleType).ToString());
}

AHandModule::AHandModule()
	:Super::AItem()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
