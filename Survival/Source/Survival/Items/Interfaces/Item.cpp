// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"
#include "Character/SurvivalCharacter.h"
#include "SurvivalGameMode.h"
#include "Items/Globals/ItemRegister.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"

void AItem::BeginPlay()
{
	ASurvivalGameMode* gMode = Cast<ASurvivalGameMode>(GetWorld()->GetAuthGameMode());
	m_itemProps.RegisteredID = gMode->GetRegister()->RegisterItem(this);
	this->PostInit();
}

void AItem::Tick(float DeltaTime)
{
}

void AItem::Use(ASurvivalCharacter* character)
{
}

FItemProperties AItem::GetProps() const
{
	return m_itemProps;
}

AItem::AItem()
{
	m_itemProps = {};
	m_itemProps.ID = s_itemID;
	s_itemID++;
	m_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = m_root;

	m_image = CreateDefaultSubobject<UTexture2D>(TEXT("UIImage"));

	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	m_mesh->SetupAttachment(RootComponent);

	m_trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	m_trigger->SetupAttachment(RootComponent);
	m_trigger->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnBeginOverlap);
	m_trigger->OnComponentEndOverlap.AddDynamic(this, &AItem::OnEndOverlap);
}

AItem::~AItem()
{
}

void AItem::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ASurvivalCharacter* character = Cast<ASurvivalCharacter>(OtherActor);

	if (character)
	{
		character->ReceiveInteractionInfo(EInteractionType::VE_Pick_up);
	}
}

void AItem::OnEndOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	ASurvivalCharacter* character = Cast<ASurvivalCharacter>(OtherActor); 
	if (character)
	{
		character->DropInteractionInfo(EInteractionType::VE_Pick_up);
	}
}

FString AItem::GetToolTip() const
{
	return GenerateToolTip();
}

FString AItem::GenerateToolTip() const
{
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EItemType"), true);
	return m_itemProps.Name + LINE_TERMINATOR+ enumPtr->GetDisplayNameTextByValue((int64)m_itemProps.Type).ToString()+ LINE_TERMINATOR + FString::FromInt(m_itemProps.RequiredSlots);
}
