// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceBar/StationPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStationPlayerController() {}
// Cross Module References
	SPACEBAR_API UClass* Z_Construct_UClass_AStationPlayerController_NoRegister();
	SPACEBAR_API UClass* Z_Construct_UClass_AStationPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SpaceBar();
// End Cross Module References
	void AStationPlayerController::StaticRegisterNativesAStationPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AStationPlayerController_NoRegister()
	{
		return AStationPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AStationPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStationPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceBar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStationPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StationPlayerController.h" },
		{ "ModuleRelativePath", "StationPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStationPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStationPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStationPlayerController_Statics::ClassParams = {
		&AStationPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStationPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStationPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStationPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStationPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStationPlayerController, 1688327592);
	template<> SPACEBAR_API UClass* StaticClass<AStationPlayerController>()
	{
		return AStationPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStationPlayerController(Z_Construct_UClass_AStationPlayerController, &AStationPlayerController::StaticClass, TEXT("/Script/SpaceBar"), TEXT("AStationPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStationPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
