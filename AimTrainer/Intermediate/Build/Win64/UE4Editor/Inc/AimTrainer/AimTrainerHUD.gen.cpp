// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimTrainer/AimTrainerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimTrainerHUD() {}
// Cross Module References
	AIMTRAINER_API UClass* Z_Construct_UClass_AAimTrainerHUD_NoRegister();
	AIMTRAINER_API UClass* Z_Construct_UClass_AAimTrainerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_AimTrainer();
// End Cross Module References
	void AAimTrainerHUD::StaticRegisterNativesAAimTrainerHUD()
	{
	}
	UClass* Z_Construct_UClass_AAimTrainerHUD_NoRegister()
	{
		return AAimTrainerHUD::StaticClass();
	}
	struct Z_Construct_UClass_AAimTrainerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAimTrainerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_AimTrainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAimTrainerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "AimTrainerHUD.h" },
		{ "ModuleRelativePath", "AimTrainerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAimTrainerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAimTrainerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAimTrainerHUD_Statics::ClassParams = {
		&AAimTrainerHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAimTrainerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAimTrainerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAimTrainerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAimTrainerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAimTrainerHUD, 3669006671);
	template<> AIMTRAINER_API UClass* StaticClass<AAimTrainerHUD>()
	{
		return AAimTrainerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAimTrainerHUD(Z_Construct_UClass_AAimTrainerHUD, &AAimTrainerHUD::StaticClass, TEXT("/Script/AimTrainer"), TEXT("AAimTrainerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAimTrainerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
