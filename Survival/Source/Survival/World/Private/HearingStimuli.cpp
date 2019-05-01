#include "../Public/HearingStimuli.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"



UHearingStimuli::UHearingStimuli()
{
	this->HearRadius = CreateDefaultSubobject<USphereComponent>(TEXT("Radius Component"));
	AActor* owner = this->GetOwner();
	if (!owner)
	{
		return;
	}
	this->HearRadius->SetupAttachment(owner->GetRootComponent());
	HearRadius->OnComponentBeginOverlap.AddDynamic(this, &UHearingStimuli::OnBeginOverlap);
	HearRadius->OnComponentEndOverlap.AddDynamic(this, &UHearingStimuli::OnEndOverlap);
}

void UHearingStimuli::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABaseAICharacter* perceivingAI = Cast<ABaseAICharacter>(OtherActor);
	if (!perceivingAI)
	{
		return;
	}
	NearbyPerceivingActors.Add(perceivingAI);
}

void UHearingStimuli::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABaseAICharacter* perceivingAI = Cast<ABaseAICharacter>(OtherActor);
	if (!perceivingAI)
	{
		return;
	}
	NearbyPerceivingActors.Remove(perceivingAI);
}
