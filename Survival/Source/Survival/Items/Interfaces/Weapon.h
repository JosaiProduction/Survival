// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Interfaces/Item.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS(abstract)
class SURVIVAL_API AWeapon : public AItem
{
	GENERATED_BODY()
public: 
	UPROPERTY(EditAnywhere, Category = "Stats")
		float m_attackSpeed;
	UPROPERTY(EditAnywhere, Category = "Stats")
		float m_damage;

	virtual void PostInit() final;




public: 
	UFUNCTION()
		void Attack(); 


};
