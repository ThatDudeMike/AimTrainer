// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimTrainer/Public/BasePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerController() {}
// Cross Module References
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AimTrainer();
	AIMTRAINER_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();
	AIMTRAINER_API UClass* Z_Construct_UClass_ABasePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AimTrainer, nullptr, "StartTrainerSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABasePlayerController::execStartTrainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTrainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlayerController::execIsInMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInMenu();
		P_NATIVE_END;
	}
	void ABasePlayerController::StaticRegisterNativesABasePlayerController()
	{
		UClass* Class = ABasePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInMenu", &ABasePlayerController::execIsInMenu },
			{ "StartTrainer", &ABasePlayerController::execStartTrainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics
	{
		struct BasePlayerController_eventIsInMenu_Parms
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
	void Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasePlayerController_eventIsInMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BasePlayerController_eventIsInMenu_Parms), &Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "IsInMenu", nullptr, nullptr, sizeof(BasePlayerController_eventIsInMenu_Parms), Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayerController_IsInMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayerController_IsInMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlayerController_StartTrainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayerController_StartTrainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_StartTrainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "StartTrainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayerController_StartTrainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_StartTrainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayerController_StartTrainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayerController_StartTrainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePlayerController_NoRegister()
	{
		return ABasePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInMenu_MetaData[];
#endif
		static void NewProp_bInMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTrainerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StartTrainerEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AimTrainer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayerController_IsInMenu, "IsInMenu" }, // 3318101408
		{ &Z_Construct_UFunction_ABasePlayerController_StartTrainer, "StartTrainer" }, // 1267491038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasePlayerController.h" },
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bInMenu_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bInMenu_SetBit(void* Obj)
	{
		((ABasePlayerController*)Obj)->bInMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bInMenu = { "bInMenu", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABasePlayerController), &Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bInMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bInMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bInMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerController_Statics::NewProp_StartTrainerEvent_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_StartTrainerEvent = { "StartTrainerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlayerController, StartTrainerEvent), Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABasePlayerController_Statics::NewProp_StartTrainerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::NewProp_StartTrainerEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bInMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_StartTrainerEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerController_Statics::ClassParams = {
		&ABasePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePlayerController, 3248649905);
	template<> AIMTRAINER_API UClass* StaticClass<ABasePlayerController>()
	{
		return ABasePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlayerController(Z_Construct_UClass_ABasePlayerController, &ABasePlayerController::StaticClass, TEXT("/Script/AimTrainer"), TEXT("ABasePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
