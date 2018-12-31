// Fill out your copyright notice in the Description page of Project Settings.

#include "HandModule.h"

ECharModuleType AHandModule::GetModuleType()
{
	return m_props.ModuleType;
}

AHandModule::AHandModule()
	:Super::AItem()
{
	m_props = {};
	m_itemProps.Type = EItemType::VE_Module;
}
