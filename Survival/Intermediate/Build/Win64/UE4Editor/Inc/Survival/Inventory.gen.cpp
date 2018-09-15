// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/Character/Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Survival();
	SURVIVAL_API UFunction* Z_Construct_UFunction_UInventory_GetItemProps();
	SURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FItemProperties();
	SURVIVAL_API UFunction* Z_Construct_UFunction_UInventory_IsEnabled();
// End Cross Module References
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemProps", &UInventory::execGetItemProps },
			{ "IsEnabled", &UInventory::execIsEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_GetItemProps_Statics
	{
		struct Inventory_eventGetItemProps_Parms
		{
			TArray<FItemProperties> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemProps_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Inventory_eventGetItemProps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemProps_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemProps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemProps_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemProps_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemProps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, "GetItemProps", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Inventory_eventGetItemProps_Parms), Z_Construct_UFunction_UInventory_GetItemProps_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemProps_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemProps_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemProps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemProps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemProps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_IsEnabled_Statics
	{
		struct Inventory_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_IsEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Inventory_eventIsEnabled_Parms), &Z_Construct_UFunction_UInventory_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Inventory_eventIsEnabled_Parms), Z_Construct_UFunction_UInventory_IsEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_IsEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_IsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_isActive_MetaData[];
#endif
		static void NewProp_m_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_isActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_itemProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_itemProps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_itemProps_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_GetItemProps, "GetItemProps" }, // 1580949638
		{ &Z_Construct_UFunction_UInventory_IsEnabled, "IsEnabled" }, // 3002540920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/Inventory.h" },
		{ "ModuleRelativePath", "Character/Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_m_isActive_MetaData[] = {
		{ "ModuleRelativePath", "Character/Inventory.h" },
	};
#endif
	void Z_Construct_UClass_UInventory_Statics::NewProp_m_isActive_SetBit(void* Obj)
	{
		((UInventory*)Obj)->m_isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_m_isActive = { UE4CodeGen_Private::EPropertyClass::Bool, "m_isActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInventory), &Z_Construct_UClass_UInventory_Statics::NewProp_m_isActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_m_isActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_m_isActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_m_itemProps_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Character/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_m_itemProps = { UE4CodeGen_Private::EPropertyClass::Array, "m_itemProps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000030001, 1, nullptr, STRUCT_OFFSET(UInventory, m_itemProps), METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_m_itemProps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_m_itemProps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_m_itemProps_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "m_itemProps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_m_isActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_m_itemProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_m_itemProps_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 2985316268);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/Survival"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
