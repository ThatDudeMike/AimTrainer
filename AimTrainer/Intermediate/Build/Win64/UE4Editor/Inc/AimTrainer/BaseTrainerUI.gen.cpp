// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimTrainer/Public/BaseTrainerUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTrainerUI() {}
// Cross Module References
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AimTrainer();
	AIMTRAINER_API UClass* Z_Construct_UClass_UBaseTrainerUI_NoRegister();
	AIMTRAINER_API UClass* Z_Construct_UClass_UBaseTrainerUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AimTrainer, nullptr, "CountDownCompletedSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execCountdownCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CountdownCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execResetCountdownSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCountdownSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execDecrementCountDownSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementCountDownSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execGetCountDownSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCountDownSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execBeginCountDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginCountDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execStartingTextBlockTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartingTextBlockTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execUpdatedStartingTextBlock)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatedStartingTextBlock(Z_Param_InString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTrainerUI::execSetStartingTextBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartingTextBlock();
		P_NATIVE_END;
	}
	void UBaseTrainerUI::StaticRegisterNativesUBaseTrainerUI()
	{
		UClass* Class = UBaseTrainerUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginCountDown", &UBaseTrainerUI::execBeginCountDown },
			{ "CountdownCompleted", &UBaseTrainerUI::execCountdownCompleted },
			{ "DecrementCountDownSeconds", &UBaseTrainerUI::execDecrementCountDownSeconds },
			{ "GetCountDownSeconds", &UBaseTrainerUI::execGetCountDownSeconds },
			{ "ResetCountdownSeconds", &UBaseTrainerUI::execResetCountdownSeconds },
			{ "SetStartingTextBlock", &UBaseTrainerUI::execSetStartingTextBlock },
			{ "StartingTextBlockTick", &UBaseTrainerUI::execStartingTextBlockTick },
			{ "UpdatedStartingTextBlock", &UBaseTrainerUI::execUpdatedStartingTextBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "BeginCountDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "CountdownCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "DecrementCountDownSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics
	{
		struct BaseTrainerUI_eventGetCountDownSeconds_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTrainerUI_eventGetCountDownSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "GetCountDownSeconds", nullptr, nullptr, sizeof(BaseTrainerUI_eventGetCountDownSeconds_Parms), Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "ResetCountdownSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "SetStartingTextBlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "StartingTextBlockTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics
	{
		struct BaseTrainerUI_eventUpdatedStartingTextBlock_Parms
		{
			FString InString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTrainerUI_eventUpdatedStartingTextBlock_Parms, InString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTrainerUI, nullptr, "UpdatedStartingTextBlock", nullptr, nullptr, sizeof(BaseTrainerUI_eventUpdatedStartingTextBlock_Parms), Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseTrainerUI_NoRegister()
	{
		return UBaseTrainerUI::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTrainerUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitMissText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitMissText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountDownSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountDownSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownCompletedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CountdownCompletedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTrainerUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AimTrainer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTrainerUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTrainerUI_BeginCountDown, "BeginCountDown" }, // 1868118718
		{ &Z_Construct_UFunction_UBaseTrainerUI_CountdownCompleted, "CountdownCompleted" }, // 781496435
		{ &Z_Construct_UFunction_UBaseTrainerUI_DecrementCountDownSeconds, "DecrementCountDownSeconds" }, // 4294422876
		{ &Z_Construct_UFunction_UBaseTrainerUI_GetCountDownSeconds, "GetCountDownSeconds" }, // 2495451944
		{ &Z_Construct_UFunction_UBaseTrainerUI_ResetCountdownSeconds, "ResetCountdownSeconds" }, // 255924734
		{ &Z_Construct_UFunction_UBaseTrainerUI_SetStartingTextBlock, "SetStartingTextBlock" }, // 2364009317
		{ &Z_Construct_UFunction_UBaseTrainerUI_StartingTextBlockTick, "StartingTextBlockTick" }, // 1000018285
		{ &Z_Construct_UFunction_UBaseTrainerUI_UpdatedStartingTextBlock, "UpdatedStartingTextBlock" }, // 1177170545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTrainerUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTrainerUI.h" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_StartText_MetaData[] = {
		{ "Category", "TrainerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_StartText = { "StartText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTrainerUI, StartText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_StartText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_StartText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_TimeText_MetaData[] = {
		{ "Category", "TrainerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_TimeText = { "TimeText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTrainerUI, TimeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_TimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_TimeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_HitMissText_MetaData[] = {
		{ "Category", "TrainerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_HitMissText = { "HitMissText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTrainerUI, HitMissText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_HitMissText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_HitMissText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountDownSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountDownSeconds = { "CountDownSeconds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTrainerUI, CountDownSeconds), METADATA_PARAMS(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountDownSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountDownSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountdownCompletedEvent_MetaData[] = {
		{ "Category", "TrainerUI" },
		{ "ModuleRelativePath", "Public/BaseTrainerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountdownCompletedEvent = { "CountdownCompletedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTrainerUI, CountdownCompletedEvent), Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountdownCompletedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountdownCompletedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTrainerUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_StartText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_TimeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_HitMissText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountDownSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTrainerUI_Statics::NewProp_CountdownCompletedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTrainerUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTrainerUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseTrainerUI_Statics::ClassParams = {
		&UBaseTrainerUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseTrainerUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTrainerUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTrainerUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTrainerUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTrainerUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseTrainerUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseTrainerUI, 1671486319);
	template<> AIMTRAINER_API UClass* StaticClass<UBaseTrainerUI>()
	{
		return UBaseTrainerUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseTrainerUI(Z_Construct_UClass_UBaseTrainerUI, &UBaseTrainerUI::StaticClass, TEXT("/Script/AimTrainer"), TEXT("UBaseTrainerUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTrainerUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
