// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/RangeWeapon.h"

#include "Items/Projectiles/Public/Projectile.h"

ARangeWeapon::ARangeWeapon()
{
	m_projectile = CreateDefaultSubobject<AProjectile>(TEXT("Projectile"));
}

ARangeWeapon::~ARangeWeapon()
{
}
