// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items/Globals/Helpers.h"
#include "Item.generated.h"

class ASurvivalCharacter;

static unsigned int s_itemID;
/**
 * 
 */
UCLASS(abstract)
class SURVIVAL_API AItem : public AActor
{
	GENERATED_BODY()

public:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = Item)
		UTexture2D* m_image;
	UPROPERTY(EditAnywhere, Category = Item)
		UStaticMeshComponent* m_mesh;
	UPROPERTY(EditAnywhere, Category = Item)
		UShapeComponent* m_trigger;
	UPROPERTY(EditAnywhere, Category = Item)
		FItemProperties m_itemProps;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: 

	bool m_canBeUsed;

	void Use(ASurvivalCharacter* character);

	FItemProperties GetProps() const;

	AItem();
	~AItem();

	
};
