// Fill out your copyright notice in the Description page of Project Settings.

#include "FootModule.h"

ECharModuleType AFootModule::GetModuleType()
{
	return m_props.ModuleType;
}

AFootModule::AFootModule()
	:Super::AItem()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
