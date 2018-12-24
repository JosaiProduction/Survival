// Fill out your copyright notice in the Description page of Project Settings.

#include "CharStats.h"


// Sets default values for this component's properties
UCharStats::UCharStats()
{
	m_props = {};
	PrimaryComponentTick.bCanEverTick = true;
}

void UCharStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	RegenerateEnergy(DeltaTime);
}

void UCharStats::RegenerateEnergy(float DeltaTime)
{
	if (m_props.CurrentEnergyStorage < m_props.MaxEnergyStorage)
	{
		m_props.CurrentEnergyStorage += m_props.EnergyGain/(1/DeltaTime);
	}
	if (m_props.CurrentEnergyStorage >= m_props.MaxEnergyStorage)
	{
		m_props.CurrentEnergyStorage = m_props.MaxEnergyStorage;
	}
}
