// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DayCycle.generated.h"

UCLASS()
class SURVIVAL_API ADayCycle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADayCycle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int m_initTime; 
	int m_currTime; 
	int m_dayDuration; 
	int m_nightDuration;
	UPROPERTY(EditAnywhere, Category = Sun)
	class UDirectionalLightComponent* m_sun;
	UPROPERTY(EditAnywhere, Category = Sun)
	class USceneComponent* m_root;
};
