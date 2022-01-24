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
#ifdef AIMTRAINER_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define AIMTRAINER_Target_generated_h

#define AimTrainer_Source_AimTrainer_Public_Target_h_9_DELEGATE \
static inline void FHitSignature_DelegateWrapper(const FMulticastScriptDelegate& HitSignature) \
{ \
	HitSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_SPARSE_DATA
#define AimTrainer_Source_AimTrainer_Public_Target_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTargetHit); \
	DECLARE_FUNCTION(execIsBodyActive); \
	DECLARE_FUNCTION(execIsHeadActive); \
	DECLARE_FUNCTION(execActivateBody); \
	DECLARE_FUNCTION(execActivateHead);


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTargetHit); \
	DECLARE_FUNCTION(execIsBodyActive); \
	DECLARE_FUNCTION(execIsHeadActive); \
	DECLARE_FUNCTION(execActivateBody); \
	DECLARE_FUNCTION(execActivateHead);


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AimTrainer"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public:


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget)


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(ATarget, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(ATarget, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__HeadMesh() { return STRUCT_OFFSET(ATarget, HeadMesh); } \
	FORCEINLINE static uint32 __PPO__InactiveBodyMesh() { return STRUCT_OFFSET(ATarget, InactiveBodyMesh); } \
	FORCEINLINE static uint32 __PPO__ActiveBodyMesh() { return STRUCT_OFFSET(ATarget, ActiveBodyMesh); } \
	FORCEINLINE static uint32 __PPO__InactiveHeadMesh() { return STRUCT_OFFSET(ATarget, InactiveHeadMesh); } \
	FORCEINLINE static uint32 __PPO__ActiveHeadMesh() { return STRUCT_OFFSET(ATarget, ActiveHeadMesh); }


#define AimTrainer_Source_AimTrainer_Public_Target_h_11_PROLOG
#define AimTrainer_Source_AimTrainer_Public_Target_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_RPC_WRAPPERS \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_INCLASS \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AimTrainer_Source_AimTrainer_Public_Target_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_PRIVATE_PROPERTY_OFFSET \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_SPARSE_DATA \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_INCLASS_NO_PURE_DECLS \
	AimTrainer_Source_AimTrainer_Public_Target_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMTRAINER_API UClass* StaticClass<class ATarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AimTrainer_Source_AimTrainer_Public_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
