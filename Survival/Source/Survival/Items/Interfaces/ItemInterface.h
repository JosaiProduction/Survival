// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Items/Globals/ItemHelpers.h"
#include "ItemInterface.generated.h"

static unsigned int s_itemID;


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class SURVIVAL_API IItemInterface
{
	GENERATED_BODY()
public:

	UFUNCTION()
		virtual void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	UFUNCTION()
		virtual void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION()
		virtual FItemProperties& GetProps() const = 0;
	UFUNCTION()
		virtual UStaticMeshComponent* GetMesh() const = 0;
	UFUNCTION()
		virtual class UBoxComponent* GetTrigger() const = 0;
	UFUNCTION()
		virtual class USceneComponent* GetRoot() const = 0;

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:


};
