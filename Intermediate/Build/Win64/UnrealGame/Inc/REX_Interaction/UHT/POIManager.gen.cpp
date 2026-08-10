// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POIManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePOIManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManager();
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManager_NoRegister();
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerHouse();
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerHouse_NoRegister();
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerRoom();
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManagerRoom_NoRegister();
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomHISMC_NoRegister();
REX_INTERACTION_API UEnum* Z_Construct_UEnum_REX_Interaction_EPOIBakeScope();
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneMaterialSet();
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIBakeEntry();
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIHitResult();
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIRuntimeInstance();
UPackage* Z_Construct_UPackage__Script_REX_Interaction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPOIBakeScope *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPOIBakeScope;
static UEnum* EPOIBakeScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPOIBakeScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPOIBakeScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_REX_Interaction_EPOIBakeScope, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(), TEXT("EPOIBakeScope"));
	}
	return Z_Registration_Info_UEnum_EPOIBakeScope.OuterSingleton;
}
template<> REX_INTERACTION_API UEnum* StaticEnum<EPOIBakeScope>()
{
	return EPOIBakeScope_StaticEnum();
}
struct Z_Construct_UEnum_REX_Interaction_EPOIBakeScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Which POI kind a manager bakes/deletes. Lets two managers coexist in one level\n// (one PlaneOnly for rooms, one HouseOnly for houses) without touching each other's actors.\n" },
		{ "HouseOnly.DisplayName", "House Only" },
		{ "HouseOnly.Name", "EPOIBakeScope::HouseOnly" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "PlaneAndHouse.DisplayName", "Plane + House" },
		{ "PlaneAndHouse.Name", "EPOIBakeScope::PlaneAndHouse" },
		{ "PlaneOnly.DisplayName", "Plane Only" },
		{ "PlaneOnly.Name", "EPOIBakeScope::PlaneOnly" },
		{ "ToolTip", "Which POI kind a manager bakes/deletes. Lets two managers coexist in one level\n(one PlaneOnly for rooms, one HouseOnly for houses) without touching each other's actors." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPOIBakeScope::PlaneAndHouse", (int64)EPOIBakeScope::PlaneAndHouse },
		{ "EPOIBakeScope::PlaneOnly", (int64)EPOIBakeScope::PlaneOnly },
		{ "EPOIBakeScope::HouseOnly", (int64)EPOIBakeScope::HouseOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_REX_Interaction_EPOIBakeScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	"EPOIBakeScope",
	"EPOIBakeScope",
	Z_Construct_UEnum_REX_Interaction_EPOIBakeScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_REX_Interaction_EPOIBakeScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_REX_Interaction_EPOIBakeScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_REX_Interaction_EPOIBakeScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_REX_Interaction_EPOIBakeScope()
{
	if (!Z_Registration_Info_UEnum_EPOIBakeScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPOIBakeScope.InnerSingleton, Z_Construct_UEnum_REX_Interaction_EPOIBakeScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPOIBakeScope.InnerSingleton;
}
// ********** End Enum EPOIBakeScope ***************************************************************

// ********** Begin ScriptStruct FPOIBakeEntry *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPOIBakeEntry;
class UScriptStruct* FPOIBakeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPOIBakeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPOIBakeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIBakeEntry, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(), TEXT("POIBakeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FPOIBakeEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPOIBakeEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// One baked POI. BakedEntries is the serialized source of truth; the HISMs are\n// Transient and rebuilt from it on every load (see RebuildHISMs).\n// Do NOT rename fields -- that breaks data already baked into maps.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "One baked POI. BakedEntries is the serialized source of truth; the HISMs are\nTransient and rebuilt from it on every load (see RebuildHISMs).\nDo NOT rename fields -- that breaks data already baked into maps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Key into the POI DataTable (read from the source actor via reflection).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Key into the POI DataTable (read from the source actor via reflection)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Display mesh: the Plane of BP_POI_Room, or the Cube itself for BP_POI_House.\n// Also the grouping key -- one display HISM per distinct mesh.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Display mesh: the Plane of BP_POI_Room, or the Cube itself for BP_POI_House.\nAlso the grouping key -- one display HISM per distinct mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransform_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// World transform of the display mesh.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "World transform of the display mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeTransform_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// World transform of the click volume.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "World transform of the click volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraYaw_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Camera spring arm settings captured from the source POI at bake time.\n// The pawn reads these when the player clicks a POI and applies them to its own spring arm.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Camera spring arm settings captured from the source POI at bake time.\nThe pawn reads these when the player clicks a POI and applies them to its own spring arm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitch_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraArmLength_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubeTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraArmLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIBakeEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_PlaneMesh = { "PlaneMesh", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, PlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMesh_MetaData), NewProp_PlaneMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_PlaneTransform = { "PlaneTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, PlaneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneTransform_MetaData), NewProp_PlaneTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CubeTransform = { "CubeTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, CubeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeTransform_MetaData), NewProp_CubeTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CameraYaw = { "CameraYaw", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, CameraYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraYaw_MetaData), NewProp_CameraYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, CameraPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPitch_MetaData), NewProp_CameraPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CameraArmLength = { "CameraArmLength", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, CameraArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArmLength_MetaData), NewProp_CameraArmLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_PlaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_PlaneTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CubeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CameraYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewProp_CameraArmLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"POIBakeEntry",
	Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::PropPointers),
	sizeof(FPOIBakeEntry),
	alignof(FPOIBakeEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPOIBakeEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FPOIBakeEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPOIBakeEntry.InnerSingleton, Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPOIBakeEntry.InnerSingleton;
}
// ********** End ScriptStruct FPOIBakeEntry *******************************************************

// ********** Begin ScriptStruct FPlaneMaterialSet *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlaneMaterialSet;
class UScriptStruct* FPlaneMaterialSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlaneMaterialSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlaneMaterialSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneMaterialSet, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(), TEXT("PlaneMaterialSet"));
	}
	return Z_Registration_Info_UScriptStruct_FPlaneMaterialSet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Per-slot materials of one plane mesh kind, captured at bake time. Only true\n// overrides are stored; null = inherit the mesh's own material.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Per-slot materials of one plane mesh kind, captured at bake time. Only true\noverrides are stored; null = inherit the mesh's own material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneMaterialSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneMaterialSet, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"PlaneMaterialSet",
	Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::PropPointers),
	sizeof(FPlaneMaterialSet),
	alignof(FPlaneMaterialSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaneMaterialSet()
{
	if (!Z_Registration_Info_UScriptStruct_FPlaneMaterialSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlaneMaterialSet.InnerSingleton, Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlaneMaterialSet.InnerSingleton;
}
// ********** End ScriptStruct FPlaneMaterialSet ***************************************************

// ********** Begin ScriptStruct FPOIHitResult *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPOIHitResult;
class UScriptStruct* FPOIHitResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPOIHitResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPOIHitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIHitResult, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(), TEXT("POIHitResult"));
	}
	return Z_Registration_Info_UScriptStruct_FPOIHitResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPOIHitResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Result of a POI click: camera settings for the pawn's spring arm.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Result of a POI click: camera settings for the pawn's spring arm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Baked spring arm angle in the POI's local frame (Roll is always 0).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Baked spring arm angle in the POI's local frame (Roll is always 0)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraArmLength_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POILocation_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// World location of the hit POI's display marker (zero on a missed trace).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "World location of the hit POI's display marker (zero on a missed trace)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraArmLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIHitResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIHitResult, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotation_MetaData), NewProp_CameraRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewProp_CameraArmLength = { "CameraArmLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIHitResult, CameraArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArmLength_MetaData), NewProp_CameraArmLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewProp_POILocation = { "POILocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIHitResult, POILocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POILocation_MetaData), NewProp_POILocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPOIHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewProp_CameraRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewProp_CameraArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewProp_POILocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPOIHitResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"POIHitResult",
	Z_Construct_UScriptStruct_FPOIHitResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIHitResult_Statics::PropPointers),
	sizeof(FPOIHitResult),
	alignof(FPOIHitResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIHitResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPOIHitResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPOIHitResult()
{
	if (!Z_Registration_Info_UScriptStruct_FPOIHitResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPOIHitResult.InnerSingleton, Z_Construct_UScriptStruct_FPOIHitResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPOIHitResult.InnerSingleton;
}
// ********** End ScriptStruct FPOIHitResult *******************************************************

// ********** Begin ScriptStruct FPOIRuntimeInstance ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance;
class UScriptStruct* FPOIRuntimeInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIRuntimeInstance, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(), TEXT("POIRuntimeInstance"));
	}
	return Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Runtime data of one POI, indexed by cube instance index.\n// Transient -- rebuilt from BakedEntries on load.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Runtime data of one POI, indexed by cube instance index.\nTransient -- rebuilt from BakedEntries on load." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneHISMIndex_MetaData[] = {
		{ "Comment", "// Index into PlaneHISMs (INDEX_NONE if this POI has no display mesh).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Index into PlaneHISMs (INDEX_NONE if this POI has no display mesh)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneInstanceIndex_MetaData[] = {
		{ "Comment", "// Instance index inside that plane HISM.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Instance index inside that plane HISM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Comment", "// Cached show/hide state, used to skip hidden POIs on click.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Cached show/hide state, used to skip hidden POIs on click." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Comment", "// Display marker world location (copied from the baked transform at rebuild time).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Display marker world location (copied from the baked transform at rebuild time)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraYaw_MetaData[] = {
		{ "Comment", "// Camera spring arm data (copied from BakedEntries at rebuild time).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Camera spring arm data (copied from BakedEntries at rebuild time)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraArmLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaneHISMIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaneInstanceIndex;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraArmLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIRuntimeInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_PlaneHISMIndex = { "PlaneHISMIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, PlaneHISMIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneHISMIndex_MetaData), NewProp_PlaneHISMIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_PlaneInstanceIndex = { "PlaneInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, PlaneInstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneInstanceIndex_MetaData), NewProp_PlaneInstanceIndex_MetaData) };
void Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FPOIRuntimeInstance*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPOIRuntimeInstance), &Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_CameraYaw = { "CameraYaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, CameraYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraYaw_MetaData), NewProp_CameraYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, CameraPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPitch_MetaData), NewProp_CameraPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_CameraArmLength = { "CameraArmLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, CameraArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArmLength_MetaData), NewProp_CameraArmLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_PlaneHISMIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_PlaneInstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_CameraYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_CameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewProp_CameraArmLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"POIRuntimeInstance",
	Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::PropPointers),
	sizeof(FPOIRuntimeInstance),
	alignof(FPOIRuntimeInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPOIRuntimeInstance()
{
	if (!Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.InnerSingleton, Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.InnerSingleton;
}
// ********** End ScriptStruct FPOIRuntimeInstance *************************************************

// ********** Begin Class APOIManager Function ApplyColorMap ***************************************
struct Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics
{
	struct POIManager_eventApplyColorMap_Parms
	{
		TMap<FString,FLinearColor> Colors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Bulk recolor from a POI_ID -> color map. Call once at BeginPlay after reading\n// the DataTable. Render state is dirtied once per HISM.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Bulk recolor from a POI_ID -> color map. Call once at BeginPlay after reading\nthe DataTable. Render state is dirtied once per HISM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Colors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::NewProp_Colors_ValueProp = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::NewProp_Colors_Key_KeyProp = { "Colors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventApplyColorMap_Parms, Colors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::NewProp_Colors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::NewProp_Colors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::NewProp_Colors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "ApplyColorMap", Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::POIManager_eventApplyColorMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::POIManager_eventApplyColorMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ApplyColorMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execApplyColorMap)
{
	P_GET_TMAP_REF(FString,FLinearColor,Z_Param_Out_Colors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyColorMap(Z_Param_Out_Colors);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function ApplyColorMap *****************************************

// ********** Begin Class APOIManager Function ApplyHiddenSet **************************************
struct Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics
{
	struct POIManager_eventApplyHiddenSet_Parms
	{
		TSet<FString> HiddenIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Inverse filter: POIs whose ID is in HiddenIds are hidden, the rest shown.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Inverse filter: POIs whose ID is in HiddenIds are hidden, the rest shown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HiddenIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HiddenIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::NewProp_HiddenIds_ElementProp = { "HiddenIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::NewProp_HiddenIds = { "HiddenIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventApplyHiddenSet_Parms, HiddenIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenIds_MetaData), NewProp_HiddenIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::NewProp_HiddenIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::NewProp_HiddenIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "ApplyHiddenSet", Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::POIManager_eventApplyHiddenSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::POIManager_eventApplyHiddenSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ApplyHiddenSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execApplyHiddenSet)
{
	P_GET_TSET_REF(FString,Z_Param_Out_HiddenIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHiddenSet(Z_Param_Out_HiddenIds);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function ApplyHiddenSet ****************************************

// ********** Begin Class APOIManager Function ApplyVisibleSet *************************************
struct Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics
{
	struct POIManager_eventApplyVisibleSet_Parms
	{
		TSet<FString> VisibleIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Filter: only POIs whose ID is in VisibleIds are shown.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Filter: only POIs whose ID is in VisibleIds are shown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VisibleIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_VisibleIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::NewProp_VisibleIds_ElementProp = { "VisibleIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::NewProp_VisibleIds = { "VisibleIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventApplyVisibleSet_Parms, VisibleIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleIds_MetaData), NewProp_VisibleIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::NewProp_VisibleIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::NewProp_VisibleIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "ApplyVisibleSet", Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::POIManager_eventApplyVisibleSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::POIManager_eventApplyVisibleSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ApplyVisibleSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execApplyVisibleSet)
{
	P_GET_TSET_REF(FString,Z_Param_Out_VisibleIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyVisibleSet(Z_Param_Out_VisibleIds);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function ApplyVisibleSet ***************************************

// ********** Begin Class APOIManager Function BakeFromLevel ***************************************
struct Z_Construct_UFunction_APOIManager_BakeFromLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "POI" },
		{ "Comment", "// Scans the level for source POI actors (per BakeScope), fills BakedEntries,\n// rebuilds the HISMs. Idempotent -- re-running re-bakes from scratch.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Scans the level for source POI actors (per BakeScope), fills BakedEntries,\nrebuilds the HISMs. Idempotent -- re-running re-bakes from scratch." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_BakeFromLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "BakeFromLevel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_BakeFromLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_BakeFromLevel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APOIManager_BakeFromLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_BakeFromLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execBakeFromLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BakeFromLevel();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function BakeFromLevel *****************************************

// ********** Begin Class APOIManager Function DeleteSourcePOIs ************************************
struct Z_Construct_UFunction_APOIManager_DeleteSourcePOIs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "POI" },
		{ "Comment", "// Destroys the source POI actors in this manager's scope. Run AFTER baking.\n// Not undoable -- if pressed by mistake, do not save the map.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Destroys the source POI actors in this manager's scope. Run AFTER baking.\nNot undoable -- if pressed by mistake, do not save the map." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_DeleteSourcePOIs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "DeleteSourcePOIs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_DeleteSourcePOIs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_DeleteSourcePOIs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APOIManager_DeleteSourcePOIs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_DeleteSourcePOIs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execDeleteSourcePOIs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSourcePOIs();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function DeleteSourcePOIs **************************************

// ********** Begin Class APOIManager Function GetAllPOIIds ****************************************
struct Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics
{
	struct POIManager_eventGetAllPOIIds_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Every baked POI_ID, deduplicated, in bake order. Use to drive UI lists or\n// validate the DataTable against what was actually baked.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Every baked POI_ID, deduplicated, in bake order. Use to drive UI lists or\nvalidate the DataTable against what was actually baked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetAllPOIIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "GetAllPOIIds", Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::POIManager_eventGetAllPOIIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::POIManager_eventGetAllPOIIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_GetAllPOIIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execGetAllPOIIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllPOIIds();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function GetAllPOIIds ******************************************

// ********** Begin Class APOIManager Function GetPOICameraData ************************************
struct Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics
{
	struct POIManager_eventGetPOICameraData_Parms
	{
		FString POI_ID;
		float OutYaw;
		float OutPitch;
		float OutArmLength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Looks up camera data for a POI by ID. Returns false if the ID is not found.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Looks up camera data for a POI by ID. Returns false if the ID is not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutArmLength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_OutYaw = { "OutYaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, OutYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_OutPitch = { "OutPitch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, OutPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_OutArmLength = { "OutArmLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, OutArmLength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((POIManager_eventGetPOICameraData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(POIManager_eventGetPOICameraData_Parms), &Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_OutYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_OutPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_OutArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "GetPOICameraData", Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::POIManager_eventGetPOICameraData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::POIManager_eventGetPOICameraData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_GetPOICameraData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execGetPOICameraData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_POI_ID);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutYaw);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPitch);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutArmLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPOICameraData(Z_Param_POI_ID,Z_Param_Out_OutYaw,Z_Param_Out_OutPitch,Z_Param_Out_OutArmLength);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function GetPOICameraData **************************************

// ********** Begin Class APOIManager Function HiddenAll *******************************************
struct Z_Construct_UFunction_APOIManager_HiddenAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_HiddenAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "HiddenAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_HiddenAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_HiddenAll_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APOIManager_HiddenAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_HiddenAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execHiddenAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HiddenAll();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function HiddenAll *********************************************

// ********** Begin Class APOIManager Function ResolveClick ****************************************
struct Z_Construct_UFunction_APOIManager_ResolveClick_Statics
{
	struct POIManager_eventResolveClick_Parms
	{
		UPrimitiveComponent* HitComp;
		int32 InstanceIndex;
		FString OutPOI_ID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Maps an existing hit (component + instance index) to a POI_ID. False if the hit\n// is not on this manager's HISMs or the instance is hidden.\n// Prefer TraceForPOI/SelectPOIByTrace for clicks.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Maps an existing hit (component + instance index) to a POI_ID. False if the hit\nis not on this manager's HISMs or the instance is hidden.\nPrefer TraceForPOI/SelectPOIByTrace for clicks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPOI_ID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventResolveClick_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventResolveClick_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_OutPOI_ID = { "OutPOI_ID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventResolveClick_Parms, OutPOI_ID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((POIManager_eventResolveClick_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(POIManager_eventResolveClick_Parms), &Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_ResolveClick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_OutPOI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_ResolveClick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ResolveClick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_ResolveClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "ResolveClick", Z_Construct_UFunction_APOIManager_ResolveClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ResolveClick_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_ResolveClick_Statics::POIManager_eventResolveClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ResolveClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_ResolveClick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_ResolveClick_Statics::POIManager_eventResolveClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ResolveClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_ResolveClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execResolveClick)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPOI_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResolveClick(Z_Param_HitComp,Z_Param_InstanceIndex,Z_Param_Out_OutPOI_ID);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function ResolveClick ******************************************

// ********** Begin Class APOIManager Function SelectPOIByTrace ************************************
struct Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics
{
	struct POIManager_eventSelectPOIByTrace_Parms
	{
		const UObject* WorldContextObject;
		FVector Start;
		FVector End;
		FString OutPOI_ID;
		FPOIHitResult OutCameraSpecs;
		APOIManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// THE click entry point when multiple managers exist: one trace, scans ALL\n// managers in the world, selects the nearest visible POI and deselects everywhere\n// else (only one POI highlighted at a time). A click that hits nothing clears only\n// the managers with bDeselectOnMissedClick set. Returns the hit manager (null =\n// missed click) and its POI_ID + camera data in OutCameraSpecs. Blueprint only needs\n// this single node.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "THE click entry point when multiple managers exist: one trace, scans ALL\nmanagers in the world, selects the nearest visible POI and deselects everywhere\nelse (only one POI highlighted at a time). A click that hits nothing clears only\nthe managers with bDeselectOnMissedClick set. Returns the hit manager (null =\nmissed click) and its POI_ID + camera data in OutCameraSpecs. Blueprint only needs\nthis single node." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPOI_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCameraSpecs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_OutPOI_ID = { "OutPOI_ID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, OutPOI_ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_OutCameraSpecs = { "OutCameraSpecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, OutCameraSpecs), Z_Construct_UScriptStruct_FPOIHitResult, METADATA_PARAMS(0, nullptr) }; // 782158828
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, ReturnValue), Z_Construct_UClass_APOIManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_OutPOI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_OutCameraSpecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "SelectPOIByTrace", Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::POIManager_eventSelectPOIByTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::POIManager_eventSelectPOIByTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_SelectPOIByTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execSelectPOIByTrace)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPOI_ID);
	P_GET_STRUCT_REF(FPOIHitResult,Z_Param_Out_OutCameraSpecs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APOIManager**)Z_Param__Result=APOIManager::SelectPOIByTrace(Z_Param_WorldContextObject,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_OutPOI_ID,Z_Param_Out_OutCameraSpecs);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function SelectPOIByTrace **************************************

// ********** Begin Class APOIManager Function SetPOIColor *****************************************
struct Z_Construct_UFunction_APOIManager_SetPOIColor_Statics
{
	struct POIManager_eventSetPOIColor_Parms
	{
		FString POI_ID;
		FLinearColor Color;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Writes RGB into custom data slots 1..3 of every instance with this ID.\n// Returns the number of instances recolored.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Writes RGB into custom data slots 1..3 of every instance with this ID.\nReturns the number of instances recolored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetPOIColor_Parms, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetPOIColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetPOIColor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "SetPOIColor", Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::POIManager_eventSetPOIColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::POIManager_eventSetPOIColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_SetPOIColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_SetPOIColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execSetPOIColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_POI_ID);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetPOIColor(Z_Param_POI_ID,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function SetPOIColor *******************************************

// ********** Begin Class APOIManager Function SetSelectedPOI **************************************
struct Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics
{
	struct POIManager_eventSetSelectedPOI_Parms
	{
		FString POI_ID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Marks one POI selected (slot SelectedDataIndex = 1 + timestamp in\n// SelectTimeDataIndex) and deselects the previous one. Re-selecting the same POI\n// restamps the time so the material pulse plays again. Empty string = deselect all.\n// Returns the number of instances that changed state.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Marks one POI selected (slot SelectedDataIndex = 1 + timestamp in\nSelectTimeDataIndex) and deselects the previous one. Re-selecting the same POI\nrestamps the time so the material pulse plays again. Empty string = deselect all.\nReturns the number of instances that changed state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetSelectedPOI_Parms, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetSelectedPOI_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "SetSelectedPOI", Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::POIManager_eventSetSelectedPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::POIManager_eventSetSelectedPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_SetSelectedPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execSetSelectedPOI)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_POI_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetSelectedPOI(Z_Param_POI_ID);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function SetSelectedPOI ****************************************

// ********** Begin Class APOIManager Function ShowAll *********************************************
struct Z_Construct_UFunction_APOIManager_ShowAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_ShowAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "ShowAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_ShowAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_ShowAll_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APOIManager_ShowAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_ShowAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execShowAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAll();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function ShowAll ***********************************************

// ********** Begin Class APOIManager Function TraceForPOI *****************************************
struct Z_Construct_UFunction_APOIManager_TraceForPOI_Statics
{
	struct POIManager_eventTraceForPOI_Parms
	{
		FVector Start;
		FVector End;
		FString OutPOI_ID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "POI" },
		{ "Comment", "// Multi line trace Start->End that skips hidden POIs (cubes Overlap, so the ray\n// passes through them) and returns the POI_ID of the nearest VISIBLE one.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Multi line trace Start->End that skips hidden POIs (cubes Overlap, so the ray\npasses through them) and returns the POI_ID of the nearest VISIBLE one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPOI_ID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventTraceForPOI_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventTraceForPOI_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_OutPOI_ID = { "OutPOI_ID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventTraceForPOI_Parms, OutPOI_ID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((POIManager_eventTraceForPOI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(POIManager_eventTraceForPOI_Parms), &Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_OutPOI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManager, nullptr, "TraceForPOI", Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::PropPointers), sizeof(Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::POIManager_eventTraceForPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::POIManager_eventTraceForPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_TraceForPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManager_TraceForPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManager::execTraceForPOI)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPOI_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TraceForPOI(Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_OutPOI_ID);
	P_NATIVE_END;
}
// ********** End Class APOIManager Function TraceForPOI *******************************************

// ********** Begin Class APOIManager **************************************************************
void APOIManager::StaticRegisterNativesAPOIManager()
{
	UClass* Class = APOIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyColorMap", &APOIManager::execApplyColorMap },
		{ "ApplyHiddenSet", &APOIManager::execApplyHiddenSet },
		{ "ApplyVisibleSet", &APOIManager::execApplyVisibleSet },
		{ "BakeFromLevel", &APOIManager::execBakeFromLevel },
		{ "DeleteSourcePOIs", &APOIManager::execDeleteSourcePOIs },
		{ "GetAllPOIIds", &APOIManager::execGetAllPOIIds },
		{ "GetPOICameraData", &APOIManager::execGetPOICameraData },
		{ "HiddenAll", &APOIManager::execHiddenAll },
		{ "ResolveClick", &APOIManager::execResolveClick },
		{ "SelectPOIByTrace", &APOIManager::execSelectPOIByTrace },
		{ "SetPOIColor", &APOIManager::execSetPOIColor },
		{ "SetSelectedPOI", &APOIManager::execSetSelectedPOI },
		{ "ShowAll", &APOIManager::execShowAll },
		{ "TraceForPOI", &APOIManager::execTraceForPOI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APOIManager;
UClass* APOIManager::GetPrivateStaticClass()
{
	using TClass = APOIManager;
	if (!Z_Registration_Info_UClass_APOIManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("POIManager"),
			Z_Registration_Info_UClass_APOIManager.InnerSingleton,
			StaticRegisterNativesAPOIManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APOIManager.InnerSingleton;
}
UClass* Z_Construct_UClass_APOIManager_NoRegister()
{
	return APOIManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APOIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Base POI manager (Abstract -- place the subclasses below instead).\n// Bakes hundreds/thousands of source POI actors into a few HISMs: one shared\n// invisible cube HISM for clicks + one display HISM per distinct mesh. All visual\n// state (show/hide, color, selection) is per-instance custom data read by the\n// material on the GPU -- no per-frame CPU work, no per-instance SetVisibility.\n" },
		{ "IncludePath", "POIManager.h" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Base POI manager (Abstract -- place the subclasses below instead).\nBakes hundreds/thousands of source POI actors into a few HISMs: one shared\ninvisible cube HISM for clicks + one display HISM per distinct mesh. All visual\nstate (show/hide, color, selection) is per-instance custom data read by the\nmaterial on the GPU -- no per-frame CPU work, no per-instance SetVisibility." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Comment", "// ---- Serialized state (saved with the map) ----\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "---- Serialized state (saved with the map) ----" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedEntries_MetaData[] = {
		{ "Category", "POI|Debug" },
		{ "Comment", "// Read-only view of the baked data for debugging. Never hand-edit -- the HISMs\n// are rebuilt from this array and would go out of sync.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Read-only view of the baked data for debugging. Never hand-edit -- the HISMs\nare rebuilt from this array and would go out of sync." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Mesh for the shared click-cube HISM (taken from the first baked POI when unset).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Mesh for the shared click-cube HISM (taken from the first baked POI when unset)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMaterialsByMesh_MetaData[] = {
		{ "Comment", "// Materials captured from the source display components at bake time, per mesh kind.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Materials captured from the source display components at bake time, per mesh kind." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeScope_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIClassRef_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Source actor classes. Soft refs: editor dropdown + they follow redirectors if\n// the asset is moved/renamed.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Source actor classes. Soft refs: editor dropdown + they follow redirectors if\nthe asset is moved/renamed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIHouseClassRef_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITraceChannel_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Trace channel for POI clicks. Cubes respond Overlap (NOT Block) so a multi\n// trace passes through hidden POIs to visible ones behind them. Default is the\n// dedicated \"POITrace\" channel (ECC_GameTraceChannel1, declared in\n// DefaultEngine.ini with DefaultResponse=Ignore so walls/floors never block the\n// ray). Do NOT use ECC_Visibility -- environment geometry blocks that channel.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Trace channel for POI clicks. Cubes respond Overlap (NOT Block) so a multi\ntrace passes through hidden POIs to visible ones behind them. Default is the\ndedicated \"POITrace\" channel (ECC_GameTraceChannel1, declared in\nDefaultEngine.ini with DefaultResponse=Ignore so walls/floors never block the\nray). Do NOT use ECC_Visibility -- environment geometry blocks that channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeselectOnMissedClick_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Should a click that hits no POI clear this manager's selection? Off by default:\n// clicking empty space keeps the current POI highlighted, only clicking ANOTHER\n// POI moves the selection. Checked per manager, so each can decide on its own.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Should a click that hits no POI clear this manager's selection? Off by default:\nclicking empty space keeps the current POI highlighted, only clicking ANOTHER\nPOI moves the selection. Checked per manager, so each can decide on its own." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomDataFloats_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Custom data floats per instance. Slot layout (the material must read these):\n//   0      Visible (1/0) -> Opacity Mask         (the only hide mechanism)\n//   1..3   RGB color (default white)\n//   4      Selected (1/0) -> brighter emissive\n//   5      SelectTime (world seconds at selection; material runs a decaying\n//          envelope on Time - slot5 for a one-shot pulse)\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Custom data floats per instance. Slot layout (the material must read these):\n  0      Visible (1/0) -> Opacity Mask         (the only hide mechanism)\n  1..3   RGB color (default white)\n  4      Selected (1/0) -> brighter emissive\n  5      SelectTime (world seconds at selection; material runs a decaying\n         envelope on Time - slot5 for a one-shot pulse)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedDataIndex_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectTimeDataIndex_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestSpawnCount_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "Comment", "// ---- Test spawning (shared by the Room/House \"Spawn Test POIs\" buttons; test-only) ----\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "---- Test spawning (shared by the Room/House \"Spawn Test POIs\" buttons; test-only) ----" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGridColumns_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "Comment", "// POIs per row (X axis).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "POIs per row (X axis)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGridRows_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "Comment", "// Rows per floor (Y axis).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Rows per floor (Y axis)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGridSpacing_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "Comment", "// Spacing in cm: X = column, Y = row, Z = floor height.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Spacing in cm: X = column, Y = row, Z = floor height." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeHISM_MetaData[] = {
		{ "Comment", "// ---- Transient: rebuilt from BakedEntries on every load ----\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "---- Transient: rebuilt from BakedEntries on every load ----" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneHISMs_MetaData[] = {
		{ "Comment", "// Parallel arrays: PlaneHISMs[i] renders instances of PlaneMeshKeys[i].\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Parallel arrays: PlaneHISMs[i] renders instances of PlaneMeshKeys[i]." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMeshKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIInstances_MetaData[] = {
		{ "Comment", "// One entry per cube instance, same order as CubeHISM's instances.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "One entry per cube instance, same order as CubeHISM's instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPOI_ID_MetaData[] = {
		{ "Comment", "// Currently selected POI_ID (empty = none). Transient: fresh instances default\n// to Selected = 0, so the selection resets with the HISMs.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Currently selected POI_ID (empty = none). Transient: fresh instances default\nto Selected = 0, so the selection resets with the HISMs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedEntries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneMaterialsByMesh_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMaterialsByMesh_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlaneMaterialsByMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeScope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeScope;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_POIClassRef;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_POIHouseClassRef;
	static const UECodeGen_Private::FBytePropertyParams NewProp_POITraceChannel;
	static void NewProp_bDeselectOnMissedClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeselectOnMissedClick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomDataFloats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedDataIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectTimeDataIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestSpawnCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestGridColumns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestGridRows;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestGridSpacing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeHISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneHISMs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneHISMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMeshKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneMeshKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POIInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_POIInstances;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedPOI_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APOIManager_ApplyColorMap, "ApplyColorMap" }, // 768572453
		{ &Z_Construct_UFunction_APOIManager_ApplyHiddenSet, "ApplyHiddenSet" }, // 2156770148
		{ &Z_Construct_UFunction_APOIManager_ApplyVisibleSet, "ApplyVisibleSet" }, // 2630788274
		{ &Z_Construct_UFunction_APOIManager_BakeFromLevel, "BakeFromLevel" }, // 3345156189
		{ &Z_Construct_UFunction_APOIManager_DeleteSourcePOIs, "DeleteSourcePOIs" }, // 3163186824
		{ &Z_Construct_UFunction_APOIManager_GetAllPOIIds, "GetAllPOIIds" }, // 596614092
		{ &Z_Construct_UFunction_APOIManager_GetPOICameraData, "GetPOICameraData" }, // 1743225184
		{ &Z_Construct_UFunction_APOIManager_HiddenAll, "HiddenAll" }, // 1586704880
		{ &Z_Construct_UFunction_APOIManager_ResolveClick, "ResolveClick" }, // 2093951430
		{ &Z_Construct_UFunction_APOIManager_SelectPOIByTrace, "SelectPOIByTrace" }, // 2406970661
		{ &Z_Construct_UFunction_APOIManager_SetPOIColor, "SetPOIColor" }, // 3121308829
		{ &Z_Construct_UFunction_APOIManager_SetSelectedPOI, "SetSelectedPOI" }, // 927463309
		{ &Z_Construct_UFunction_APOIManager_ShowAll, "ShowAll" }, // 912448625
		{ &Z_Construct_UFunction_APOIManager_TraceForPOI, "TraceForPOI" }, // 2314854163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APOIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_BakedEntries_Inner = { "BakedEntries", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPOIBakeEntry, METADATA_PARAMS(0, nullptr) }; // 1252695288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_BakedEntries = { "BakedEntries", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, BakedEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedEntries_MetaData), NewProp_BakedEntries_MetaData) }; // 1252695288
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, CubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMaterialsByMesh_ValueProp = { "PlaneMaterialsByMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlaneMaterialSet, METADATA_PARAMS(0, nullptr) }; // 1406982917
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMaterialsByMesh_Key_KeyProp = { "PlaneMaterialsByMesh_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMaterialsByMesh = { "PlaneMaterialsByMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, PlaneMaterialsByMesh), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMaterialsByMesh_MetaData), NewProp_PlaneMaterialsByMesh_MetaData) }; // 1406982917
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_BakeScope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_BakeScope = { "BakeScope", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, BakeScope), Z_Construct_UEnum_REX_Interaction_EPOIBakeScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeScope_MetaData), NewProp_BakeScope_MetaData) }; // 3705232220
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_POIClassRef = { "POIClassRef", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, POIClassRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIClassRef_MetaData), NewProp_POIClassRef_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_POIHouseClassRef = { "POIHouseClassRef", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, POIHouseClassRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIHouseClassRef_MetaData), NewProp_POIHouseClassRef_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_POITraceChannel = { "POITraceChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, POITraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITraceChannel_MetaData), NewProp_POITraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_APOIManager_Statics::NewProp_bDeselectOnMissedClick_SetBit(void* Obj)
{
	((APOIManager*)Obj)->bDeselectOnMissedClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_bDeselectOnMissedClick = { "bDeselectOnMissedClick", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APOIManager), &Z_Construct_UClass_APOIManager_Statics::NewProp_bDeselectOnMissedClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeselectOnMissedClick_MetaData), NewProp_bDeselectOnMissedClick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_NumCustomDataFloats = { "NumCustomDataFloats", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, NumCustomDataFloats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCustomDataFloats_MetaData), NewProp_NumCustomDataFloats_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_SelectedDataIndex = { "SelectedDataIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SelectedDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedDataIndex_MetaData), NewProp_SelectedDataIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_SelectTimeDataIndex = { "SelectTimeDataIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SelectTimeDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectTimeDataIndex_MetaData), NewProp_SelectTimeDataIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_TestSpawnCount = { "TestSpawnCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestSpawnCount_MetaData), NewProp_TestSpawnCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_TestGridColumns = { "TestGridColumns", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestGridColumns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGridColumns_MetaData), NewProp_TestGridColumns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_TestGridRows = { "TestGridRows", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestGridRows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGridRows_MetaData), NewProp_TestGridRows_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_TestGridSpacing = { "TestGridSpacing", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestGridSpacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGridSpacing_MetaData), NewProp_TestGridSpacing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_CubeHISM = { "CubeHISM", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, CubeHISM), Z_Construct_UClass_UCustomHISMC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeHISM_MetaData), NewProp_CubeHISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneHISMs_Inner = { "PlaneHISMs", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomHISMC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneHISMs = { "PlaneHISMs", nullptr, (EPropertyFlags)0x0124088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, PlaneHISMs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneHISMs_MetaData), NewProp_PlaneHISMs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMeshKeys_Inner = { "PlaneMeshKeys", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMeshKeys = { "PlaneMeshKeys", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, PlaneMeshKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMeshKeys_MetaData), NewProp_PlaneMeshKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_POIInstances_Inner = { "POIInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPOIRuntimeInstance, METADATA_PARAMS(0, nullptr) }; // 1333720892
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_POIInstances = { "POIInstances", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, POIInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIInstances_MetaData), NewProp_POIInstances_MetaData) }; // 1333720892
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APOIManager_Statics::NewProp_SelectedPOI_ID = { "SelectedPOI_ID", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SelectedPOI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPOI_ID_MetaData), NewProp_SelectedPOI_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APOIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_BakedEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_BakedEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMaterialsByMesh_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMaterialsByMesh_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMaterialsByMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_BakeScope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_BakeScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_POIClassRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_POIHouseClassRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_POITraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_bDeselectOnMissedClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_NumCustomDataFloats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_SelectedDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_SelectTimeDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_TestSpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_TestGridColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_TestGridRows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_TestGridSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_CubeHISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneHISMs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneHISMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMeshKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_PlaneMeshKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_POIInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_POIInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManager_Statics::NewProp_SelectedPOI_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APOIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APOIManager_Statics::ClassParams = {
	&APOIManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APOIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APOIManager_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APOIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APOIManager()
{
	if (!Z_Registration_Info_UClass_APOIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APOIManager.OuterSingleton, Z_Construct_UClass_APOIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APOIManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APOIManager);
APOIManager::~APOIManager() {}
// ********** End Class APOIManager ****************************************************************

// ********** Begin Class APOIManagerRoom Function SpawnTestPOIs ***********************************
struct Z_Construct_UFunction_APOIManagerRoom_SpawnTestPOIs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "POI|Test" },
		{ "Comment", "// Spawns TestSpawnCount source POI actors in a building-shaped grid with sequential\n// IDs and random plane meshes -- for bake/HISM load testing only.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Spawns TestSpawnCount source POI actors in a building-shaped grid with sequential\nIDs and random plane meshes -- for bake/HISM load testing only." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManagerRoom_SpawnTestPOIs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManagerRoom, nullptr, "SpawnTestPOIs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManagerRoom_SpawnTestPOIs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManagerRoom_SpawnTestPOIs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APOIManagerRoom_SpawnTestPOIs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManagerRoom_SpawnTestPOIs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManagerRoom::execSpawnTestPOIs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnTestPOIs();
	P_NATIVE_END;
}
// ********** End Class APOIManagerRoom Function SpawnTestPOIs *************************************

// ********** Begin Class APOIManagerRoom **********************************************************
void APOIManagerRoom::StaticRegisterNativesAPOIManagerRoom()
{
	UClass* Class = APOIManagerRoom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnTestPOIs", &APOIManagerRoom::execSpawnTestPOIs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APOIManagerRoom;
UClass* APOIManagerRoom::GetPrivateStaticClass()
{
	using TClass = APOIManagerRoom;
	if (!Z_Registration_Info_UClass_APOIManagerRoom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("POIManagerRoom"),
			Z_Registration_Info_UClass_APOIManagerRoom.InnerSingleton,
			StaticRegisterNativesAPOIManagerRoom,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APOIManagerRoom.InnerSingleton;
}
UClass* Z_Construct_UClass_APOIManagerRoom_NoRegister()
{
	return APOIManagerRoom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APOIManagerRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Manager for plane-style POIs (rooms). BakeScope locked to PlaneOnly in the constructor.\n" },
		{ "DisplayName", "POI Manager - Room" },
		{ "IncludePath", "POIManager.h" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Manager for plane-style POIs (rooms). BakeScope locked to PlaneOnly in the constructor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPlaneMeshes_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "Comment", "// Meshes assigned randomly to spawned POIs' Plane component. Empty -> engine BasicShapes planes.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Meshes assigned randomly to spawned POIs' Plane component. Empty -> engine BasicShapes planes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestPlaneMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestPlaneMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APOIManagerRoom_SpawnTestPOIs, "SpawnTestPOIs" }, // 1629495551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APOIManagerRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManagerRoom_Statics::NewProp_TestPlaneMeshes_Inner = { "TestPlaneMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APOIManagerRoom_Statics::NewProp_TestPlaneMeshes = { "TestPlaneMeshes", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManagerRoom, TestPlaneMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPlaneMeshes_MetaData), NewProp_TestPlaneMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APOIManagerRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManagerRoom_Statics::NewProp_TestPlaneMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManagerRoom_Statics::NewProp_TestPlaneMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerRoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APOIManagerRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APOIManager,
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APOIManagerRoom_Statics::ClassParams = {
	&APOIManagerRoom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APOIManagerRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerRoom_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_APOIManagerRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APOIManagerRoom()
{
	if (!Z_Registration_Info_UClass_APOIManagerRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APOIManagerRoom.OuterSingleton, Z_Construct_UClass_APOIManagerRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APOIManagerRoom.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APOIManagerRoom);
APOIManagerRoom::~APOIManagerRoom() {}
// ********** End Class APOIManagerRoom ************************************************************

// ********** Begin Class APOIManagerHouse Function SpawnTestPOIs **********************************
struct Z_Construct_UFunction_APOIManagerHouse_SpawnTestPOIs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "POI|Test" },
		{ "Comment", "// Spawns TestSpawnCount source house POI actors in a building-shaped grid with\n// sequential IDs and random cube meshes -- for bake/HISM load testing only.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Spawns TestSpawnCount source house POI actors in a building-shaped grid with\nsequential IDs and random cube meshes -- for bake/HISM load testing only." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIManagerHouse_SpawnTestPOIs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APOIManagerHouse, nullptr, "SpawnTestPOIs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIManagerHouse_SpawnTestPOIs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIManagerHouse_SpawnTestPOIs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APOIManagerHouse_SpawnTestPOIs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIManagerHouse_SpawnTestPOIs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APOIManagerHouse::execSpawnTestPOIs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnTestPOIs();
	P_NATIVE_END;
}
// ********** End Class APOIManagerHouse Function SpawnTestPOIs ************************************

// ********** Begin Class APOIManagerHouse *********************************************************
void APOIManagerHouse::StaticRegisterNativesAPOIManagerHouse()
{
	UClass* Class = APOIManagerHouse::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnTestPOIs", &APOIManagerHouse::execSpawnTestPOIs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APOIManagerHouse;
UClass* APOIManagerHouse::GetPrivateStaticClass()
{
	using TClass = APOIManagerHouse;
	if (!Z_Registration_Info_UClass_APOIManagerHouse.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("POIManagerHouse"),
			Z_Registration_Info_UClass_APOIManagerHouse.InnerSingleton,
			StaticRegisterNativesAPOIManagerHouse,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APOIManagerHouse.InnerSingleton;
}
UClass* Z_Construct_UClass_APOIManagerHouse_NoRegister()
{
	return APOIManagerHouse::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APOIManagerHouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Manager for house-style POIs (a translucent cube is both display and click volume).\n// BakeScope locked to HouseOnly; RebuildHISMs merges display + click into ONE HISM\n// per mesh kind (no separate cube HISM -- half the instances).\n" },
		{ "DisplayName", "POI Manager - House" },
		{ "IncludePath", "POIManager.h" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Manager for house-style POIs (a translucent cube is both display and click volume).\nBakeScope locked to HouseOnly; RebuildHISMs merges display + click into ONE HISM\nper mesh kind (no separate cube HISM -- half the instances)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestCubeMeshes_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "Comment", "// Meshes assigned randomly to spawned POIs' Cube component. Empty -> engine BasicShapes cube.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Meshes assigned randomly to spawned POIs' Cube component. Empty -> engine BasicShapes cube." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestCubeMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestCubeMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APOIManagerHouse_SpawnTestPOIs, "SpawnTestPOIs" }, // 687471627
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APOIManagerHouse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIManagerHouse_Statics::NewProp_TestCubeMeshes_Inner = { "TestCubeMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APOIManagerHouse_Statics::NewProp_TestCubeMeshes = { "TestCubeMeshes", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManagerHouse, TestCubeMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestCubeMeshes_MetaData), NewProp_TestCubeMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APOIManagerHouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManagerHouse_Statics::NewProp_TestCubeMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIManagerHouse_Statics::NewProp_TestCubeMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerHouse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APOIManagerHouse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APOIManager,
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerHouse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APOIManagerHouse_Statics::ClassParams = {
	&APOIManagerHouse::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APOIManagerHouse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerHouse_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APOIManagerHouse_Statics::Class_MetaDataParams), Z_Construct_UClass_APOIManagerHouse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APOIManagerHouse()
{
	if (!Z_Registration_Info_UClass_APOIManagerHouse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APOIManagerHouse.OuterSingleton, Z_Construct_UClass_APOIManagerHouse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APOIManagerHouse.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APOIManagerHouse);
APOIManagerHouse::~APOIManagerHouse() {}
// ********** End Class APOIManagerHouse ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPOIBakeScope_StaticEnum, TEXT("EPOIBakeScope"), &Z_Registration_Info_UEnum_EPOIBakeScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3705232220U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPOIBakeEntry::StaticStruct, Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewStructOps, TEXT("POIBakeEntry"), &Z_Registration_Info_UScriptStruct_FPOIBakeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIBakeEntry), 1252695288U) },
		{ FPlaneMaterialSet::StaticStruct, Z_Construct_UScriptStruct_FPlaneMaterialSet_Statics::NewStructOps, TEXT("PlaneMaterialSet"), &Z_Registration_Info_UScriptStruct_FPlaneMaterialSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneMaterialSet), 1406982917U) },
		{ FPOIHitResult::StaticStruct, Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewStructOps, TEXT("POIHitResult"), &Z_Registration_Info_UScriptStruct_FPOIHitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIHitResult), 782158828U) },
		{ FPOIRuntimeInstance::StaticStruct, Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewStructOps, TEXT("POIRuntimeInstance"), &Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIRuntimeInstance), 1333720892U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APOIManager, APOIManager::StaticClass, TEXT("APOIManager"), &Z_Registration_Info_UClass_APOIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APOIManager), 3060423788U) },
		{ Z_Construct_UClass_APOIManagerRoom, APOIManagerRoom::StaticClass, TEXT("APOIManagerRoom"), &Z_Registration_Info_UClass_APOIManagerRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APOIManagerRoom), 3819404652U) },
		{ Z_Construct_UClass_APOIManagerHouse, APOIManagerHouse::StaticClass, TEXT("APOIManagerHouse"), &Z_Registration_Info_UClass_APOIManagerHouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APOIManagerHouse), 2746430112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_889814708(TEXT("/Script/REX_Interaction"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
