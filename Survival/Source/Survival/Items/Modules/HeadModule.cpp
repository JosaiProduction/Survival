// Fill out your copyright notice in the Description page of Project Settings.

#include "HeadModule.h"

ECharModuleType AHeadModule::GetModuleType()
{
	return m_props.ModuleType;
}

AHeadModule::AHeadModule()
	:Super::AItem()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
