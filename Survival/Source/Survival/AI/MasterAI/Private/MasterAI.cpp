// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/MasterAI.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AMasterAI::AMasterAI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMasterAI::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> foundActors;
	UGameplayStatics::GetAllActorsOfClass(this, ARegionalAI::StaticClass(), foundActors);
	for (AActor* actor : foundActors)
	{
		ARegionalAI* regionalAIActor = Cast<ARegionalAI>(actor);
		if (regionalAIActor)
		{
			RegionalAIs.Add(regionalAIActor);
		}
	}

}

// Called every frame
void AMasterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

