#include "../Public/BaseAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig_Sight.h"

ABaseAIController::ABaseAIController()
	:Super()
{
	Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	if (Perception && SightConfig)
	{
		Perception->ConfigureSense(*SightConfig);
		Perception->SetDominantSense(SightConfig->GetSenseImplementation());

		SightConfig->SightRadius = 2000.f;
		SightConfig->LoseSightRadius = 2200.f;
		SightConfig->PeripheralVisionAngleDegrees = 90.f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	}

}

void ABaseAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseAIController::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

}