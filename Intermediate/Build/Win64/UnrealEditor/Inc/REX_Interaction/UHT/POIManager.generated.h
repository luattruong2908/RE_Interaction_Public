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
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FLinearColor;
class APOIManager;
class UObject;
class UPrimitiveComponent;
struct FLinearColor;
struct FPOIHitResult;

// ********** Begin ScriptStruct FPOIBakeEntry *****************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPOIBakeEntry_Statics; \
	REX_INTERACTION_API static class UScriptStruct* StaticStruct();


struct FPOIBakeEntry;
// ********** End ScriptStruct FPOIBakeEntry *******************************************************

// ********** Begin ScriptStruct FPlaneMaterialSet *************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics; \
	REX_INTERACTION_API static class UScriptStruct* StaticStruct();


struct FPlaneMaterialSet;
// ********** End ScriptStruct FPlaneMaterialSet ***************************************************

// ********** Begin ScriptStruct FPOIHitResult *****************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPOIHitResult_Statics; \
	REX_INTERACTION_API static class UScriptStruct* StaticStruct();


struct FPOIHitResult;
// ********** End ScriptStruct FPOIHitResult *******************************************************

// ********** Begin ScriptStruct FPOIRuntimeInstance ***********************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics; \
	REX_INTERACTION_API static class UScriptStruct* StaticStruct();


struct FPOIRuntimeInstance;
// ********** End ScriptStruct FPOIRuntimeInstance *************************************************

// ********** Begin Class APOIManager **************************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execApplyVisibleSet); \
	DECLARE_FUNCTION(execDeleteSourcePOIs); \
	DECLARE_FUNCTION(execBakeFromLevel);


REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManager_NoRegister();

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPOIManager(); \
	friend struct Z_Construct_UClass_APOIManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManager_NoRegister(); \
public: \
	DECLARE_CLASS2(APOIManager, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/REX_Interaction"), Z_Construct_UClass_APOIManager_NoRegister) \
	DECLARE_SERIALIZER(APOIManager)


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_127_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APOIManager(APOIManager&&) = delete; \
	APOIManager(const APOIManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APOIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APOIManager); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APOIManager) \
	NO_API virtual ~APOIManager();


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_124_PROLOG
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_127_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APOIManager;

// ********** End Class APOIManager ****************************************************************

// ********** Begin Class APOIManagerRoom **********************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnTestPOIs);


REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerRoom_NoRegister();

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_335_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPOIManagerRoom(); \
	friend struct Z_Construct_UClass_APOIManagerRoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerRoom_NoRegister(); \
public: \
	DECLARE_CLASS2(APOIManagerRoom, APOIManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/REX_Interaction"), Z_Construct_UClass_APOIManagerRoom_NoRegister) \
	DECLARE_SERIALIZER(APOIManagerRoom)


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_335_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APOIManagerRoom(APOIManagerRoom&&) = delete; \
	APOIManagerRoom(const APOIManagerRoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APOIManagerRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APOIManagerRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APOIManagerRoom) \
	NO_API virtual ~APOIManagerRoom();


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_332_PROLOG
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_335_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_335_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_335_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APOIManagerRoom;

// ********** End Class APOIManagerRoom ************************************************************

// ********** Begin Class APOIManagerHouse *********************************************************
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_357_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnTestPOIs);


REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerHouse_NoRegister();

#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_357_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPOIManagerHouse(); \
	friend struct Z_Construct_UClass_APOIManagerHouse_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerHouse_NoRegister(); \
public: \
	DECLARE_CLASS2(APOIManagerHouse, APOIManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/REX_Interaction"), Z_Construct_UClass_APOIManagerHouse_NoRegister) \
	DECLARE_SERIALIZER(APOIManagerHouse)


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_357_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APOIManagerHouse(APOIManagerHouse&&) = delete; \
	APOIManagerHouse(const APOIManagerHouse&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APOIManagerHouse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APOIManagerHouse); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APOIManagerHouse) \
	NO_API virtual ~APOIManagerHouse();


#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_354_PROLOG
#define FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_357_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_357_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_357_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h_357_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APOIManagerHouse;

// ********** End Class APOIManagerHouse ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h

// ********** Begin Enum EPOIBakeScope *************************************************************
#define FOREACH_ENUM_EPOIBAKESCOPE(op) \
	op(EPOIBakeScope::PlaneAndHouse) \
	op(EPOIBakeScope::PlaneOnly) \
	op(EPOIBakeScope::HouseOnly) 

enum class EPOIBakeScope : uint8;
template<> struct TIsUEnumClass<EPOIBakeScope> { enum { Value = true }; };
template<> REX_INTERACTION_API UEnum* StaticEnum<EPOIBakeScope>();
// ********** End Enum EPOIBakeScope ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
