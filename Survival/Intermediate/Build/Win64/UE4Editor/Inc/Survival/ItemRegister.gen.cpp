// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Items/Globals/ItemRegister.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemRegister() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_UItemRegister_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UItemRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void UItemRegister::StaticRegisterNativesUItemRegister()
	{
	}
	UClass* Z_Construct_UClass_UItemRegister_NoRegister()
	{
		return UItemRegister::StaticClass();
	}
	struct Z_Construct_UClass_UItemRegister_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemRegister_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemRegister_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Globals/ItemRegister.h" },
		{ "ModuleRelativePath", "Items/Globals/ItemRegister.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemRegister_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemRegister>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemRegister_Statics::ClassParams = {
		&UItemRegister::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UItemRegister_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UItemRegister_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemRegister()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemRegister_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemRegister, 4175804261);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemRegister(Z_Construct_UClass_UItemRegister, &UItemRegister::StaticClass, TEXT("/Script/Survival"), TEXT("UItemRegister"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemRegister);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
