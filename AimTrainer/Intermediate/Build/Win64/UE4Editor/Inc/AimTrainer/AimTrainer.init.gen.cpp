// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimTrainer_init() {}
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_ShotSignature__DelegateSignature();
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature();
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature();
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature();
	AIMTRAINER_API UFunction* Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AimTrainer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AimTrainer_ShotSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AimTrainer_StartTrainerSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AimTrainer_CountDownCompletedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AimTrainer_HitSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AimTrainer_TrainingEndedSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AimTrainer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF5A018D2,
				0x1DAE9981,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
