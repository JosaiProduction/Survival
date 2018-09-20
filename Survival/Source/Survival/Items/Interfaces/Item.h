// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items/Globals/ItemHelpers.h"
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
	virtual void BeginPlay() final;
	virtual void PostInit() PURE_VIRTUAL(AItem::PostInit, ;);

private:
	UPROPERTY(EditAnywhere, Category = Item)
		UTexture2D* m_image;
	UPROPERTY(EditAnywhere, Category = Item)
		UStaticMeshComponent* m_mesh;
	UPROPERTY(EditAnywhere, Category = Item)
		class UBoxComponent* m_trigger;
	UPROPERTY(EditAnywhere, Category = Item)
		FItemProperties m_itemProps;
	UPROPERTY(EditAnywhere, Category = Item)
		USceneComponent* m_root;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: 

	bool m_canBeUsed;
	void Use(ASurvivalCharacter* character);

	FItemProperties GetProps() const;

	UFUNCTION()
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	AItem();
	~AItem();

	
};
