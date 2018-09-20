// Fill out your copyright notice in the Description page of Project Settings.

#include "ClimbPhysMat.h"

UClimbPhysMat::UClimbPhysMat()
	:m_neededClimbLevel(0)
{
}

int UClimbPhysMat::GetReqClimbLvl() const
{
	return m_neededClimbLevel;
}
