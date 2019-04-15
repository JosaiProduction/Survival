// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/DayCycle.h"
#include "Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"


// Sets default values
ADayCycle::ADayCycle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = m_root;
	m_sun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun"));
	m_sun->SetupAttachment(RootComponent);
	m_sun->SetMobility(EComponentMobility::Movable);
}

// Called when the game starts or when spawned
void ADayCycle::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADayCycle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ADayCycle::ChangeSeason()
{
	m_bSeasonChange = !m_bSeasonChange;
}

