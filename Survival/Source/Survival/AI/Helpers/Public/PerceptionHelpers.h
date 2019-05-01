#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerceptionHelpers.generated.h"


UENUM(BlueprintType)
enum class EPerceivedCharacterCategory :uint8
{
	VE_Friendly UMETA(DisplayName ="Friendly"), 
	VE_Mean UMETA(DisplayName ="Mean"), 
	VE_Neutral UMETA(DisplayName = "Neutral")
};


USTRUCT(BlueprintType)
struct FPerceivedInformation
{
	GENERATED_BODY()
};


UCLASS()
class SURVIVAL_API UPerceptionHelpers : public UObject
{
	GENERATED_BODY()

public: 
	UPerceptionHelpers();
};