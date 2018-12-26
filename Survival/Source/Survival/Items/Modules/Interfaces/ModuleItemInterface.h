// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Items/Globals/ItemHelpers.h"
#include "ModuleItemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UModuleItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SURVIVAL_API IModuleItemInterface
{
	GENERATED_BODY()
public: 
	virtual ECharModuleType GetModuleType() = 0;
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	
};
