// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/World/DayCycle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDayCycle() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_ADayCycle_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_ADayCycle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Survival();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	SURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FTime();
// End Cross Module References
	void ADayCycle::StaticRegisterNativesADayCycle()
	{
	}
	UClass* Z_Construct_UClass_ADayCycle_NoRegister()
	{
		return ADayCycle::StaticClass();
	}
	struct Z_Construct_UClass_ADayCycle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_sun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_nightDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_nightDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dayDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_dayDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_currTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_currTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_initTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_initTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsSummer_MetaData[];
#endif
		static void NewProp_m_bIsSummer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsSummer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADayCycle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/DayCycle.h" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::NewProp_m_root_MetaData[] = {
		{ "Category", "Sun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADayCycle_Statics::NewProp_m_root = { UE4CodeGen_Private::EPropertyClass::Object, "m_root", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ADayCycle, m_root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::NewProp_m_sun_MetaData[] = {
		{ "Category", "Sun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADayCycle_Statics::NewProp_m_sun = { UE4CodeGen_Private::EPropertyClass::Object, "m_sun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ADayCycle, m_sun), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_sun_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_sun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::NewProp_m_nightDuration_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADayCycle_Statics::NewProp_m_nightDuration = { UE4CodeGen_Private::EPropertyClass::Int, "m_nightDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADayCycle, m_nightDuration), METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_nightDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_nightDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::NewProp_m_dayDuration_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADayCycle_Statics::NewProp_m_dayDuration = { UE4CodeGen_Private::EPropertyClass::Int, "m_dayDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADayCycle, m_dayDuration), METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_dayDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_dayDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::NewProp_m_currTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADayCycle_Statics::NewProp_m_currTime = { UE4CodeGen_Private::EPropertyClass::Struct, "m_currTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADayCycle, m_currTime), Z_Construct_UScriptStruct_FTime, METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_currTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_currTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::NewProp_m_initTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADayCycle_Statics::NewProp_m_initTime = { UE4CodeGen_Private::EPropertyClass::Struct, "m_initTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADayCycle, m_initTime), Z_Construct_UScriptStruct_FTime, METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_initTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_initTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayCycle_Statics::NewProp_m_bIsSummer_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "World/DayCycle.h" },
	};
#endif
	void Z_Construct_UClass_ADayCycle_Statics::NewProp_m_bIsSummer_SetBit(void* Obj)
	{
		((ADayCycle*)Obj)->m_bIsSummer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADayCycle_Statics::NewProp_m_bIsSummer = { UE4CodeGen_Private::EPropertyClass::Bool, "m_bIsSummer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADayCycle), &Z_Construct_UClass_ADayCycle_Statics::NewProp_m_bIsSummer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_bIsSummer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::NewProp_m_bIsSummer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADayCycle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayCycle_Statics::NewProp_m_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayCycle_Statics::NewProp_m_sun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayCycle_Statics::NewProp_m_nightDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayCycle_Statics::NewProp_m_dayDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayCycle_Statics::NewProp_m_currTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayCycle_Statics::NewProp_m_initTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayCycle_Statics::NewProp_m_bIsSummer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADayCycle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADayCycle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADayCycle_Statics::ClassParams = {
		&ADayCycle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ADayCycle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADayCycle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADayCycle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADayCycle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADayCycle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADayCycle, 2397875835);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADayCycle(Z_Construct_UClass_ADayCycle, &ADayCycle::StaticClass, TEXT("/Script/Survival"), TEXT("ADayCycle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADayCycle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
