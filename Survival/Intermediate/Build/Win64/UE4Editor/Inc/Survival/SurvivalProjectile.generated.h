// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SURVIVAL_SurvivalProjectile_generated_h
#error "SurvivalProjectile.generated.h already included, missing '#pragma once' in SurvivalProjectile.h"
#endif
#define SURVIVAL_SurvivalProjectile_generated_h

#define Survival_Source_Survival_SurvivalProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Survival_Source_Survival_SurvivalProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Survival_Source_Survival_SurvivalProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalProjectile(); \
	friend struct Z_Construct_UClass_ASurvivalProjectile_Statics; \
public: \
	DECLARE_CLASS(ASurvivalProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Survival_Source_Survival_SurvivalProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalProjectile(); \
	friend struct Z_Construct_UClass_ASurvivalProjectile_Statics; \
public: \
	DECLARE_CLASS(ASurvivalProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Survival_Source_Survival_SurvivalProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalProjectile(ASurvivalProjectile&&); \
	NO_API ASurvivalProjectile(const ASurvivalProjectile&); \
public:


#define Survival_Source_Survival_SurvivalProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalProjectile(ASurvivalProjectile&&); \
	NO_API ASurvivalProjectile(const ASurvivalProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalProjectile)


#define Survival_Source_Survival_SurvivalProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASurvivalProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASurvivalProjectile, ProjectileMovement); }


#define Survival_Source_Survival_SurvivalProjectile_h_9_PROLOG
#define Survival_Source_Survival_SurvivalProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_SurvivalProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_SurvivalProjectile_h_12_RPC_WRAPPERS \
	Survival_Source_Survival_SurvivalProjectile_h_12_INCLASS \
	Survival_Source_Survival_SurvivalProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Source_Survival_SurvivalProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_SurvivalProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_SurvivalProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Source_Survival_SurvivalProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Survival_Source_Survival_SurvivalProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Source_Survival_SurvivalProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
