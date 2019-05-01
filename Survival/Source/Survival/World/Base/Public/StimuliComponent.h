#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "HearingStimuli.generated.h"

UCLASS()
class UStimuliComponent : public UActorComponent
{
	GENERATED_BODY()

public:

		UStimuliComponent();

	UFUNCTION()
		void ActivateStimuli();
	UPROPERTY(VisibleAnywhere, Category = "Stimuli")
		class TArray<class ABaseAICharacter*> NearbyPerceivingActors;
};