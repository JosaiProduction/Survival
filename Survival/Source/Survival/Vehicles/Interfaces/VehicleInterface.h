// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VehicleInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UVehicleInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SURVIVAL_API IVehicleInterface
{
	GENERATED_BODY()
public: 
	UFUNCTION()
		virtual void Enter() = 0;
	UFUNCTION()
		virtual void Exit() = 0; 
	UFUNCTION()
		virtual void Drive() = 0;

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	
};
