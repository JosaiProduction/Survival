// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Character/Globals/CharHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharHelpers() {}
// Cross Module References
	SURVIVAL_API UEnum* Z_Construct_UEnum_Survival_EInteractionType();
	UPackage* Z_Construct_UPackage__Script_Survival();
	SURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharAbilities();
	SURVIVAL_API UClass* Z_Construct_UClass_UCharHelpers_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UCharHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EInteractionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Survival_EInteractionType, Z_Construct_UPackage__Script_Survival(), TEXT("EInteractionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionType(EInteractionType_StaticEnum, TEXT("/Script/Survival"), TEXT("EInteractionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Survival_EInteractionType_CRC() { return 3194538471U; }
	UEnum* Z_Construct_UEnum_Survival_EInteractionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Survival();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionType"), 0, Get_Z_Construct_UEnum_Survival_EInteractionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionType::VE_Climbing", (int64)EInteractionType::VE_Climbing },
				{ "EInteractionType::VE_Pick_up", (int64)EInteractionType::VE_Pick_up },
				{ "EInteractionType::VE_Use", (int64)EInteractionType::VE_Use },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
				{ "VE_Climbing.DisplayName", "Climb" },
				{ "VE_Pick_up.DisplayName", "PickUp" },
				{ "VE_Use.DisplayName", "Use" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Survival,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInteractionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EInteractionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCharAbilities::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_API uint32 Get_Z_Construct_UScriptStruct_FCharAbilities_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharAbilities, Z_Construct_UPackage__Script_Survival(), TEXT("CharAbilities"), sizeof(FCharAbilities), Get_Z_Construct_UScriptStruct_FCharAbilities_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharAbilities(FCharAbilities::StaticStruct, TEXT("/Script/Survival"), TEXT("CharAbilities"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_StaticRegisterNativesFCharAbilities
{
	FScriptStruct_Survival_StaticRegisterNativesFCharAbilities()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharAbilities")),new UScriptStruct::TCppStructOps<FCharAbilities>);
	}
} ScriptStruct_Survival_StaticRegisterNativesFCharAbilities;
	struct Z_Construct_UScriptStruct_FCharAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbLvl_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ClimbLvl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiredness_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Tiredness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StressLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_StressLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exhaustion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Exhaustion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Adrenaline_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Adrenaline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Mood;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharAbilities_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharAbilities>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_ClimbLvl_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_ClimbLvl = { UE4CodeGen_Private::EPropertyClass::Int, "ClimbLvl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, ClimbLvl), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_ClimbLvl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_ClimbLvl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Tiredness_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Tiredness = { UE4CodeGen_Private::EPropertyClass::Int, "Tiredness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, Tiredness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Tiredness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Tiredness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_StressLevel_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_StressLevel = { UE4CodeGen_Private::EPropertyClass::Int, "StressLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, StressLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_StressLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_StressLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Exhaustion_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Exhaustion = { UE4CodeGen_Private::EPropertyClass::Int, "Exhaustion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, Exhaustion), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Exhaustion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Exhaustion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Adrenaline_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Adrenaline = { UE4CodeGen_Private::EPropertyClass::Int, "Adrenaline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, Adrenaline), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Adrenaline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Adrenaline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Stamina = { UE4CodeGen_Private::EPropertyClass::Int, "Stamina", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, Stamina), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Stamina_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Int, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Mood_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Mood = { UE4CodeGen_Private::EPropertyClass::Int, "Mood", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCharAbilities, Mood), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Mood_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Mood_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_ClimbLvl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Tiredness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_StressLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Exhaustion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Adrenaline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAbilities_Statics::NewProp_Mood,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharAbilities_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
		nullptr,
		&NewStructOps,
		"CharAbilities",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCharAbilities),
		alignof(FCharAbilities),
		Z_Construct_UScriptStruct_FCharAbilities_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharAbilities_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAbilities_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharAbilities()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharAbilities_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharAbilities"), sizeof(FCharAbilities), Get_Z_Construct_UScriptStruct_FCharAbilities_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharAbilities_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharAbilities_CRC() { return 1935517562U; }
	void UCharHelpers::StaticRegisterNativesUCharHelpers()
	{
	}
	UClass* Z_Construct_UClass_UCharHelpers_NoRegister()
	{
		return UCharHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UCharHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/Globals/CharHelpers.h" },
		{ "ModuleRelativePath", "Character/Globals/CharHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharHelpers_Statics::ClassParams = {
		&UCharHelpers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCharHelpers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharHelpers, 3458245525);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharHelpers(Z_Construct_UClass_UCharHelpers, &UCharHelpers::StaticClass, TEXT("/Script/Survival"), TEXT("UCharHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
