#include "../Public/BaseAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig_Sight.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Sight.h"
#include "Character/Public/SurvivalCharacter.h"
#include "AI/AI/Base/Components/Public/AdvancedAIPerceptionComponent.h"

ABaseAIController::ABaseAIController()
	:Super()
{
	Perception = CreateDefaultSubobject<UAdvancedAIPerceptionComponent>(TEXT("Perception"));
	this->AddOwnedComponent(Perception);
}

void ABaseAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseAIController::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
}