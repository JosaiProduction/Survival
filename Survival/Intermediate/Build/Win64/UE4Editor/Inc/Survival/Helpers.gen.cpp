// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Items/Globals/Helpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelpers() {}
// Cross Module References
	SURVIVAL_API UEnum* Z_Construct_UEnum_Survival_EItemType();
	UPackage* Z_Construct_UPackage__Script_Survival();
	SURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FItemProperties();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UHelpers_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Survival_EItemType, Z_Construct_UPackage__Script_Survival(), TEXT("EItemType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/Survival"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Survival_EItemType_CRC() { return 821886784U; }
	UEnum* Z_Construct_UEnum_Survival_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Survival();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_Survival_EItemType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemType::VE_Consumable", (int64)EItemType::VE_Consumable },
				{ "EItemType::VE_RangeWeapon", (int64)EItemType::VE_RangeWeapon },
				{ "EItemType::VE_MeleeWeapon", (int64)EItemType::VE_MeleeWeapon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
				{ "VE_Consumable.DisplayName", "Consumable" },
				{ "VE_MeleeWeapon.DisplayName", "MeleeWeapon" },
				{ "VE_RangeWeapon.DisplayName", "RangeWeapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Survival,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EItemType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EItemType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FItemProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_API uint32 Get_Z_Construct_UScriptStruct_FItemProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemProperties, Z_Construct_UPackage__Script_Survival(), TEXT("ItemProperties"), sizeof(FItemProperties), Get_Z_Construct_UScriptStruct_FItemProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemProperties(FItemProperties::StaticStruct, TEXT("/Script/Survival"), TEXT("ItemProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_StaticRegisterNativesFItemProperties
{
	FScriptStruct_Survival_StaticRegisterNativesFItemProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemProperties")),new UScriptStruct::TCppStructOps<FItemProperties>);
	}
} ScriptStruct_Survival_StaticRegisterNativesFItemProperties;
	struct Z_Construct_UScriptStruct_FItemProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedUIntPropertyParams NewProp_RegisteredID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedUIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_RegisteredID_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedUIntPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_RegisteredID = { UE4CodeGen_Private::EPropertyClass::UInt32, "RegisteredID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FItemProperties, RegisteredID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_RegisteredID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_RegisteredID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Image = { UE4CodeGen_Private::EPropertyClass::Object, "Image", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FItemProperties, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Image_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedUIntPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::UInt32, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FItemProperties, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FItemProperties, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FItemProperties, Type), Z_Construct_UEnum_Survival_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_RegisteredID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
		nullptr,
		&NewStructOps,
		"ItemProperties",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FItemProperties),
		alignof(FItemProperties),
		Z_Construct_UScriptStruct_FItemProperties_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemProperties_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemProperties"), sizeof(FItemProperties), Get_Z_Construct_UScriptStruct_FItemProperties_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemProperties_CRC() { return 1956925631U; }
	void UHelpers::StaticRegisterNativesUHelpers()
	{
	}
	UClass* Z_Construct_UClass_UHelpers_NoRegister()
	{
		return UHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Globals/Helpers.h" },
		{ "ModuleRelativePath", "Items/Globals/Helpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHelpers_Statics::ClassParams = {
		&UHelpers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHelpers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHelpers, 2460998642);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHelpers(Z_Construct_UClass_UHelpers, &UHelpers::StaticClass, TEXT("/Script/Survival"), TEXT("UHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
