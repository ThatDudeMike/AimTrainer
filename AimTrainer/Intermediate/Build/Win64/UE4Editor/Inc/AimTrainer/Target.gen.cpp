// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimTrainer/Public/Target.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget() {}
// Cross Module References
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AimTrainer();
	AIMTRAINER_API UClass* Z_Construct_UClass_ATarget_NoRegister();
	AIMTRAINER_API UClass* Z_Construct_UClass_ATarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AimTrainer, nullptr, "HitSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATarget::execTargetHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATarget::execIsBodyActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBodyActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATarget::execIsHeadActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeadActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATarget::execActivateBody)
	{
		P_GET_UBOOL(Z_Param_InActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBody(Z_Param_InActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATarget::execActivateHead)
	{
		P_GET_UBOOL(Z_Param_InActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateHead(Z_Param_InActive);
		P_NATIVE_END;
	}
	void ATarget::StaticRegisterNativesATarget()
	{
		UClass* Class = ATarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBody", &ATarget::execActivateBody },
			{ "ActivateHead", &ATarget::execActivateHead },
			{ "IsBodyActive", &ATarget::execIsBodyActive },
			{ "IsHeadActive", &ATarget::execIsHeadActive },
			{ "TargetHit", &ATarget::execTargetHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATarget_ActivateBody_Statics
	{
		struct Target_eventActivateBody_Parms
		{
			bool InActive;
		};
		static void NewProp_InActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATarget_ActivateBody_Statics::NewProp_InActive_SetBit(void* Obj)
	{
		((Target_eventActivateBody_Parms*)Obj)->InActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATarget_ActivateBody_Statics::NewProp_InActive = { "InActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Target_eventActivateBody_Parms), &Z_Construct_UFunction_ATarget_ActivateBody_Statics::NewProp_InActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATarget_ActivateBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_ActivateBody_Statics::NewProp_InActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_ActivateBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATarget_ActivateBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATarget, nullptr, "ActivateBody", nullptr, nullptr, sizeof(Target_eventActivateBody_Parms), Z_Construct_UFunction_ATarget_ActivateBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_ActivateBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATarget_ActivateBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_ActivateBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATarget_ActivateBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATarget_ActivateBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATarget_ActivateHead_Statics
	{
		struct Target_eventActivateHead_Parms
		{
			bool InActive;
		};
		static void NewProp_InActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATarget_ActivateHead_Statics::NewProp_InActive_SetBit(void* Obj)
	{
		((Target_eventActivateHead_Parms*)Obj)->InActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATarget_ActivateHead_Statics::NewProp_InActive = { "InActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Target_eventActivateHead_Parms), &Z_Construct_UFunction_ATarget_ActivateHead_Statics::NewProp_InActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATarget_ActivateHead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_ActivateHead_Statics::NewProp_InActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_ActivateHead_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATarget_ActivateHead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATarget, nullptr, "ActivateHead", nullptr, nullptr, sizeof(Target_eventActivateHead_Parms), Z_Construct_UFunction_ATarget_ActivateHead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_ActivateHead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATarget_ActivateHead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_ActivateHead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATarget_ActivateHead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATarget_ActivateHead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATarget_IsBodyActive_Statics
	{
		struct Target_eventIsBodyActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATarget_IsBodyActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Target_eventIsBodyActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATarget_IsBodyActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Target_eventIsBodyActive_Parms), &Z_Construct_UFunction_ATarget_IsBodyActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATarget_IsBodyActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_IsBodyActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_IsBodyActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATarget_IsBodyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATarget, nullptr, "IsBodyActive", nullptr, nullptr, sizeof(Target_eventIsBodyActive_Parms), Z_Construct_UFunction_ATarget_IsBodyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_IsBodyActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATarget_IsBodyActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_IsBodyActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATarget_IsBodyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATarget_IsBodyActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATarget_IsHeadActive_Statics
	{
		struct Target_eventIsHeadActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATarget_IsHeadActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Target_eventIsHeadActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATarget_IsHeadActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Target_eventIsHeadActive_Parms), &Z_Construct_UFunction_ATarget_IsHeadActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATarget_IsHeadActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_IsHeadActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_IsHeadActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATarget_IsHeadActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATarget, nullptr, "IsHeadActive", nullptr, nullptr, sizeof(Target_eventIsHeadActive_Parms), Z_Construct_UFunction_ATarget_IsHeadActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_IsHeadActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATarget_IsHeadActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_IsHeadActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATarget_IsHeadActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATarget_IsHeadActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATarget_TargetHit_Statics
	{
		struct Target_eventTargetHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Target_eventTargetHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Target_eventTargetHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Target_eventTargetHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Target_eventTargetHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Target_eventTargetHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATarget_TargetHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATarget_TargetHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATarget_TargetHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATarget_TargetHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATarget, nullptr, "TargetHit", nullptr, nullptr, sizeof(Target_eventTargetHit_Parms), Z_Construct_UFunction_ATarget_TargetHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_TargetHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATarget_TargetHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATarget_TargetHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATarget_TargetHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATarget_TargetHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATarget_NoRegister()
	{
		return ATarget::StaticClass();
	}
	struct Z_Construct_UClass_ATarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveBodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveBodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveBodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveBodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveHeadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveHeadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveHeadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveHeadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HitEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AimTrainer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATarget_ActivateBody, "ActivateBody" }, // 1418514526
		{ &Z_Construct_UFunction_ATarget_ActivateHead, "ActivateHead" }, // 4178402226
		{ &Z_Construct_UFunction_ATarget_IsBodyActive, "IsBodyActive" }, // 1838663530
		{ &Z_Construct_UFunction_ATarget_IsHeadActive, "IsHeadActive" }, // 3620312088
		{ &Z_Construct_UFunction_ATarget_TargetHit, "TargetHit" }, // 3282525853
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Target.h" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_HeadMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_HeadMesh = { "HeadMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, HeadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_HeadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_HeadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_InactiveBodyMesh_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_InactiveBodyMesh = { "InactiveBodyMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, InactiveBodyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_InactiveBodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_InactiveBodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_ActiveBodyMesh_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_ActiveBodyMesh = { "ActiveBodyMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, ActiveBodyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_ActiveBodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_ActiveBodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_InactiveHeadMesh_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_InactiveHeadMesh = { "InactiveHeadMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, InactiveHeadMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_InactiveHeadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_InactiveHeadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_ActiveHeadMesh_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_ActiveHeadMesh = { "ActiveHeadMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, ActiveHeadMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_ActiveHeadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_ActiveHeadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_HitEvent_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Target.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_HitEvent = { "HitEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATarget, HitEvent), Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_HitEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_HitEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_HeadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_InactiveBodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_ActiveBodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_InactiveHeadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_ActiveHeadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_HitEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATarget_Statics::ClassParams = {
		&ATarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATarget, 375902565);
	template<> AIMTRAINER_API UClass* StaticClass<ATarget>()
	{
		return ATarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATarget(Z_Construct_UClass_ATarget, &ATarget::StaticClass, TEXT("/Script/AimTrainer"), TEXT("ATarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
