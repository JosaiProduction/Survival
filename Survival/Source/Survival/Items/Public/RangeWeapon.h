// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Public/Weapon.h"
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
	UPROPERTY(EditAnywhere, Category = "Properties|Stats")
		unsigned int m_maxAmmo;
	UPROPERTY(EditAnywhere, Category = "Properties|Stats")
		float m_bulletSpeed;

	UPROPERTY(EditAnywhere, Category = "Properties")
		AProjectile* m_projectile;

public: 
	ARangeWeapon();
	~ARangeWeapon();
};
