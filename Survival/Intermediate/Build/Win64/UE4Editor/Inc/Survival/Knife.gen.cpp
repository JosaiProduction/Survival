// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Items/Weapons/Knife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnife() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_AKnife_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_AKnife();
	SURVIVAL_API UClass* Z_Construct_UClass_AMeleeWeapon();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void AKnife::StaticRegisterNativesAKnife()
	{
	}
	UClass* Z_Construct_UClass_AKnife_NoRegister()
	{
		return AKnife::StaticClass();
	}
	struct Z_Construct_UClass_AKnife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKnife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMeleeWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Weapons/Knife.h" },
		{ "ModuleRelativePath", "Items/Weapons/Knife.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKnife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKnife_Statics::ClassParams = {
		&AKnife::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKnife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKnife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKnife, 2743528907);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKnife(Z_Construct_UClass_AKnife, &AKnife::StaticClass, TEXT("/Script/Survival"), TEXT("AKnife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKnife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
