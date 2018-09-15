// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGameMode.h"
#include "SurvivalHUD.h"
#include "Character/SurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "Items/Globals/ItemRegister.h"

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
