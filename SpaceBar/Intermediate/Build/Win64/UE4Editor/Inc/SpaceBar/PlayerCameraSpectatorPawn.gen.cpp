// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceBar/PlayerCameraSpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraSpectatorPawn() {}
// Cross Module References
	SPACEBAR_API UClass* Z_Construct_UClass_APlayerCameraSpectatorPawn_NoRegister();
	SPACEBAR_API UClass* Z_Construct_UClass_APlayerCameraSpectatorPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceBar();
	SPACEBAR_API UClass* Z_Construct_UClass_AStationPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlayerCameraSpectatorPawn::StaticRegisterNativesAPlayerCameraSpectatorPawn()
	{
	}
	UClass* Z_Construct_UClass_APlayerCameraSpectatorPawn_NoRegister()
	{
		return APlayerCameraSpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMoveCamera_MetaData[];
#endif
		static void NewProp_bCanMoveCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMoveCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraScrollMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraScrollMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRadiusMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRadiusMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRadiusMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRadiusMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraXYLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraXYLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceBar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCameraSpectatorPawn.h" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_bCanMoveCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Should the camera move?" },
	};
#endif
	void Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_bCanMoveCamera_SetBit(void* Obj)
	{
		((APlayerCameraSpectatorPawn*)Obj)->bCanMoveCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_bCanMoveCamera = { "bCanMoveCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerCameraSpectatorPawn), &Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_bCanMoveCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_bCanMoveCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_bCanMoveCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraScrollMargin_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Camera Scroll Boundary" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraScrollMargin = { "CameraScrollMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraScrollMargin), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraScrollMargin_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraScrollMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraMovementSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Camera Movement Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraMovementSpeed = { "CameraMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraMovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Camera Zoom Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraZoomSpeed = { "CameraZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraZoomSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMin_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Camera Radius Min" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMin = { "CameraRadiusMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraRadiusMin), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMax_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Camera Radius Max" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMax = { "CameraRadiusMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraRadiusMax), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadius_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Camera Radius (Distance) From Pawn Position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadius = { "CameraRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraRadius), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraXYLimit_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "/ Camera XY limit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraXYLimit = { "CameraXYLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraXYLimit), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraXYLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraXYLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_PC_MetaData[] = {
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, PC), Z_Construct_UClass_AStationPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_PC_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_PC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_RootScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_RootScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_RootScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCameraSpectatorPawn.h" },
		{ "ToolTip", "Camera Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCameraSpectatorPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_bCanMoveCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraScrollMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraZoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadiusMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraXYLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_PC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_RootScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraSpectatorPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::ClassParams = {
		&APlayerCameraSpectatorPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCameraSpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCameraSpectatorPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCameraSpectatorPawn, 1085765216);
	template<> SPACEBAR_API UClass* StaticClass<APlayerCameraSpectatorPawn>()
	{
		return APlayerCameraSpectatorPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCameraSpectatorPawn(Z_Construct_UClass_APlayerCameraSpectatorPawn, &APlayerCameraSpectatorPawn::StaticClass, TEXT("/Script/SpaceBar"), TEXT("APlayerCameraSpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraSpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
