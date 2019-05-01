#include "../Public/StimuliComponent.h"
#include "AI/AI/Base/Public/BaseAICharacter.h"

UStimuliComponent::UStimuliComponent()
{

}

void UStimuliComponent::ActivateStimuli()
{
	for (ABaseAICharacter* perceivingActor : NearbyPerceivingActors)
	{
		perceivingActor->ReceiveStimuli(this);
	}
}
