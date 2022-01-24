// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimTrainer/Public/TrainerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainerGameMode() {}
// Cross Module References
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AimTrainer();
	AIMTRAINER_API UClass* Z_Construct_UClass_ATrainerGameMode_NoRegister();
	AIMTRAINER_API UClass* Z_Construct_UClass_ATrainerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMTRAINER_API UClass* Z_Construct_UClass_ATarget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AimTrainer, nullptr, "TrainingEndedSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execAddHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execAddShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execGetHits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execGetShots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetShots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execGetSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execDecrementSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execBeginTraining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTraining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrainerGameMode::execAddToTargetPointArray)
	{
		P_GET_OBJECT(ATargetPoint,Z_Param_InTargetPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToTargetPointArray(Z_Param_InTargetPoint);
		P_NATIVE_END;
	}
	void ATrainerGameMode::StaticRegisterNativesATrainerGameMode()
	{
		UClass* Class = ATrainerGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHit", &ATrainerGameMode::execAddHit },
			{ "AddShot", &ATrainerGameMode::execAddShot },
			{ "AddToTargetPointArray", &ATrainerGameMode::execAddToTargetPointArray },
			{ "BeginTraining", &ATrainerGameMode::execBeginTraining },
			{ "DecrementSeconds", &ATrainerGameMode::execDecrementSeconds },
			{ "GetHits", &ATrainerGameMode::execGetHits },
			{ "GetSeconds", &ATrainerGameMode::execGetSeconds },
			{ "GetShots", &ATrainerGameMode::execGetShots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrainerGameMode_AddHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_AddHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_AddHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "AddHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_AddHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_AddHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_AddHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_AddHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrainerGameMode_AddShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_AddShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_AddShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "AddShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_AddShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_AddShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_AddShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_AddShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics
	{
		struct TrainerGameMode_eventAddToTargetPointArray_Parms
		{
			ATargetPoint* InTargetPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTargetPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::NewProp_InTargetPoint = { "InTargetPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrainerGameMode_eventAddToTargetPointArray_Parms, InTargetPoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::NewProp_InTargetPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "AddToTargetPointArray", nullptr, nullptr, sizeof(TrainerGameMode_eventAddToTargetPointArray_Parms), Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrainerGameMode_BeginTraining_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_BeginTraining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_BeginTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "BeginTraining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_BeginTraining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_BeginTraining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_BeginTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_BeginTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "DecrementSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics
	{
		struct TrainerGameMode_eventGetHits_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrainerGameMode_eventGetHits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "GetHits", nullptr, nullptr, sizeof(TrainerGameMode_eventGetHits_Parms), Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_GetHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_GetHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics
	{
		struct TrainerGameMode_eventGetSeconds_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrainerGameMode_eventGetSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "GetSeconds", nullptr, nullptr, sizeof(TrainerGameMode_eventGetSeconds_Parms), Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_GetSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_GetSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics
	{
		struct TrainerGameMode_eventGetShots_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrainerGameMode_eventGetShots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainerGameMode, nullptr, "GetShots", nullptr, nullptr, sizeof(TrainerGameMode_eventGetShots_Parms), Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrainerGameMode_GetShots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrainerGameMode_GetShots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATrainerGameMode_NoRegister()
	{
		return ATrainerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATrainerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPointerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPointerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetPointerArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrainingEndedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TrainingEndedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrainerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AimTrainer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrainerGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrainerGameMode_AddHit, "AddHit" }, // 2985197611
		{ &Z_Construct_UFunction_ATrainerGameMode_AddShot, "AddShot" }, // 1002584456
		{ &Z_Construct_UFunction_ATrainerGameMode_AddToTargetPointArray, "AddToTargetPointArray" }, // 4018078186
		{ &Z_Construct_UFunction_ATrainerGameMode_BeginTraining, "BeginTraining" }, // 2636250143
		{ &Z_Construct_UFunction_ATrainerGameMode_DecrementSeconds, "DecrementSeconds" }, // 2993139097
		{ &Z_Construct_UFunction_ATrainerGameMode_GetHits, "GetHits" }, // 2090283869
		{ &Z_Construct_UFunction_ATrainerGameMode_GetSeconds, "GetSeconds" }, // 2801404863
		{ &Z_Construct_UFunction_ATrainerGameMode_GetShots, "GetShots" }, // 1917636934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TrainerGameMode.h" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetClass_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetClass = { "TargetClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrainerGameMode, TargetClass), Z_Construct_UClass_ATarget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetArray_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrainerGameMode, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetPointerArray_Inner = { "TargetPointerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetPointerArray_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetPointerArray = { "TargetPointerArray", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrainerGameMode, TargetPointerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetPointerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetPointerArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TrainingEndedEvent_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/TrainerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TrainingEndedEvent = { "TrainingEndedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrainerGameMode, TrainingEndedEvent), Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TrainingEndedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TrainingEndedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainerGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetPointerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TargetPointerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainerGameMode_Statics::NewProp_TrainingEndedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrainerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrainerGameMode_Statics::ClassParams = {
		&ATrainerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrainerGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATrainerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrainerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrainerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrainerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrainerGameMode, 482857195);
	template<> AIMTRAINER_API UClass* StaticClass<ATrainerGameMode>()
	{
		return ATrainerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrainerGameMode(Z_Construct_UClass_ATrainerGameMode, &ATrainerGameMode::StaticClass, TEXT("/Script/AimTrainer"), TEXT("ATrainerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
