// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomISMC.h"

#ifdef REX_INTERACTION_CustomISMC_generated_h
#error "CustomISMC.generated.h already included, missing '#pragma once' in CustomISMC.h"
#endif
#define REX_INTERACTION_CustomISMC_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomISMC **************************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInstanceCustomDataValue);


struct Z_Construct_UClass_UCustomISMC_Statics;
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomISMC(ETypeConstructPhase);

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCustomISMC_Statics; \
	friend REX_INTERACTION_API UClass* ::Z_Construct_UClass_UCustomISMC(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCustomISMC, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/REX_Interaction"), Z_Construct_UClass_UCustomISMC) \
	DECLARE_SERIALIZER(UCustomISMC)


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomISMC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomISMC(UCustomISMC&&) = delete; \
	UCustomISMC(const UCustomISMC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomISMC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomISMC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomISMC) \
	NO_API virtual ~UCustomISMC();


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_9_PROLOG
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomISMC;

// ********** End Class UCustomISMC ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
