// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVAL_ItemHelpers_generated_h
#error "ItemHelpers.generated.h already included, missing '#pragma once' in ItemHelpers.h"
#endif
#define SURVIVAL_ItemHelpers_generated_h

#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemProperties_Statics; \
	SURVIVAL_API static class UScriptStruct* StaticStruct();


#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_RPC_WRAPPERS
#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemHelpers(); \
	friend struct Z_Construct_UClass_UItemHelpers_Statics; \
public: \
	DECLARE_CLASS(UItemHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(UItemHelpers)


#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUItemHelpers(); \
	friend struct Z_Construct_UClass_UItemHelpers_Statics; \
public: \
	DECLARE_CLASS(UItemHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(UItemHelpers)


#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemHelpers(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemHelpers(UItemHelpers&&); \
	NO_API UItemHelpers(const UItemHelpers&); \
public:


#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemHelpers(UItemHelpers&&); \
	NO_API UItemHelpers(const UItemHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemHelpers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemHelpers)


#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_PRIVATE_PROPERTY_OFFSET
#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_41_PROLOG
#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_RPC_WRAPPERS \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_INCLASS \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_INCLASS_NO_PURE_DECLS \
	Survival_Source_Survival_Items_Globals_ItemHelpers_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Source_Survival_Items_Globals_ItemHelpers_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::VE_Consumable) \
	op(EItemType::VE_RangeWeapon) \
	op(EItemType::VE_MeleeWeapon) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
