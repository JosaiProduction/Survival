#include "../Public/BaseAICharacter.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Runtime/NavigationSystem/Public/NavigationInvokerComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"


ABaseAICharacter::ABaseAICharacter()
{
	NavigationInvoker = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("Invoker Component"));
}

void ABaseAICharacter::BeginPlay()
{
	UNavigationSystemV1* navigationArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);
	this->NavigationInvoker->RegisterWithNavigationSystem(*navigationArea);
	navigationArea->RegisterInvoker(*this, TileGenerationRadius, TileRemovalRadius);
}

void ABaseAICharacter::Tick(float deltaSeconds)
{
}

void ABaseAICharacter::GetActorEyesViewPoint(FVector& location, FRotator& rotation) const
{
	if (!GetMesh())
	{
		return;
	}
	
	const USkeletalMeshSocket* headSocket = GetMesh()->GetSocketByName(HeadSocketName);// TODO: Can get adjusted if we have a better mesh with bones which look in the right direction
	if (!headSocket)
	{
		int32 boneIndex = GetMesh()->GetBoneIndex(HeadSocketName);
		FTransform boneTransform = GetMesh()->GetBoneTransform(boneIndex);
		location = boneTransform.GetLocation();
		rotation = boneTransform.GetRotation().Rotator();
	}
	location = headSocket->GetSocketLocation(GetMesh());
	rotation = headSocket->GetSocketTransform(GetMesh()).Rotator();
}

