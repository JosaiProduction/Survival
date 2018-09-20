// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Weapons/Weapon.h"
#include "RangeWeapon.generated.h"

class AProjectile;

/**
 * 
 */
UCLASS(abstract)
class SURVIVAL_API ARangeWeapon : public AWeapon
{
	GENERATED_BODY()
public: 	
	UPROPERTY(EditAnywhere, Category = Stats)
		unsigned int m_maxAmmo;
	UPROPERTY(EditAnywhere, Category = Stats)
		float m_bulletSpeed;

	UPROPERTY(EditAnywhere, Category = Item)
		AProjectile* m_projectile;

public: 
	ARangeWeapon();
	~ARangeWeapon();
};
