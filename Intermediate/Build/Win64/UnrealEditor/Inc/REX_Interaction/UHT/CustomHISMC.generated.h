// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomHISMC.h"

#ifdef REX_INTERACTION_CustomHISMC_generated_h
#error "CustomHISMC.generated.h already included, missing '#pragma once' in CustomHISMC.h"
#endif
#define REX_INTERACTION_CustomHISMC_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomHISMC *************************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInstanceCustomDataValue);


struct Z_Construct_UClass_UCustomHISMC_Statics;
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomHISMC(ETypeConstructPhase);

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCustomHISMC_Statics; \
	friend REX_INTERACTION_API UClass* ::Z_Construct_UClass_UCustomHISMC(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCustomHISMC, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/REX_Interaction"), Z_Construct_UClass_UCustomHISMC) \
	DECLARE_SERIALIZER(UCustomHISMC)


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomHISMC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomHISMC(UCustomHISMC&&) = delete; \
	UCustomHISMC(const UCustomHISMC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomHISMC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomHISMC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomHISMC) \
	NO_API virtual ~UCustomHISMC();


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_9_PROLOG
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomHISMC;

// ********** End Class UCustomHISMC ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
