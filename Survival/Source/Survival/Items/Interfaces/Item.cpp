// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"
#include "Character/SurvivalCharacter.h"
#include "SurvivalGameMode.h"
#include "Items/Globals/ItemRegister.h"
#include "Components/BoxComponent.h"

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
	m_itemProps.ID = s_itemID;
	s_itemID++;
	m_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = m_root;

	m_image = CreateDefaultSubobject<UTexture2D>(TEXT("UIImage"));

	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	m_mesh->SetupAttachment(RootComponent);

	m_trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	m_trigger->SetupAttachment(RootComponent);
}

AItem::~AItem()
{
}
