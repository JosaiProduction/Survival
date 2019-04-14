// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/ClimbPhysMat.h"

UClimbPhysMat::UClimbPhysMat()
	:m_neededClimbLevel(0)
{
}

int UClimbPhysMat::GetReqClimbLvl() const
{
	return m_neededClimbLevel;
}
