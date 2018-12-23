// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemInterface.h"
#include "Character/SurvivalCharacter.h"



// Add default functionality here for any IItemInterface functions that are not pure virtual.

void IItemInterface::OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	ASurvivalCharacter* character = Cast<ASurvivalCharacter>(OtherActor);

	if (character)
	{
		character->ReceiveInteractionInfo(EInteractionType::VE_Pick_up);
	}
}

void IItemInterface::OnEndOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	ASurvivalCharacter* character = Cast<ASurvivalCharacter>(OtherActor);
	if (character)
	{
		character->DropInteractionInfo(EInteractionType::VE_Pick_up);
	}
}

