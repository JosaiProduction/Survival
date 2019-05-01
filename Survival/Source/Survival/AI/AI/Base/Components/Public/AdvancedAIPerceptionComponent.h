#pragma once
#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "AdvancedAIPerceptionComponent.generated.h"

UCLASS()
class UAdvancedAIPerceptionComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UAdvancedAIPerceptionComponent();
	
	void TickComponent(float deltaTime, enum ELevelTick tickType, FActorComponentTickFunction* thisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Sight")
	bool SightActivated;
	UPROPERTY(EditAnywhere, Category = "Sight", meta = (EditCondition = "SightActivated"))
	float SightRadius;
	UPROPERTY(EditAnywhere, Category = "Sight", meta = (EditCondition = "SightActivated"))
	float ViewAngleDegrees;
	UPROPERTY(EditAnywhere, Category = "Sight", meta = (EditCondition = "SightActivated"))
	float LoseSightRadius;

};

