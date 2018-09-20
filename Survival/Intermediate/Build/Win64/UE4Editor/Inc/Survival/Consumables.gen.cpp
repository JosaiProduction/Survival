// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Items/Interfaces/Consumables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsumables() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_AConsumables_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_AConsumables();
	SURVIVAL_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void AConsumables::StaticRegisterNativesAConsumables()
	{
	}
	UClass* Z_Construct_UClass_AConsumables_NoRegister()
	{
		return AConsumables::StaticClass();
	}
	struct Z_Construct_UClass_AConsumables_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConsumables_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsumables_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Interfaces/Consumables.h" },
		{ "ModuleRelativePath", "Items/Interfaces/Consumables.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConsumables_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConsumables>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConsumables_Statics::ClassParams = {
		&AConsumables::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AConsumables_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AConsumables_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConsumables()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConsumables_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConsumables, 3544785359);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConsumables(Z_Construct_UClass_AConsumables, &AConsumables::StaticClass, TEXT("/Script/Survival"), TEXT("AConsumables"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConsumables);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
