// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef AIMTRAINER_AimTrainerProjectile_generated_h
#error "AimTrainerProjectile.generated.h already included, missing '#pragma once' in AimTrainerProjectile.h"
#endif
#define AIMTRAINER_AimTrainerProjectile_generated_h

#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_SPARSE_DATA
#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAimTrainerProjectile(); \
	friend struct Z_Construct_UClass_AAimTrainerProjectile_Statics; \
public: \
	DECLARE_CLASS(AAimTrainerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(AAimTrainerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAimTrainerProjectile(); \
	friend struct Z_Construct_UClass_AAimTrainerProjectile_Statics; \
public: \
	DECLARE_CLASS(AAimTrainerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(AAimTrainerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAimTrainerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAimTrainerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAimTrainerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAimTrainerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAimTrainerProjectile(AAimTrainerProjectile&&); \
	NO_API AAimTrainerProjectile(const AAimTrainerProjectile&); \
public:


#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAimTrainerProjectile(AAimTrainerProjectile&&); \
	NO_API AAimTrainerProjectile(const AAimTrainerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAimTrainerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAimTrainerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAimTrainerProjectile)


#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAimTrainerProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAimTrainerProjectile, ProjectileMovement); }


#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_12_PROLOG
#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_RPC_WRAPPERS \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_INCLASS \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_INCLASS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_AimTrainerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMTRAINER_API UClass* StaticClass<class AAimTrainerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AimTrainer_Source_AimTrainer_AimTrainerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
