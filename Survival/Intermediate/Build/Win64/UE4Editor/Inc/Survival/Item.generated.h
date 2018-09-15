// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVAL_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define SURVIVAL_Item_generated_h

#define Survival_Source_Survival_Items_Interfaces_Item_h_19_RPC_WRAPPERS
#define Survival_Source_Survival_Items_Interfaces_Item_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Survival_Source_Survival_Items_Interfaces_Item_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Survival_Source_Survival_Items_Interfaces_Item_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Survival_Source_Survival_Items_Interfaces_Item_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define Survival_Source_Survival_Items_Interfaces_Item_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Survival_Source_Survival_Items_Interfaces_Item_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_image() { return STRUCT_OFFSET(AItem, m_image); } \
	FORCEINLINE static uint32 __PPO__m_mesh() { return STRUCT_OFFSET(AItem, m_mesh); } \
	FORCEINLINE static uint32 __PPO__m_trigger() { return STRUCT_OFFSET(AItem, m_trigger); } \
	FORCEINLINE static uint32 __PPO__m_itemProps() { return STRUCT_OFFSET(AItem, m_itemProps); }


#define Survival_Source_Survival_Items_Interfaces_Item_h_16_PROLOG
#define Survival_Source_Survival_Items_Interfaces_Item_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_RPC_WRAPPERS \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_INCLASS \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Source_Survival_Items_Interfaces_Item_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_INCLASS_NO_PURE_DECLS \
	Survival_Source_Survival_Items_Interfaces_Item_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Source_Survival_Items_Interfaces_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
