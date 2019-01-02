// Fill out your copyright notice in the Description page of Project Settings.

#include "TorsoModule.h"
#include "Items/Modules/HeadModule.h"
#include "Items/Modules/LimbsModule.h"

AHeadModule * ATorsoModule::GetHeadModule() const
{
	return m_headModule.GetDefaultObject();
}

ALimbsModule * ATorsoModule::GetUpperLeftModule() const
{
	return m_upperLeftLimbModule.GetDefaultObject();
}

ALimbsModule * ATorsoModule::GetUpperRightModule() const
{
	return m_upperRightLimbModule.GetDefaultObject();
}

ALimbsModule * ATorsoModule::GetLowerLeftModule() const
{
	return m_lowerLeftLimbModule.GetDefaultObject();
}

ALimbsModule * ATorsoModule::GetLowerRightModule() const
{
	return m_lowerRightLimbModule.GetDefaultObject();
}

void ATorsoModule::UpdateHeadModule(AHeadModule * headModule)
{
}

void ATorsoModule::UpdateLimbModule(ALimbsModule* limbModule, ALimbsModule * newLimbModule)
{
	limbModule = newLimbModule;
}

ECharModuleType ATorsoModule::GetModuleType()
{
	return m_props.ModuleType;
}

FString ATorsoModule::GenerateToolTip() const
{
	FString currentToolTip = Super::GenerateToolTip();
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ECharModuleType"), true);
	return FString(currentToolTip + LINE_TERMINATOR + enumPtr->GetDisplayNameTextByValue((int64)m_props.ModuleType).ToString());
}

ATorsoModule::ATorsoModule()
	:Super::AItem()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
