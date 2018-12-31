// Fill out your copyright notice in the Description page of Project Settings.

#include "LimbsModule.h"

ALimbsModule::ALimbsModule()
	:Super::AItem()
{

}

ECharModuleType ALimbsModule::GetModuleType()
{
	return ECharModuleType();
}

bool ALimbsModule::GetLimbType()
{
	return false;
}
