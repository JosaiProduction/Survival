// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/Projectile.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	m_collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	RootComponent = m_collider;
	m_collider->InitSphereRadius(1.0f);
	m_collider->BodyInstance.SetCollisionProfileName("Projectile");
	m_collider->SetSimulatePhysics(true);
	m_collider->SetNotifyRigidBodyCollision(true);
	m_collider->BodyInstance.SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_collider->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	m_collider->CanCharacterStepUpOn = ECB_No;

	m_collider->OnComponentHit.AddDynamic(this, &AProjectile::OnBeginOverlap);

	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	m_mesh->SetupAttachment(RootComponent);


	m_projectileComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	m_projectileComp->UpdatedComponent = m_collider;
	m_projectileComp->InitialSpeed = 3000.f;
	m_projectileComp->MaxSpeed = 3000.f;
	m_projectileComp->bRotationFollowsVelocity = true;
	m_projectileComp->bShouldBounce = true;

	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
	}
	Destroy();
}


