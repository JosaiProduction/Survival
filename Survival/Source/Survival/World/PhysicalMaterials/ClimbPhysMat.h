// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ClimbPhysMat.generated.h"

/**
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = Physics)
class SURVIVAL_API UClimbPhysMat : public UPhysicalMaterial
{
	GENERATED_BODY()
protected:
	unsigned int m_neededClimbLevel;
public:
	UClimbPhysMat();

	int GetReqClimbLvl() const;


};
