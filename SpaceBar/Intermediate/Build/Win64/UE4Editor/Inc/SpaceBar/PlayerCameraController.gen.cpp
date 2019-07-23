// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceBar/PlayerCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraController() {}
// Cross Module References
	SPACEBAR_API UClass* Z_Construct_UClass_APlayerCameraController_NoRegister();
	SPACEBAR_API UClass* Z_Construct_UClass_APlayerCameraController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SpaceBar();
	SPACEBAR_API UFunction* Z_Construct_UFunction_APlayerCameraController_SetCameraAxes();
// End Cross Module References
	void APlayerCameraController::StaticRegisterNativesAPlayerCameraController()
	{
		UClass* Class = APlayerCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCameraAxes", &APlayerCameraController::execSetCameraAxes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics
	{
		struct PlayerCameraController_eventSetCameraAxes_Parms
		{
			float XInput;
			float YInput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::NewProp_YInput = { "YInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCameraController_eventSetCameraAxes_Parms, YInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::NewProp_XInput = { "XInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCameraController_eventSetCameraAxes_Parms, XInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::NewProp_YInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::NewProp_XInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraController, nullptr, "SetCameraAxes", sizeof(PlayerCameraController_eventSetCameraAxes_Parms), Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraController_SetCameraAxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCameraController_SetCameraAxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerCameraController_NoRegister()
	{
		return APlayerCameraController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceBar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCameraController_SetCameraAxes, "SetCameraAxes" }, // 1464982600
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerCameraController.h" },
		{ "ModuleRelativePath", "PlayerCameraController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraController_Statics::ClassParams = {
		&APlayerCameraController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCameraController, 2024862542);
	template<> SPACEBAR_API UClass* StaticClass<APlayerCameraController>()
	{
		return APlayerCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCameraController(Z_Construct_UClass_APlayerCameraController, &APlayerCameraController::StaticClass, TEXT("/Script/SpaceBar"), TEXT("APlayerCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
