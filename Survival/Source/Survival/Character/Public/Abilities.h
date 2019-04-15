// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Character/Globals/Public/CharHelpers.h"
#include "Abilities.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_API UAbilities : public UActorComponent
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditAnywhere, Category = "Abilities")
		FCharAbilities m_abilities;

	UAbilities();
};
