// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Character/Abilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilities() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_UAbilities_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UAbilities();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void UAbilities::StaticRegisterNativesUAbilities()
	{
	}
	UClass* Z_Construct_UClass_UAbilities_NoRegister()
	{
		return UAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_tiredness_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_tiredness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_stresslevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_stresslevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_exhaustion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_exhaustion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_adrenaline_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_adrenaline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_mood;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/Abilities.h" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::NewProp_m_tiredness_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAbilities_Statics::NewProp_m_tiredness = { UE4CodeGen_Private::EPropertyClass::Int, "m_tiredness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAbilities, m_tiredness), METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::NewProp_m_tiredness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::NewProp_m_tiredness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::NewProp_m_stresslevel_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAbilities_Statics::NewProp_m_stresslevel = { UE4CodeGen_Private::EPropertyClass::Int, "m_stresslevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAbilities, m_stresslevel), METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::NewProp_m_stresslevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::NewProp_m_stresslevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::NewProp_m_exhaustion_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAbilities_Statics::NewProp_m_exhaustion = { UE4CodeGen_Private::EPropertyClass::Int, "m_exhaustion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAbilities, m_exhaustion), METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::NewProp_m_exhaustion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::NewProp_m_exhaustion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::NewProp_m_adrenaline_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAbilities_Statics::NewProp_m_adrenaline = { UE4CodeGen_Private::EPropertyClass::Int, "m_adrenaline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAbilities, m_adrenaline), METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::NewProp_m_adrenaline_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::NewProp_m_adrenaline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::NewProp_m_stamina_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAbilities_Statics::NewProp_m_stamina = { UE4CodeGen_Private::EPropertyClass::Int, "m_stamina", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAbilities, m_stamina), METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::NewProp_m_stamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::NewProp_m_stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::NewProp_m_health_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAbilities_Statics::NewProp_m_health = { UE4CodeGen_Private::EPropertyClass::Int, "m_health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAbilities, m_health), METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::NewProp_m_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::NewProp_m_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::NewProp_m_mood_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAbilities_Statics::NewProp_m_mood = { UE4CodeGen_Private::EPropertyClass::Int, "m_mood", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAbilities, m_mood), METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::NewProp_m_mood_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::NewProp_m_mood_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilities_Statics::NewProp_m_tiredness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilities_Statics::NewProp_m_stresslevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilities_Statics::NewProp_m_exhaustion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilities_Statics::NewProp_m_adrenaline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilities_Statics::NewProp_m_stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilities_Statics::NewProp_m_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilities_Statics::NewProp_m_mood,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilities_Statics::ClassParams = {
		&UAbilities::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAbilities_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilities, 2169716657);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilities(Z_Construct_UClass_UAbilities, &UAbilities::StaticClass, TEXT("/Script/Survival"), TEXT("UAbilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
