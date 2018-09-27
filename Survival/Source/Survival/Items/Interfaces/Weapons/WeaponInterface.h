// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WeaponInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SURVIVAL_API IWeaponInterface
{
	GENERATED_BODY()
public: 
	UFUNCTION()
		virtual void Attack() = 0;
	UFUNCTION()
		virtual float GetAttackSpeed() = 0;
	UFUNCTION()
		virtual float GetDamage() = 0;
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	
};
