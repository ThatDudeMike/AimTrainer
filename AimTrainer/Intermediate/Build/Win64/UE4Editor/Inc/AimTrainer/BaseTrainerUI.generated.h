// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMTRAINER_BaseTrainerUI_generated_h
#error "BaseTrainerUI.generated.h already included, missing '#pragma once' in BaseTrainerUI.h"
#endif
#define AIMTRAINER_BaseTrainerUI_generated_h

#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_10_DELEGATE \
static inline void FCountDownCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountDownCompletedSignature) \
{ \
	CountDownCompletedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_SPARSE_DATA
#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCountdownCompleted); \
	DECLARE_FUNCTION(execResetCountdownSeconds); \
	DECLARE_FUNCTION(execDecrementCountDownSeconds); \
	DECLARE_FUNCTION(execGetCountDownSeconds); \
	DECLARE_FUNCTION(execBeginCountDown); \
	DECLARE_FUNCTION(execStartingTextBlockTick); \
	DECLARE_FUNCTION(execUpdatedStartingTextBlock); \
	DECLARE_FUNCTION(execSetStartingTextBlock);


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountdownCompleted); \
	DECLARE_FUNCTION(execResetCountdownSeconds); \
	DECLARE_FUNCTION(execDecrementCountDownSeconds); \
	DECLARE_FUNCTION(execGetCountDownSeconds); \
	DECLARE_FUNCTION(execBeginCountDown); \
	DECLARE_FUNCTION(execStartingTextBlockTick); \
	DECLARE_FUNCTION(execUpdatedStartingTextBlock); \
	DECLARE_FUNCTION(execSetStartingTextBlock);


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseTrainerUI(); \
	friend struct Z_Construct_UClass_UBaseTrainerUI_Statics; \
public: \
	DECLARE_CLASS(UBaseTrainerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(UBaseTrainerUI)


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBaseTrainerUI(); \
	friend struct Z_Construct_UClass_UBaseTrainerUI_Statics; \
public: \
	DECLARE_CLASS(UBaseTrainerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(UBaseTrainerUI)


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseTrainerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseTrainerUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTrainerUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTrainerUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTrainerUI(UBaseTrainerUI&&); \
	NO_API UBaseTrainerUI(const UBaseTrainerUI&); \
public:


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseTrainerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTrainerUI(UBaseTrainerUI&&); \
	NO_API UBaseTrainerUI(const UBaseTrainerUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTrainerUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTrainerUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseTrainerUI)


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartText() { return STRUCT_OFFSET(UBaseTrainerUI, StartText); } \
	FORCEINLINE static uint32 __PPO__TimeText() { return STRUCT_OFFSET(UBaseTrainerUI, TimeText); } \
	FORCEINLINE static uint32 __PPO__HitMissText() { return STRUCT_OFFSET(UBaseTrainerUI, HitMissText); } \
	FORCEINLINE static uint32 __PPO__CountDownSeconds() { return STRUCT_OFFSET(UBaseTrainerUI, CountDownSeconds); }


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_12_PROLOG
#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_RPC_WRAPPERS \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_INCLASS \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_INCLASS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMTRAINER_API UClass* StaticClass<class UBaseTrainerUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AimTrainer_Source_AimTrainer_Public_BaseTrainerUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
