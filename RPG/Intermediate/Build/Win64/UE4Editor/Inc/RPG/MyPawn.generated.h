// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define RPG_MyPawn_generated_h

#define RPG_Source_RPG_MyPawn_h_12_SPARSE_DATA
#define RPG_Source_RPG_MyPawn_h_12_RPC_WRAPPERS
#define RPG_Source_RPG_MyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_MyPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define RPG_Source_RPG_MyPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define RPG_Source_RPG_MyPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define RPG_Source_RPG_MyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define RPG_Source_RPG_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_MyPawn_h_9_PROLOG
#define RPG_Source_RPG_MyPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_MyPawn_h_12_SPARSE_DATA \
	RPG_Source_RPG_MyPawn_h_12_RPC_WRAPPERS \
	RPG_Source_RPG_MyPawn_h_12_INCLASS \
	RPG_Source_RPG_MyPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_MyPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_MyPawn_h_12_SPARSE_DATA \
	RPG_Source_RPG_MyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_MyPawn_h_12_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_MyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
