// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
#ifdef SURVIVAL_SurvivalCharacter_generated_h
#error "SurvivalCharacter.generated.h already included, missing '#pragma once' in SurvivalCharacter.h"
#endif
#define SURVIVAL_SurvivalCharacter_generated_h

#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	}


#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	}


#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalCharacter)


#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalCharacter)


#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalCharacter(ASurvivalCharacter&&); \
	NO_API ASurvivalCharacter(const ASurvivalCharacter&); \
public:


#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalCharacter(ASurvivalCharacter&&); \
	NO_API ASurvivalCharacter(const ASurvivalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalCharacter)


#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ASurvivalCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ASurvivalCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ASurvivalCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ASurvivalCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ASurvivalCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ASurvivalCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ASurvivalCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ASurvivalCharacter, L_MotionController); }


#define Survival_Source_Survival_Character_SurvivalCharacter_h_13_PROLOG
#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_RPC_WRAPPERS \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_INCLASS \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Source_Survival_Character_SurvivalCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Survival_Source_Survival_Character_SurvivalCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Source_Survival_Character_SurvivalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
