// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/World/PhysicalMaterials/ClimbPhysMat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbPhysMat() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_UClimbPhysMat_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UClimbPhysMat();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void UClimbPhysMat::StaticRegisterNativesUClimbPhysMat()
	{
	}
	UClass* Z_Construct_UClass_UClimbPhysMat_NoRegister()
	{
		return UClimbPhysMat::StaticClass();
	}
	struct Z_Construct_UClass_UClimbPhysMat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClimbPhysMat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbPhysMat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "World/PhysicalMaterials/ClimbPhysMat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "World/PhysicalMaterials/ClimbPhysMat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimbPhysMat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbPhysMat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClimbPhysMat_Statics::ClassParams = {
		&UClimbPhysMat::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001020A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UClimbPhysMat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClimbPhysMat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClimbPhysMat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClimbPhysMat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClimbPhysMat, 1152032010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClimbPhysMat(Z_Construct_UClass_UClimbPhysMat, &UClimbPhysMat::StaticClass, TEXT("/Script/Survival"), TEXT("UClimbPhysMat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbPhysMat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
