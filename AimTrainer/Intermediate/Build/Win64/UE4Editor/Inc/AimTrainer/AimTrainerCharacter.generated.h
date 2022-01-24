// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMTRAINER_AimTrainerCharacter_generated_h
#error "AimTrainerCharacter.generated.h already included, missing '#pragma once' in AimTrainerCharacter.h"
#endif
#define AIMTRAINER_AimTrainerCharacter_generated_h

#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_SPARSE_DATA
#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_RPC_WRAPPERS
#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAimTrainerCharacter(); \
	friend struct Z_Construct_UClass_AAimTrainerCharacter_Statics; \
public: \
	DECLARE_CLASS(AAimTrainerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(AAimTrainerCharacter)


#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAAimTrainerCharacter(); \
	friend struct Z_Construct_UClass_AAimTrainerCharacter_Statics; \
public: \
	DECLARE_CLASS(AAimTrainerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(AAimTrainerCharacter)


#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAimTrainerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAimTrainerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAimTrainerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAimTrainerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAimTrainerCharacter(AAimTrainerCharacter&&); \
	NO_API AAimTrainerCharacter(const AAimTrainerCharacter&); \
public:


#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAimTrainerCharacter(AAimTrainerCharacter&&); \
	NO_API AAimTrainerCharacter(const AAimTrainerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAimTrainerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAimTrainerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAimTrainerCharacter)


#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AAimTrainerCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AAimTrainerCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AAimTrainerCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AAimTrainerCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AAimTrainerCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AAimTrainerCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AAimTrainerCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AAimTrainerCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(AAimTrainerCharacter, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(AAimTrainerCharacter, WeaponClass); }


#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_17_PROLOG
#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_RPC_WRAPPERS \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_INCLASS \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_AimTrainerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMTRAINER_API UClass* StaticClass<class AAimTrainerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AimTrainer_Source_AimTrainer_AimTrainerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
