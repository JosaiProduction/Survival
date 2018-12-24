// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Weapon.h"
#include "MeleeWeapon.generated.h"

/**
 * 
 */
UCLASS(abstract)
class SURVIVAL_API AMeleeWeapon : public AWeapon
{
	GENERATED_BODY()
public: 
	AMeleeWeapon();
};
