// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimTrainer/AimTrainerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimTrainerGameMode() {}
// Cross Module References
	AIMTRAINER_API UClass* Z_Construct_UClass_AAimTrainerGameMode_NoRegister();
	AIMTRAINER_API UClass* Z_Construct_UClass_AAimTrainerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AimTrainer();
// End Cross Module References
	void AAimTrainerGameMode::StaticRegisterNativesAAimTrainerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAimTrainerGameMode_NoRegister()
	{
		return AAimTrainerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAimTrainerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAimTrainerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AimTrainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAimTrainerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AimTrainerGameMode.h" },
		{ "ModuleRelativePath", "AimTrainerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAimTrainerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAimTrainerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAimTrainerGameMode_Statics::ClassParams = {
		&AAimTrainerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAimTrainerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAimTrainerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAimTrainerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAimTrainerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAimTrainerGameMode, 3150225264);
	template<> AIMTRAINER_API UClass* StaticClass<AAimTrainerGameMode>()
	{
		return AAimTrainerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAimTrainerGameMode(Z_Construct_UClass_AAimTrainerGameMode, &AAimTrainerGameMode::StaticClass, TEXT("/Script/AimTrainer"), TEXT("AAimTrainerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAimTrainerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
