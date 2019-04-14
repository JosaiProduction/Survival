// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "../Public/SurvivalGameMode.h"
#include "HUD/Public/SurvivalHUD.h"
#include "Character/Public/SurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "Items/Globals/Public/ItemRegister.h"

ASurvivalGameMode::ASurvivalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASurvivalHUD::StaticClass();


	m_itemRegister = NewObject<UItemRegister>();
}

UItemRegister * ASurvivalGameMode::GetRegister() const
{
	return m_itemRegister;
}
