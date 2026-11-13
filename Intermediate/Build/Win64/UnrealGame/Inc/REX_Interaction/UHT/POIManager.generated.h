// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "POIManager.h"

#ifdef REX_INTERACTION_POIManager_generated_h
#error "POIManager.generated.h already included, missing '#pragma once' in POIManager.h"
#endif
#define REX_INTERACTION_POIManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APOIManager;
class UObject;
class UPrimitiveComponent;
struct FLinearColor;
struct FPOIHitResult;

// ********** Begin ScriptStruct FPOIBakeEntry *****************************************************
struct Z_Construct_UScriptStruct_FPOIBakeEntry_Statics;
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIBakeEntry(ETypeConstructPhase);

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPOIBakeEntry_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPOIBakeEntry(ETypeConstructPhase::Inner); }


struct FPOIBakeEntry;
// ********** End ScriptStruct FPOIBakeEntry *******************************************************

// ********** Begin ScriptStruct FPOIMaterialSet ***************************************************
struct Z_Construct_UScriptStruct_FPOIMaterialSet_Statics;
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIMaterialSet(ETypeConstructPhase);

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPOIMaterialSet_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPOIMaterialSet(ETypeConstructPhase::Inner); }


struct FPOIMaterialSet;
// ********** End ScriptStruct FPOIMaterialSet *****************************************************

// ********** Begin ScriptStruct FPOIHitResult *****************************************************
struct Z_Construct_UScriptStruct_FPOIHitResult_Statics;
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIHitResult(ETypeConstructPhase);

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPOIHitResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPOIHitResult(ETypeConstructPhase::Inner); }


struct FPOIHitResult;
// ********** End ScriptStruct FPOIHitResult *******************************************************

// ********** Begin ScriptStruct FPOIRuntimeInstance ***********************************************
struct Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics;
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIRuntimeInstance(ETypeConstructPhase);

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPOIRuntimeInstance(ETypeConstructPhase::Inner); }


struct FPOIRuntimeInstance;
// ********** End ScriptStruct FPOIRuntimeInstance *************************************************

// ********** Begin Class APOIManager **************************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectPOIByTrace); \
	DECLARE_FUNCTION(execGetPOICameraData); \
	DECLARE_FUNCTION(execResolveClick); \
	DECLARE_FUNCTION(execTraceForPOI); \
	DECLARE_FUNCTION(execSetSelectedPOI); \
	DECLARE_FUNCTION(execGetAllPOIIds); \
	DECLARE_FUNCTION(execApplyColorMap); \
	DECLARE_FUNCTION(execSetPOIColor); \
	DECLARE_FUNCTION(execHiddenAll); \
	DECLARE_FUNCTION(execShowAll); \
	DECLARE_FUNCTION(execApplyHiddenSet); \
	DECLARE_FUNCTION(execApplyVisibleSet);


#if WITH_EDITOR
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	DECLARE_FUNCTION(execSpawnTestPOIs); \
	DECLARE_FUNCTION(execDeleteSourcePOIs); \
	DECLARE_FUNCTION(execBakeFromLevel);
#else // WITH_EDITOR
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR
#endif


struct Z_Construct_UClass_APOIManager_Statics;
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManager(ETypeConstructPhase);

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_APOIManager_Statics; \
	friend REX_INTERACTION_API UClass* ::Z_Construct_UClass_APOIManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(APOIManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/REX_Interaction"), Z_Construct_UClass_APOIManager) \
	DECLARE_SERIALIZER(APOIManager)


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APOIManager(APOIManager&&) = delete; \
	APOIManager(const APOIManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APOIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APOIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APOIManager) \
	NO_API virtual ~APOIManager();


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_116_PROLOG
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APOIManager;

// ********** End Class APOIManager ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
