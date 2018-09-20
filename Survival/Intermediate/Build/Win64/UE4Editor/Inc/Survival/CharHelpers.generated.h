// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVAL_CharHelpers_generated_h
#error "CharHelpers.generated.h already included, missing '#pragma once' in CharHelpers.h"
#endif
#define SURVIVAL_CharHelpers_generated_h

#define Survival_Source_Survival_Character_Globals_CharHelpers_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharAbilities_Statics; \
	SURVIVAL_API static class UScriptStruct* StaticStruct();


#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_RPC_WRAPPERS
#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharHelpers(); \
	friend struct Z_Construct_UClass_UCharHelpers_Statics; \
public: \
	DECLARE_CLASS(UCharHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(UCharHelpers)


#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUCharHelpers(); \
	friend struct Z_Construct_UClass_UCharHelpers_Statics; \
public: \
	DECLARE_CLASS(UCharHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(UCharHelpers)


#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharHelpers(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharHelpers(UCharHelpers&&); \
	NO_API UCharHelpers(const UCharHelpers&); \
public:


#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharHelpers(UCharHelpers&&); \
	NO_API UCharHelpers(const UCharHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharHelpers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharHelpers)


#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_PRIVATE_PROPERTY_OFFSET
#define Survival_Source_Survival_Character_Globals_CharHelpers_h_45_PROLOG
#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_RPC_WRAPPERS \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_INCLASS \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Source_Survival_Character_Globals_CharHelpers_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_INCLASS_NO_PURE_DECLS \
	Survival_Source_Survival_Character_Globals_CharHelpers_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Source_Survival_Character_Globals_CharHelpers_h


#define FOREACH_ENUM_EINTERACTIONTYPE(op) \
	op(EInteractionType::VE_Climbing) \
	op(EInteractionType::VE_Pick_up) \
	op(EInteractionType::VE_Use) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
