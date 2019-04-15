// Fill out your copyright notice in the Description page of Project Settings.
#include "../Public/CharStats.h"
#include "Character/Globals/Public/CharHelpers.h"


// Sets default values for this component's properties
UCharStats::UCharStats()
{
	m_props = {};
	m_movementProps = {};
	PrimaryComponentTick.bCanEverTick = true;
}

void UCharStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateEnergy(DeltaTime);
}

void UCharStats::BeginPlay()
{
	Super::BeginPlay();
	m_movementProps.MovementMode = EMoveSpeed::VE_Walk;
	m_props.EnergyConsumption = m_movementProps.WalkEnergyConsumption;
}

float UCharStats::GetCurrentMoveSpeed()
{
	switch (m_movementProps.MovementMode)
	{
	case EMoveSpeed::VE_Immobile:
		return 0;
	case EMoveSpeed::VE_Walk:
		return m_movementProps.WalkSpeed;
	case EMoveSpeed::VE_Jog:
		return m_movementProps.JogSpeed;
	case EMoveSpeed::VE_Run:
		return m_movementProps.RunSpeed;
	case EMoveSpeed::VE_Sprint:
		return m_movementProps.SprintSpeed;
	}
	return 0;
}

void UCharStats::UpdateMoveSpeedConsumption(EMoveSpeed currentMoveSpeed, EMoveSpeed nextMoveSpeed)
{
	switch (currentMoveSpeed)
	{
	case EMoveSpeed::VE_Immobile:
		m_movementProps.MovementMode = m_currentMoveSpeed;
		break;
	case EMoveSpeed::VE_Walk:
		m_props.EnergyConsumption -= m_movementProps.WalkEnergyConsumption;
		break;
	case EMoveSpeed::VE_Jog:
		m_props.EnergyConsumption -= m_movementProps.JogEnergyConsumption;
		break;
	case EMoveSpeed::VE_Run:
		m_props.EnergyConsumption -= m_movementProps.RunEnergyConsumption;
		break;
	case EMoveSpeed::VE_Sprint:
		m_props.EnergyConsumption -= m_movementProps.SprintEnergyConsumption;
		break;
	}
	switch (nextMoveSpeed)
	{
	case EMoveSpeed::VE_Immobile:
		m_currentMoveSpeed = m_movementProps.MovementMode;
		m_movementProps.MovementMode = EMoveSpeed::VE_Immobile;
		break;
	case EMoveSpeed::VE_Walk:
		m_props.EnergyConsumption += m_movementProps.WalkEnergyConsumption;
		break;
	case EMoveSpeed::VE_Jog:
		m_props.EnergyConsumption += m_movementProps.JogEnergyConsumption;
		break;
	case EMoveSpeed::VE_Run:
		m_props.EnergyConsumption += m_movementProps.RunEnergyConsumption;
		break;
	case EMoveSpeed::VE_Sprint:
		m_props.EnergyConsumption += m_movementProps.SprintEnergyConsumption;
		break;
	}
}

void UCharStats::IncreaseMoveSpeed()
{
	switch (m_movementProps.MovementMode)
	{
	case EMoveSpeed::VE_Immobile:
	{
		switch (m_currentMoveSpeed)
		{
		case EMoveSpeed::VE_Walk:
			m_currentMoveSpeed = EMoveSpeed::VE_Jog;
			break;
		case EMoveSpeed::VE_Jog:
			m_currentMoveSpeed = EMoveSpeed::VE_Run;
			break;
		case EMoveSpeed::VE_Run:
			m_currentMoveSpeed = EMoveSpeed::VE_Sprint;
			break;
		}
		break;
	}
	case EMoveSpeed::VE_Walk:
	{
		UpdateMoveSpeedConsumption(m_movementProps.MovementMode, EMoveSpeed::VE_Jog);
		m_movementProps.MovementMode = EMoveSpeed::VE_Jog;
		break;
	}
	case EMoveSpeed::VE_Jog:
	{
		UpdateMoveSpeedConsumption(m_movementProps.MovementMode, EMoveSpeed::VE_Run);
		m_movementProps.MovementMode = EMoveSpeed::VE_Run;
		break;
	}
	case EMoveSpeed::VE_Run:
	{
		UpdateMoveSpeedConsumption(m_movementProps.MovementMode, EMoveSpeed::VE_Sprint);
		m_movementProps.MovementMode = EMoveSpeed::VE_Sprint;
		break;
	}

	}
}

void UCharStats::DecreaseMoveSpeed()
{
	switch (m_movementProps.MovementMode)
	{
	case EMoveSpeed::VE_Immobile:
		switch (m_currentMoveSpeed)
		{
		case EMoveSpeed::VE_Jog:
			m_currentMoveSpeed = EMoveSpeed::VE_Walk;
			break;
		case EMoveSpeed::VE_Run:
			m_currentMoveSpeed = EMoveSpeed::VE_Jog;
			break;
		case EMoveSpeed::VE_Sprint:
			m_currentMoveSpeed = EMoveSpeed::VE_Run;
			break;
		}
		break;
	case EMoveSpeed::VE_Jog:
	{
		UpdateMoveSpeedConsumption(m_movementProps.MovementMode, EMoveSpeed::VE_Walk);
		m_movementProps.MovementMode = EMoveSpeed::VE_Walk;
		break;
	}
	case EMoveSpeed::VE_Run:
	{
		UpdateMoveSpeedConsumption(m_movementProps.MovementMode, EMoveSpeed::VE_Jog);
		m_movementProps.MovementMode = EMoveSpeed::VE_Jog;
		break;
	}
	case EMoveSpeed::VE_Sprint:
	{
		UpdateMoveSpeedConsumption(m_movementProps.MovementMode, EMoveSpeed::VE_Run);
		m_movementProps.MovementMode = EMoveSpeed::VE_Run;
		break;
	}
	}
}

void UCharStats::SetMovementConsumptionToZero()
{
	UpdateMoveSpeedConsumption(m_movementProps.MovementMode, EMoveSpeed::VE_Immobile);
}

void UCharStats::SetCurrentMovementConsumption()
{
	if (m_movementProps.MovementMode == EMoveSpeed::VE_Immobile)
	{
		UpdateMoveSpeedConsumption(m_movementProps.MovementMode, m_currentMoveSpeed);
	}
}

float UCharStats::GetCurrentEnergyAsPercent()
{
	return 1/(m_props.MaxEnergyStorage/m_props.CurrentEnergyStorage);
}

void UCharStats::UpdateEnergy(float DeltaTime)
{
	float x = (m_props.EnergyGain - m_props.EnergyConsumption) / (1 / DeltaTime);
	if ((m_props.CurrentEnergyStorage - x) < 0)
	{
		DecreaseMoveSpeed();
		m_props.CurrentEnergyStorage = 0;
	}
	if (m_props.CurrentEnergyStorage < m_props.MaxEnergyStorage)
	{
		m_props.CurrentEnergyStorage += x;
	}
	if (m_props.CurrentEnergyStorage > m_props.MaxEnergyStorage)
	{
		m_props.CurrentEnergyStorage = m_props.MaxEnergyStorage;
		return;
	}
	if (FMath::IsNearlyEqual(m_props.CurrentEnergyStorage, m_props.MaxEnergyStorage) && x<0)
	{
		m_props.CurrentEnergyStorage += x;
	}
}
