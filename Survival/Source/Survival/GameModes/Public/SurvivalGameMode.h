// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SurvivalGameMode.generated.h"

class UItemRegister;

UCLASS(minimalapi)
class ASurvivalGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

private: 
	UItemRegister* m_itemRegister;

public:
	ASurvivalGameMode();

	UItemRegister* GetRegister() const; 

};



