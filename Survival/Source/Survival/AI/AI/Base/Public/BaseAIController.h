#pragma once
#include "CoreMinimal.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "BaseAIController.generated.h"


UCLASS(BlueprintType, Blueprintable)
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
		ABaseAIController(); 

	virtual void BeginPlay() override; 
	virtual void Tick(float deltaSeconds) override;
	UPROPERTY(VisibleAnywhere, Category = "Perception")
	class UAIPerceptionComponent* Perception;
	UPROPERTY(EditAnywhere, Category = "Perception")
	class UAISenseConfig_Sight* SightConfig;

};