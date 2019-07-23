// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEBAR_PlayerCameraController_generated_h
#error "PlayerCameraController.generated.h already included, missing '#pragma once' in PlayerCameraController.h"
#endif
#define SPACEBAR_PlayerCameraController_generated_h

#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraAxes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_XInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_YInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraAxes(Z_Param_XInput,Z_Param_YInput); \
		P_NATIVE_END; \
	}


#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraAxes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_XInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_YInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraAxes(Z_Param_XInput,Z_Param_YInput); \
		P_NATIVE_END; \
	}


#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraController(); \
	friend struct Z_Construct_UClass_APlayerCameraController_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceBar"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraController)


#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCameraController(); \
	friend struct Z_Construct_UClass_APlayerCameraController_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceBar"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraController)


#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraController(APlayerCameraController&&); \
	NO_API APlayerCameraController(const APlayerCameraController&); \
public:


#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraController(APlayerCameraController&&); \
	NO_API APlayerCameraController(const APlayerCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraController)


#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_PRIVATE_PROPERTY_OFFSET
#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_15_PROLOG
#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_PRIVATE_PROPERTY_OFFSET \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_RPC_WRAPPERS \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_INCLASS \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_PRIVATE_PROPERTY_OFFSET \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_INCLASS_NO_PURE_DECLS \
	SpaceBar_Source_SpaceBar_PlayerCameraController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEBAR_API UClass* StaticClass<class APlayerCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceBar_Source_SpaceBar_PlayerCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
