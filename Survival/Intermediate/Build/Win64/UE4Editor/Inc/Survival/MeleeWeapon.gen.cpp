// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Items/Interfaces/MeleeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeWeapon() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_AMeleeWeapon();
	SURVIVAL_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void AMeleeWeapon::StaticRegisterNativesAMeleeWeapon()
	{
	}
	UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister()
	{
		return AMeleeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Interfaces/MeleeWeapon.h" },
		{ "ModuleRelativePath", "Items/Interfaces/MeleeWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams = {
		&AMeleeWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeleeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeleeWeapon, 1339875962);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeleeWeapon(Z_Construct_UClass_AMeleeWeapon, &AMeleeWeapon::StaticClass, TEXT("/Script/Survival"), TEXT("AMeleeWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
