// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_API UAbilities : public UActorComponent
{
	GENERATED_BODY()
	
public: 

	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int m_mood;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int m_health; 
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int m_stamina; 
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int m_adrenaline;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int m_exhaustion;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int m_stresslevel;
	UPROPERTY(VisibleAnywhere, Category = Abilities)
		int m_tiredness;
};
