// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Items/Interfaces/RangeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeWeapon() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_ARangeWeapon_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_ARangeWeapon();
	SURVIVAL_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_Survival();
	SURVIVAL_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void ARangeWeapon::StaticRegisterNativesARangeWeapon()
	{
	}
	UClass* Z_Construct_UClass_ARangeWeapon_NoRegister()
	{
		return ARangeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARangeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bulletSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_bulletSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_maxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedUIntPropertyParams NewProp_m_maxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Interfaces/RangeWeapon.h" },
		{ "ModuleRelativePath", "Items/Interfaces/RangeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_projectile_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Interfaces/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_projectile = { UE4CodeGen_Private::EPropertyClass::Object, "m_projectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARangeWeapon, m_projectile), Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_projectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_bulletSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Items/Interfaces/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_bulletSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "m_bulletSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARangeWeapon, m_bulletSpeed), METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_bulletSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_bulletSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_maxAmmo_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Items/Interfaces/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedUIntPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_maxAmmo = { UE4CodeGen_Private::EPropertyClass::UInt32, "m_maxAmmo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARangeWeapon, m_maxAmmo), METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_maxAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_maxAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_bulletSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_m_maxAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangeWeapon_Statics::ClassParams = {
		&ARangeWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		nullptr, 0,
		Z_Construct_UClass_ARangeWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARangeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARangeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARangeWeapon, 1026524739);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARangeWeapon(Z_Construct_UClass_ARangeWeapon, &ARangeWeapon::StaticClass, TEXT("/Script/Survival"), TEXT("ARangeWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
