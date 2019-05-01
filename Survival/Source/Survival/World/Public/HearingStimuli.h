#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "World/Base/Public/StimuliComponent.h"
#include "HearingStimuli.generated.h"



UCLASS(ClassGroup = (AI), meta = (BlueprintSpawnableComponent))
class UHearingStimuli : public UStimuliComponent
{
	GENERATED_BODY()

public:

	UHearingStimuli();
	
	UFUNCTION()
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UPROPERTY(EditAnywhere, Category = "Stimuli")
		class USphereComponent* HearRadius; 
	

};