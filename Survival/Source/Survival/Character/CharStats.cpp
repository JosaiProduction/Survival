// Fill out your copyright notice in the Description page of Project Settings.

#include "CharStats.h"


// Sets default values for this component's properties
UCharStats::UCharStats()
{
	m_props = {};
	m_moduleProps = {};
	PrimaryComponentTick.bCanEverTick = true;
}

void UCharStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateEnergy(DeltaTime);
}

void UCharStats::UpdateEnergy(float DeltaTime)
{
	if (m_props.CurrentEnergyStorage < m_props.MaxEnergyStorage)
	{
		m_props.CurrentEnergyStorage += (m_props.EnergyGain - m_props.EnergyConsumption)/(1/DeltaTime);
	}
	if (m_props.CurrentEnergyStorage >= m_props.MaxEnergyStorage)
	{
		m_props.CurrentEnergyStorage = m_props.MaxEnergyStorage;
	}
}
