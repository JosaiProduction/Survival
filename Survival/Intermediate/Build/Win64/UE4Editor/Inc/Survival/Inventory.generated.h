// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemProperties;
#ifdef SURVIVAL_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define SURVIVAL_Inventory_generated_h

#define Survival_Source_Survival_Character_Inventory_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemProps) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemProperties>*)Z_Param__Result=P_THIS->GetItemProps(); \
		P_NATIVE_END; \
	}


#define Survival_Source_Survival_Character_Inventory_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemProps) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemProperties>*)Z_Param__Result=P_THIS->GetItemProps(); \
		P_NATIVE_END; \
	}


#define Survival_Source_Survival_Character_Inventory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define Survival_Source_Survival_Character_Inventory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define Survival_Source_Survival_Character_Inventory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define Survival_Source_Survival_Character_Inventory_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory)


#define Survival_Source_Survival_Character_Inventory_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_itemProps() { return STRUCT_OFFSET(UInventory, m_itemProps); } \
	FORCEINLINE static uint32 __PPO__m_isActive() { return STRUCT_OFFSET(UInventory, m_isActive); }


#define Survival_Source_Survival_Character_Inventory_h_15_PROLOG
#define Survival_Source_Survival_Character_Inventory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Character_Inventory_h_18_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Character_Inventory_h_18_RPC_WRAPPERS \
	Survival_Source_Survival_Character_Inventory_h_18_INCLASS \
	Survival_Source_Survival_Character_Inventory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Source_Survival_Character_Inventory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Character_Inventory_h_18_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Character_Inventory_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Source_Survival_Character_Inventory_h_18_INCLASS_NO_PURE_DECLS \
	Survival_Source_Survival_Character_Inventory_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Source_Survival_Character_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
