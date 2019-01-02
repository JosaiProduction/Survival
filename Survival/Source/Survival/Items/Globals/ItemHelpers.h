// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "ItemHelpers.generated.h"


UENUM(BlueprintType)
enum class EItemType :uint8 {
	VE_Consumable UMETA(DisplayName ="Consumable"),
	VE_RangeWeapon UMETA(DisplayName = "RangeWeapon"), 
	VE_MeleeWeapon UMETA(DisplayName = "MeleeWeapon"),
	VE_EnergyRelated UMETA(DisplayName = "EnergyRelated"),
	VE_Module UMETA(DisplayName = "Module")
};
UENUM(BlueprintType)
enum class EEnergyItemType : uint8 {
	VE_Gain = 1<<0 UMETA(DisplayName = "Gain"),
	VE_Consumption = 1<<1 UMETA(DisplayName = "Consumption"),
	VE_Storage = 1<<2 UMETA(DisplayName = "Storage")
};
UENUM(BlueprintType)
enum class ECharModuleType : uint8 {
	VE_FootModule UMETA(DisplayName = "FootModule"), 
	VE_LegModule UMETA(DisplayName = "LegModule"), 
	VE_TorsoModule UMETA(DisplayName = "TorsoModule"), 
	VE_HandModule UMETA(DisplayName = "HandModule"), 
	VE_ArmModule UMETA(DisplayName = "ArmModule"), 
	VE_HeadModule UMETA(DisplayName = "HeadModule")
};


USTRUCT(BlueprintType) 
struct FItemProperties
{
	GENERATED_BODY()
public: 
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		EItemType Type;
	UPROPERTY(EditAnywhere, Category = "Properties")
		FString Name;
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		unsigned int ID;
	UPROPERTY(EditAnywhere, Category = "Properties")
		UTexture2D* Image;
	UPROPERTY(VisibleAnywhere, Category = "Properties")
		unsigned int RegisteredID;
	UPROPERTY(EditAnywhere, Category = "Properties")
		unsigned int RequiredSlots;
};
USTRUCT(BlueprintType)
struct FEnergyItemProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
	EEnergyItemType EnergyRelation;
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
		float Efficiency = 100;
	UPROPERTY(EditAnywhere, Category = "Properties| Energy")
		float Value = Value *Efficiency/100; 
};

USTRUCT(BlueprintType)
struct FFootModuleProperties
{
	GENERATED_BODY()
public: 
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module| Foot")
		ECharModuleType ModuleType = ECharModuleType::VE_FootModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Foot")
		float Grip;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Foot")
		float UpwardForce;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Foot")
		float ForwardForce;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Foot")
		float Damping;
};

USTRUCT(BlueprintType)
struct FLegModuleProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module| Leg")
		ECharModuleType ModuleType = ECharModuleType::VE_LegModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Leg")
		float Acceleration;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Leg")
		float Decceleration;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Leg")
		float Consumption;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Leg")
		float UpwardForce;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Leg")
		float ForwardForce;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Leg")
		float Damping;
};
USTRUCT(BlueprintType)
struct FTorsoModuleProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module| Torso")
		ECharModuleType ModuleType = ECharModuleType::VE_TorsoModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Torso")
		unsigned int TorsoModuleSlots;
};
USTRUCT(BlueprintType)
struct FArmModuleProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module| Arm")
		ECharModuleType ModuleType = ECharModuleType::VE_ArmModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Arm")
		float LiftingForce;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Arm")
		float Consumption;
};
USTRUCT(BlueprintType)
struct FHandModuleProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module| Hand")
		ECharModuleType ModuleType = ECharModuleType::VE_HandModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Hand")
		float Grip;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Hand")
		float Consumption;
};
USTRUCT(BlueprintType)
struct FHeadModuleProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "Properties| Module| Head")
		ECharModuleType ModuleType = ECharModuleType::VE_HeadModule;
	UPROPERTY(EditAnywhere, Category = "Properties| Module| Head")
		unsigned int HeadModuleSlots;
};
/**
 * 
 */
UCLASS()
class SURVIVAL_API UItemHelpers : public UObject
{
	GENERATED_BODY()
public:
	UItemHelpers();
	~UItemHelpers();
};
