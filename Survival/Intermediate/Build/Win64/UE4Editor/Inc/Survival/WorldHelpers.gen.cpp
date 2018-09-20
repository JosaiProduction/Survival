// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/World/Globals/WorldHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldHelpers() {}
// Cross Module References
	SURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FTime();
	UPackage* Z_Construct_UPackage__Script_Survival();
	SURVIVAL_API UClass* Z_Construct_UClass_UWorldHelpers_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UWorldHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_API uint32 Get_Z_Construct_UScriptStruct_FTime_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTime, Z_Construct_UPackage__Script_Survival(), TEXT("Time"), sizeof(FTime), Get_Z_Construct_UScriptStruct_FTime_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTime(FTime::StaticStruct, TEXT("/Script/Survival"), TEXT("Time"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_StaticRegisterNativesFTime
{
	FScriptStruct_Survival_StaticRegisterNativesFTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Time")),new UScriptStruct::TCppStructOps<FTime>);
	}
} ScriptStruct_Survival_StaticRegisterNativesFTime;
	struct Z_Construct_UScriptStruct_FTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hours;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "World/Globals/WorldHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTime_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "World/Globals/WorldHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTime_Statics::NewProp_Seconds = { UE4CodeGen_Private::EPropertyClass::Byte, "Seconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTime, Seconds), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTime_Statics::NewProp_Seconds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTime_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTime_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "World/Globals/WorldHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTime_Statics::NewProp_Minutes = { UE4CodeGen_Private::EPropertyClass::Byte, "Minutes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTime, Minutes), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTime_Statics::NewProp_Minutes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTime_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTime_Statics::NewProp_Hours_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "World/Globals/WorldHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTime_Statics::NewProp_Hours = { UE4CodeGen_Private::EPropertyClass::Byte, "Hours", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTime, Hours), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTime_Statics::NewProp_Hours_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTime_Statics::NewProp_Hours_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTime_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTime_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTime_Statics::NewProp_Hours,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
		nullptr,
		&NewStructOps,
		"Time",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTime),
		alignof(FTime),
		Z_Construct_UScriptStruct_FTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTime_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTime_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTime_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Time"), sizeof(FTime), Get_Z_Construct_UScriptStruct_FTime_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTime_CRC() { return 2430516200U; }
	void UWorldHelpers::StaticRegisterNativesUWorldHelpers()
	{
	}
	UClass* Z_Construct_UClass_UWorldHelpers_NoRegister()
	{
		return UWorldHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UWorldHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/Globals/WorldHelpers.h" },
		{ "ModuleRelativePath", "World/Globals/WorldHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldHelpers_Statics::ClassParams = {
		&UWorldHelpers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWorldHelpers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWorldHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldHelpers, 2934688527);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldHelpers(Z_Construct_UClass_UWorldHelpers, &UWorldHelpers::StaticClass, TEXT("/Script/Survival"), TEXT("UWorldHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
