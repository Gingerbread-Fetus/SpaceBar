// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEBAR_StationPlayerController_generated_h
#error "StationPlayerController.generated.h already included, missing '#pragma once' in StationPlayerController.h"
#endif
#define SPACEBAR_StationPlayerController_generated_h

#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_RPC_WRAPPERS
#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStationPlayerController(); \
	friend struct Z_Construct_UClass_AStationPlayerController_Statics; \
public: \
	DECLARE_CLASS(AStationPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceBar"), NO_API) \
	DECLARE_SERIALIZER(AStationPlayerController)


#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAStationPlayerController(); \
	friend struct Z_Construct_UClass_AStationPlayerController_Statics; \
public: \
	DECLARE_CLASS(AStationPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceBar"), NO_API) \
	DECLARE_SERIALIZER(AStationPlayerController)


#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStationPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStationPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStationPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStationPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStationPlayerController(AStationPlayerController&&); \
	NO_API AStationPlayerController(const AStationPlayerController&); \
public:


#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStationPlayerController(AStationPlayerController&&); \
	NO_API AStationPlayerController(const AStationPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStationPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStationPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStationPlayerController)


#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_PRIVATE_PROPERTY_OFFSET
#define SpaceBar_Source_SpaceBar_StationPlayerController_h_14_PROLOG
#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_RPC_WRAPPERS \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_INCLASS \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceBar_Source_SpaceBar_StationPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	SpaceBar_Source_SpaceBar_StationPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEBAR_API UClass* StaticClass<class AStationPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceBar_Source_SpaceBar_StationPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
