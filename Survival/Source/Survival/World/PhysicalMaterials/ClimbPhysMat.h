// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ClimbPhysMat.generated.h"
UENUM(BlueprintType)
enum class ESurfaceType :uint8 {
	VE_Tree UMETA(DisplayName = "Tree"),
	VE_Wall UMETA(DisplayName = "Wall")
};
/**
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = Physics)
class SURVIVAL_API UClimbPhysMat : public UPhysicalMaterial
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category = Propterty)
		unsigned int m_neededClimbLevel;
	UPROPERTY(EditAnywhere, Category = Property)
		ESurfaceType m_surfaceType;
public:
	UClimbPhysMat();

	int GetReqClimbLvl() const;


};
