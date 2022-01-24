// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMTRAINER_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define AIMTRAINER_BaseCharacter_generated_h

#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_9_DELEGATE \
static inline void FShotSignature_DelegateWrapper(const FMulticastScriptDelegate& ShotSignature) \
{ \
	ShotSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_SPARSE_DATA
#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_RPC_WRAPPERS
#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ABaseCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ABaseCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(ABaseCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(ABaseCharacter, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__GunOffset() { return STRUCT_OFFSET(ABaseCharacter, GunOffset); } \
	FORCEINLINE static uint32 __PPO__FireAnimation() { return STRUCT_OFFSET(ABaseCharacter, FireAnimation); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(ABaseCharacter, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(ABaseCharacter, WeaponClass); }


#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_11_PROLOG
#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_RPC_WRAPPERS \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_INCLASS \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMTRAINER_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AimTrainer_Source_AimTrainer_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
