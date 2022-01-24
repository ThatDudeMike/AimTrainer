// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimTrainer/Public/Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	AIMTRAINER_API UClass* Z_Construct_UClass_AGun_NoRegister();
	AIMTRAINER_API UClass* Z_Construct_UClass_AGun();
	AIMTRAINER_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_AimTrainer();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMTRAINER_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGun::execSetSafetyOn)
	{
		P_GET_UBOOL(Z_Param_bInSafety);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSafetyOn(Z_Param_bInSafety);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execIsSafetyOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSafetyOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execShoot)
	{
		P_GET_OBJECT(AController,Z_Param_AttackerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot(Z_Param_AttackerController);
		P_NATIVE_END;
	}
	void AGun::StaticRegisterNativesAGun()
	{
		UClass* Class = AGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSafetyOn", &AGun::execIsSafetyOn },
			{ "Reload", &AGun::execReload },
			{ "SetSafetyOn", &AGun::execSetSafetyOn },
			{ "Shoot", &AGun::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGun_IsSafetyOn_Statics
	{
		struct Gun_eventIsSafetyOn_Parms
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
	void Z_Construct_UFunction_AGun_IsSafetyOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventIsSafetyOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_IsSafetyOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventIsSafetyOn_Parms), &Z_Construct_UFunction_AGun_IsSafetyOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_IsSafetyOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_IsSafetyOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_IsSafetyOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_IsSafetyOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "IsSafetyOn", nullptr, nullptr, sizeof(Gun_eventIsSafetyOn_Parms), Z_Construct_UFunction_AGun_IsSafetyOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsSafetyOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_IsSafetyOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsSafetyOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_IsSafetyOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_IsSafetyOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_SetSafetyOn_Statics
	{
		struct Gun_eventSetSafetyOn_Parms
		{
			bool bInSafety;
		};
		static void NewProp_bInSafety_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInSafety;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGun_SetSafetyOn_Statics::NewProp_bInSafety_SetBit(void* Obj)
	{
		((Gun_eventSetSafetyOn_Parms*)Obj)->bInSafety = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_SetSafetyOn_Statics::NewProp_bInSafety = { "bInSafety", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventSetSafetyOn_Parms), &Z_Construct_UFunction_AGun_SetSafetyOn_Statics::NewProp_bInSafety_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_SetSafetyOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_SetSafetyOn_Statics::NewProp_bInSafety,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_SetSafetyOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_SetSafetyOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "SetSafetyOn", nullptr, nullptr, sizeof(Gun_eventSetSafetyOn_Parms), Z_Construct_UFunction_AGun_SetSafetyOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_SetSafetyOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_SetSafetyOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_SetSafetyOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_SetSafetyOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_SetSafetyOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_Shoot_Statics
	{
		struct Gun_eventShoot_Parms
		{
			AController* AttackerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGun_Shoot_Statics::NewProp_AttackerController = { "AttackerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventShoot_Parms, AttackerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_Shoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_Shoot_Statics::NewProp_AttackerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_Shoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "Shoot", nullptr, nullptr, sizeof(Gun_eventShoot_Parms), Z_Construct_UFunction_AGun_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_Shoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSafetyOn_MetaData[];
#endif
		static void NewProp_bSafetyOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSafetyOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_AimTrainer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGun_IsSafetyOn, "IsSafetyOn" }, // 205027827
		{ &Z_Construct_UFunction_AGun_Reload, "Reload" }, // 2145563502
		{ &Z_Construct_UFunction_AGun_SetSafetyOn, "SetSafetyOn" }, // 1182861105
		{ &Z_Construct_UFunction_AGun_Shoot, "Shoot" }, // 400610055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bSafetyOn_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bSafetyOn_SetBit(void* Obj)
	{
		((AGun*)Obj)->bSafetyOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bSafetyOn = { "bSafetyOn", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bSafetyOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_bSafetyOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bSafetyOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleVelocity_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleVelocity = { "MuzzleVelocity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MuzzleVelocity), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoCount_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoCount = { "MaxAmmoCount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MaxAmmoCount), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_AmmoCount_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_AmmoCount = { "AmmoCount", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, AmmoCount), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_AmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_AmmoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bSafetyOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_AmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGun, 990246652);
	template<> AIMTRAINER_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGun(Z_Construct_UClass_AGun, &AGun::StaticClass, TEXT("/Script/AimTrainer"), TEXT("AGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
