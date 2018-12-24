// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "World/Globals/WorldHelpers.h"
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

	UPROPERTY(EditAnywhere, Category = "Time")
		bool m_bIsSummer;
	UPROPERTY(EditAnywhere, Category = "Time")
		FTime m_initTime;
	UPROPERTY(EditAnywhere, Category = "Time")
	FTime m_currTime; 
	UPROPERTY(EditAnywhere, Category = "Time")
	int m_dayDuration; 
	UPROPERTY(EditAnywhere, Category = "Time")
	int m_nightDuration;

	UPROPERTY(EditAnywhere, Category = "Sun")
	class UDirectionalLightComponent* m_sun;
	UPROPERTY(EditAnywhere, Category = "Sun")
	class USceneComponent* m_root;

	void ChangeSeason();

private:
	bool m_bSeasonChange;


};
