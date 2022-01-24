// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
#ifdef AIMTRAINER_TrainerGameMode_generated_h
#error "TrainerGameMode.generated.h already included, missing '#pragma once' in TrainerGameMode.h"
#endif
#define AIMTRAINER_TrainerGameMode_generated_h

#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_10_DELEGATE \
static inline void FTrainingEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& TrainingEndedSignature) \
{ \
	TrainingEndedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_SPARSE_DATA
#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddHit); \
	DECLARE_FUNCTION(execAddShot); \
	DECLARE_FUNCTION(execGetHits); \
	DECLARE_FUNCTION(execGetShots); \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execDecrementSeconds); \
	DECLARE_FUNCTION(execBeginTraining); \
	DECLARE_FUNCTION(execAddToTargetPointArray);


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddHit); \
	DECLARE_FUNCTION(execAddShot); \
	DECLARE_FUNCTION(execGetHits); \
	DECLARE_FUNCTION(execGetShots); \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execDecrementSeconds); \
	DECLARE_FUNCTION(execBeginTraining); \
	DECLARE_FUNCTION(execAddToTargetPointArray);


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrainerGameMode(); \
	friend struct Z_Construct_UClass_ATrainerGameMode_Statics; \
public: \
	DECLARE_CLASS(ATrainerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(ATrainerGameMode)


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATrainerGameMode(); \
	friend struct Z_Construct_UClass_ATrainerGameMode_Statics; \
public: \
	DECLARE_CLASS(ATrainerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(ATrainerGameMode)


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrainerGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrainerGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrainerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrainerGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrainerGameMode(ATrainerGameMode&&); \
	NO_API ATrainerGameMode(const ATrainerGameMode&); \
public:


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrainerGameMode(ATrainerGameMode&&); \
	NO_API ATrainerGameMode(const ATrainerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrainerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrainerGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrainerGameMode)


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetArray() { return STRUCT_OFFSET(ATrainerGameMode, TargetArray); } \
	FORCEINLINE static uint32 __PPO__TargetPointerArray() { return STRUCT_OFFSET(ATrainerGameMode, TargetPointerArray); }


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_12_PROLOG
#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_RPC_WRAPPERS \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_INCLASS \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_INCLASS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMTRAINER_API UClass* StaticClass<class ATrainerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AimTrainer_Source_AimTrainer_Public_TrainerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
