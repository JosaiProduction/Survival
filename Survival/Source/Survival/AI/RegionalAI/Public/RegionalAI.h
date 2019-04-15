#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RegionalAI.generated.h"


USTRUCT()
struct FRegionalInformation
 {
	GENERATED_BODY()


};

UCLASS()
class SURVIVAL_API ARegionalAI : public AActor
{
	GENERATED_BODY()

public: 
	ARegionalAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};