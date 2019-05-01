#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseAICharacter.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ABaseAICharacter : public ACharacter
{
	GENERATED_BODY()


		ABaseAICharacter();
public: 

	virtual void BeginPlay() override;
	virtual void Tick(float deltaSeconds) override;
	virtual void GetActorEyesViewPoint(FVector& location, FRotator& rotation) const override;

	UFUNCTION()
		void ReceiveStimuli(class UStimuliComponent* stimuli);

	UPROPERTY(EditAnywhere, Category = "Navigation")
		class UNavigationInvokerComponent* NavigationInvoker;

	UPROPERTY(EditAnywhere, Category = "Navigation", meta =(ClampMin ="0.1", UIMin = "0.1"))
		float TileGenerationRadius;
	UPROPERTY(EditAnywhere, Category = "Navigation", meta = (ClampMin = "0.1", UIMin = "0.1"))
		float TileRemovalRadius;
	UPROPERTY(EditAnywhere, Category = "Pereception")
		FName HeadSocketName;
	UPROPERTY(EditAnywhere, Category = "Perception")
		class UAdvancedAIPerceptionComponent* Perception;

};