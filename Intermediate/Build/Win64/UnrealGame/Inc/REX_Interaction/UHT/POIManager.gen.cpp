// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POIManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePOIManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase);
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIBakeEntry(ETypeConstructPhase);
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIHitResult(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManager(ETypeConstructPhase);
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIMaterialSet(ETypeConstructPhase);
REX_INTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FPOIRuntimeInstance(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomHISMC(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_APOIManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FPOIBakeEntry *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPOIBakeEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPOIBakeEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPOIBakeEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// One baked POI. BakedEntries is the serialized source of truth; the HISMs are\n// Transient and rebuilt from it on every load (see RebuildHISMs).\n// Do NOT rename fields without a property redirect in\n// Config/DefaultREX_Interaction.ini -- that breaks data already baked into maps.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "One baked POI. BakedEntries is the serialized source of truth; the HISMs are\nTransient and rebuilt from it on every load (see RebuildHISMs).\nDo NOT rename fields without a property redirect in\nConfig/DefaultREX_Interaction.ini -- that breaks data already baked into maps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Key into the POI DataTable (read from the source actor via reflection).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Key into the POI DataTable (read from the source actor via reflection)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// The source POI's Cube mesh: display and click volume in one.\n// Also the grouping key -- one HISM per distinct mesh.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "The source POI's Cube mesh: display and click volume in one.\nAlso the grouping key -- one HISM per distinct mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// World transform of the Cube.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "World transform of the Cube." },
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

// ********** Begin ScriptStruct FPOIBakeEntry constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraArmLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPOIBakeEntry constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIBakeEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPOIBakeEntry Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, Mesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraYaw = { "CameraYaw", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, CameraYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraYaw_MetaData), NewProp_CameraYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, CameraPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPitch_MetaData), NewProp_CameraPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraArmLength = { "CameraArmLength", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIBakeEntry, CameraArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArmLength_MetaData), NewProp_CameraArmLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraArmLength,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPOIBakeEntry Property Definitions **********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"POIBakeEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPOIBakeEntry>(),
	alignof(FPOIBakeEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPOIBakeEntry;
UScriptStruct* Z_Construct_UScriptStruct_FPOIBakeEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPOIBakeEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPOIBakeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIBakeEntry, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase::Outer), TEXT("POIBakeEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FPOIBakeEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPOIBakeEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPOIBakeEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPOIBakeEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPOIBakeEntry *******************************************************

// ********** Begin ScriptStruct FPOIMaterialSet ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPOIMaterialSet_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPOIMaterialSet>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPOIMaterialSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Per-slot materials of one mesh kind, captured at bake time. Only true\n// overrides are stored; null = inherit the mesh's own material.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Per-slot materials of one mesh kind, captured at bake time. Only true\noverrides are stored; null = inherit the mesh's own material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPOIMaterialSet constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPOIMaterialSet constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIMaterialSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPOIMaterialSet Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIMaterialSet, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPOIMaterialSet Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"POIMaterialSet",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPOIMaterialSet>(),
	alignof(FPOIMaterialSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPOIMaterialSet;
UScriptStruct* Z_Construct_UScriptStruct_FPOIMaterialSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPOIMaterialSet.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPOIMaterialSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIMaterialSet, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase::Outer), TEXT("POIMaterialSet"));
		}
		return Z_Registration_Info_UScriptStruct_FPOIMaterialSet.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPOIMaterialSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPOIMaterialSet.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPOIMaterialSet.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPOIMaterialSet *****************************************************

// ********** Begin ScriptStruct FPOIHitResult *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPOIHitResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPOIHitResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPOIHitResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
		{ "Comment", "// World location of the hit POI (zero on a missed trace).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "World location of the hit POI (zero on a missed trace)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPOIHitResult constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraArmLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPOIHitResult constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIHitResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPOIHitResult Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIHitResult, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotation_MetaData), NewProp_CameraRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraArmLength = { "CameraArmLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIHitResult, CameraArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArmLength_MetaData), NewProp_CameraArmLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_POILocation = { "POILocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIHitResult, POILocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POILocation_MetaData), NewProp_POILocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POILocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPOIHitResult Property Definitions **********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"POIHitResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPOIHitResult>(),
	alignof(FPOIHitResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPOIHitResult;
UScriptStruct* Z_Construct_UScriptStruct_FPOIHitResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPOIHitResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPOIHitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIHitResult, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase::Outer), TEXT("POIHitResult"));
		}
		return Z_Registration_Info_UScriptStruct_FPOIHitResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPOIHitResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPOIHitResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPOIHitResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPOIHitResult *******************************************************

// ********** Begin ScriptStruct FPOIRuntimeInstance ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPOIRuntimeInstance>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPOIRuntimeInstance); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Runtime data of one POI, same order as BakedEntries.\n// Transient -- rebuilt from BakedEntries on load.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Runtime data of one POI, same order as BakedEntries.\nTransient -- rebuilt from BakedEntries on load." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISMIndex_MetaData[] = {
		{ "Comment", "// Index into APOIManager::HISMs (INDEX_NONE if this POI has no mesh).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Index into APOIManager::HISMs (INDEX_NONE if this POI has no mesh)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "Comment", "// Instance index inside that HISM.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Instance index inside that HISM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Comment", "// Cached show/hide state, used to skip hidden POIs on click.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Cached show/hide state, used to skip hidden POIs on click." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Comment", "// World location (copied from the baked transform at rebuild time).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "World location (copied from the baked transform at rebuild time)." },
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

// ********** Begin ScriptStruct FPOIRuntimeInstance constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HISMIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static void NewProp_bVisible_SetBit(void* Obj)
	{
		((FPOIRuntimeInstance*)Obj)->bVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraArmLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPOIRuntimeInstance constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIRuntimeInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPOIRuntimeInstance Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_HISMIndex = { "HISMIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, HISMIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISMIndex_MetaData), NewProp_HISMIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FPOIRuntimeInstance), &UHT_STATICS::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraYaw = { "CameraYaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, CameraYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraYaw_MetaData), NewProp_CameraYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, CameraPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPitch_MetaData), NewProp_CameraPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraArmLength = { "CameraArmLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIRuntimeInstance, CameraArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArmLength_MetaData), NewProp_CameraArmLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HISMIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraArmLength,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPOIRuntimeInstance Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
	nullptr,
	&NewStructOps,
	"POIRuntimeInstance",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPOIRuntimeInstance>(),
	alignof(FPOIRuntimeInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance;
UScriptStruct* Z_Construct_UScriptStruct_FPOIRuntimeInstance(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIRuntimeInstance, (UObject*)Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase::Outer), TEXT("POIRuntimeInstance"));
		}
		return Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPOIRuntimeInstance *************************************************

// ********** Begin Class APOIManager Function ApplyColorMap ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_ApplyColorMap_Statics
struct UHT_STATICS
{
	struct POIManager_eventApplyColorMap_Parms
	{
		TMap<FString,FLinearColor> Colors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Bulk recolor from a POI_ID -> color map. Call once at BeginPlay after reading\n// the DataTable. Render state is dirtied once per HISM.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Bulk recolor from a POI_ID -> color map. Call once at BeginPlay after reading\nthe DataTable. Render state is dirtied once per HISM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyColorMap constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Colors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyColorMap constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyColorMap Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Colors_ValueProp = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Colors_Key_KeyProp = { "Colors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventApplyColorMap_Parms, Colors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Colors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Colors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Colors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyColorMap Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "ApplyColorMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventApplyColorMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventApplyColorMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ApplyColorMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_ApplyHiddenSet_Statics
struct UHT_STATICS
{
	struct POIManager_eventApplyHiddenSet_Parms
	{
		TSet<FString> HiddenIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Inverse filter: POIs whose ID is in HiddenIds are hidden, the rest shown.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Inverse filter: POIs whose ID is in HiddenIds are hidden, the rest shown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyHiddenSet constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HiddenIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HiddenIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyHiddenSet constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyHiddenSet Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_HiddenIds_ElementProp = { "HiddenIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_HiddenIds = { "HiddenIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventApplyHiddenSet_Parms, HiddenIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenIds_MetaData), NewProp_HiddenIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HiddenIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HiddenIds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyHiddenSet Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "ApplyHiddenSet", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventApplyHiddenSet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventApplyHiddenSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ApplyHiddenSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_ApplyVisibleSet_Statics
struct UHT_STATICS
{
	struct POIManager_eventApplyVisibleSet_Parms
	{
		TSet<FString> VisibleIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Filter: only POIs whose ID is in VisibleIds are shown.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Filter: only POIs whose ID is in VisibleIds are shown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyVisibleSet constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_VisibleIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_VisibleIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyVisibleSet constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyVisibleSet Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_VisibleIds_ElementProp = { "VisibleIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_VisibleIds = { "VisibleIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventApplyVisibleSet_Parms, VisibleIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleIds_MetaData), NewProp_VisibleIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisibleIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisibleIds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyVisibleSet Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "ApplyVisibleSet", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventApplyVisibleSet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventApplyVisibleSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ApplyVisibleSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#if WITH_EDITOR
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_BakeFromLevel_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "POI" },
		{ "Comment", "// Scans the level for source POI actors, fills BakedEntries, rebuilds the\n// HISMs. Re-running re-bakes from scratch. A scan that finds no source POI keeps\n// the existing bake (the sources are usually deleted after baking).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Scans the level for source POI actors, fills BakedEntries, rebuilds the\nHISMs. Re-running re-bakes from scratch. A scan that finds no source POI keeps\nthe existing bake (the sources are usually deleted after baking)." },
	};
#endif // WITH_METADATA

// ********** Begin Function BakeFromLevel constinit property declarations *************************
// ********** End Function BakeFromLevel constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "BakeFromLevel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_APOIManager_BakeFromLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(APOIManager::execBakeFromLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BakeFromLevel();
	P_NATIVE_END;
}
#endif
// ********** End Class APOIManager Function BakeFromLevel *****************************************

// ********** Begin Class APOIManager Function DeleteSourcePOIs ************************************
#if WITH_EDITOR
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_DeleteSourcePOIs_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "POI" },
		{ "Comment", "// Destroys the source POI actors. Run AFTER baking.\n// Not undoable -- if pressed by mistake, do not save the map.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Destroys the source POI actors. Run AFTER baking.\nNot undoable -- if pressed by mistake, do not save the map." },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSourcePOIs constinit property declarations **********************
// ********** End Function DeleteSourcePOIs constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "DeleteSourcePOIs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_APOIManager_DeleteSourcePOIs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(APOIManager::execDeleteSourcePOIs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSourcePOIs();
	P_NATIVE_END;
}
#endif
// ********** End Class APOIManager Function DeleteSourcePOIs **************************************

// ********** Begin Class APOIManager Function GetAllPOIIds ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_GetAllPOIIds_Statics
struct UHT_STATICS
{
	struct POIManager_eventGetAllPOIIds_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Every baked POI_ID, deduplicated, in bake order. Use to drive UI lists or\n// validate the DataTable against what was actually baked.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Every baked POI_ID, deduplicated, in bake order. Use to drive UI lists or\nvalidate the DataTable against what was actually baked." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllPOIIds constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllPOIIds constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllPOIIds Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetAllPOIIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllPOIIds Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "GetAllPOIIds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventGetAllPOIIds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventGetAllPOIIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_GetAllPOIIds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(APOIManager::execGetAllPOIIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllPOIIds();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function GetAllPOIIds ******************************************

// ********** Begin Class APOIManager Function GetPOICameraData ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_GetPOICameraData_Statics
struct UHT_STATICS
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Looks up camera data for a POI by ID. Returns false if the ID is not found.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Looks up camera data for a POI by ID. Returns false if the ID is not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPOICameraData constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutArmLength;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((POIManager_eventGetPOICameraData_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPOICameraData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPOICameraData Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutYaw = { "OutYaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, OutYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutPitch = { "OutPitch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, OutPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutArmLength = { "OutArmLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventGetPOICameraData_Parms, OutArmLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(POIManager_eventGetPOICameraData_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPOICameraData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "GetPOICameraData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventGetPOICameraData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventGetPOICameraData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_GetPOICameraData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_HiddenAll_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HiddenAll constinit property declarations *****************************
// ********** End Function HiddenAll constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "HiddenAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_APOIManager_HiddenAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(APOIManager::execHiddenAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HiddenAll();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function HiddenAll *********************************************

// ********** Begin Class APOIManager Function ResolveClick ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_ResolveClick_Statics
struct UHT_STATICS
{
	struct POIManager_eventResolveClick_Parms
	{
		UPrimitiveComponent* HitComp;
		int32 InstanceIndex;
		FString OutPOI_ID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Maps an existing hit (component + instance index) to a POI_ID. False if the hit\n// is not on this manager's HISMs or the instance is hidden.\n// Prefer TraceForPOI/SelectPOIByTrace for clicks.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Maps an existing hit (component + instance index) to a POI_ID. False if the hit\nis not on this manager's HISMs or the instance is hidden.\nPrefer TraceForPOI/SelectPOIByTrace for clicks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResolveClick constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPOI_ID;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((POIManager_eventResolveClick_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResolveClick constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResolveClick Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventResolveClick_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventResolveClick_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutPOI_ID = { "OutPOI_ID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventResolveClick_Parms, OutPOI_ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(POIManager_eventResolveClick_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPOI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResolveClick Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "ResolveClick", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventResolveClick_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventResolveClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_ResolveClick(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_SelectPOIByTrace_Statics
struct UHT_STATICS
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function SelectPOIByTrace constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPOI_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCameraSpecs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectPOIByTrace constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectPOIByTrace Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutPOI_ID = { "OutPOI_ID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, OutPOI_ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutCameraSpecs = { "OutCameraSpecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, OutCameraSpecs), Z_Construct_UScriptStruct_FPOIHitResult, METADATA_PARAMS(0, nullptr) }; // 23a0be7379ea8e2b2e5700333512e0029fb02ba6
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSelectPOIByTrace_Parms, ReturnValue), Z_Construct_UClass_APOIManager, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPOI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCameraSpecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SelectPOIByTrace Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "SelectPOIByTrace", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventSelectPOIByTrace_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventSelectPOIByTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_SelectPOIByTrace(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_SetPOIColor_Statics
struct UHT_STATICS
{
	struct POIManager_eventSetPOIColor_Parms
	{
		FString POI_ID;
		FLinearColor Color;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Writes RGB into custom data slots 1..3 of every instance with this ID.\n// Returns the number of instances recolored.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Writes RGB into custom data slots 1..3 of every instance with this ID.\nReturns the number of instances recolored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPOIColor constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPOIColor constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPOIColor Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetPOIColor_Parms, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetPOIColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetPOIColor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPOIColor Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "SetPOIColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventSetPOIColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventSetPOIColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_SetPOIColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_SetSelectedPOI_Statics
struct UHT_STATICS
{
	struct POIManager_eventSetSelectedPOI_Parms
	{
		FString POI_ID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Marks one POI selected (slot SelectedDataIndex = 1 + timestamp in\n// SelectTimeDataIndex) and deselects the previous one. Re-selecting the same POI\n// restamps the time so the material pulse plays again. Empty string = deselect all.\n// Returns the number of instances that changed state.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Marks one POI selected (slot SelectedDataIndex = 1 + timestamp in\nSelectTimeDataIndex) and deselects the previous one. Re-selecting the same POI\nrestamps the time so the material pulse plays again. Empty string = deselect all.\nReturns the number of instances that changed state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedPOI constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_POI_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedPOI constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedPOI Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_POI_ID = { "POI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetSelectedPOI_Parms, POI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_ID_MetaData), NewProp_POI_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventSetSelectedPOI_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedPOI Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "SetSelectedPOI", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventSetSelectedPOI_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventSetSelectedPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_SetSelectedPOI(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_ShowAll_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowAll constinit property declarations *******************************
// ********** End Function ShowAll constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "ShowAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_APOIManager_ShowAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(APOIManager::execShowAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAll();
	P_NATIVE_END;
}
// ********** End Class APOIManager Function ShowAll ***********************************************

// ********** Begin Class APOIManager Function SpawnTestPOIs ***************************************
#if WITH_EDITOR
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_SpawnTestPOIs_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "POI|Test" },
		{ "Comment", "// Spawns TestSpawnCount source POI actors in a building-shaped grid with\n// sequential IDs and random cube meshes -- for bake/HISM load testing only.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Spawns TestSpawnCount source POI actors in a building-shaped grid with\nsequential IDs and random cube meshes -- for bake/HISM load testing only." },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnTestPOIs constinit property declarations *************************
// ********** End Function SpawnTestPOIs constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "SpawnTestPOIs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_APOIManager_SpawnTestPOIs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(APOIManager::execSpawnTestPOIs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnTestPOIs();
	P_NATIVE_END;
}
#endif
// ********** End Class APOIManager Function SpawnTestPOIs *****************************************

// ********** Begin Class APOIManager Function TraceForPOI *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_APOIManager_TraceForPOI_Statics
struct UHT_STATICS
{
	struct POIManager_eventTraceForPOI_Parms
	{
		FVector Start;
		FVector End;
		FString OutPOI_ID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Multi line trace Start->End that skips hidden POIs (instances Overlap, so the\n// ray passes through them) and returns the POI_ID of the nearest VISIBLE one.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Multi line trace Start->End that skips hidden POIs (instances Overlap, so the\nray passes through them) and returns the POI_ID of the nearest VISIBLE one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TraceForPOI constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPOI_ID;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((POIManager_eventTraceForPOI_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TraceForPOI constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TraceForPOI Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventTraceForPOI_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventTraceForPOI_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutPOI_ID = { "OutPOI_ID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(POIManager_eventTraceForPOI_Parms, OutPOI_ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(POIManager_eventTraceForPOI_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPOI_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TraceForPOI Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_APOIManager, nullptr, "TraceForPOI", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::POIManager_eventTraceForPOI_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::POIManager_eventTraceForPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APOIManager_TraceForPOI(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_APOIManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Bakes hundreds/thousands of source POI actors (BP_POI_House: one translucent\n// Cube that is both display and click volume) into one HISM per distinct mesh.\n// All visual state (show/hide, color, selection) is per-instance custom data read\n// by the material on the GPU -- no per-frame CPU work, no per-instance SetVisibility.\n" },
		{ "DisplayName", "POI Manager" },
		{ "IncludePath", "POIManager.h" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Bakes hundreds/thousands of source POI actors (BP_POI_House: one translucent\nCube that is both display and click volume) into one HISM per distinct mesh.\nAll visual state (show/hide, color, selection) is per-instance custom data read\nby the material on the GPU -- no per-frame CPU work, no per-instance SetVisibility." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsByMesh_MetaData[] = {
		{ "Comment", "// Materials captured from the source Cube components at bake time, per mesh kind.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Materials captured from the source Cube components at bake time, per mesh kind." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITraceChannel_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Trace channel for POI clicks. Instances respond Overlap (NOT Block) so a multi\n// trace passes through hidden POIs to visible ones behind them. Default is the\n// dedicated \"POITrace\" channel (ECC_GameTraceChannel1, declared in\n// DefaultEngine.ini with DefaultResponse=Ignore so walls/floors never block the\n// ray). Do NOT use ECC_Visibility -- environment geometry blocks that channel.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Trace channel for POI clicks. Instances respond Overlap (NOT Block) so a multi\ntrace passes through hidden POIs to visible ones behind them. Default is the\ndedicated \"POITrace\" channel (ECC_GameTraceChannel1, declared in\nDefaultEngine.ini with DefaultResponse=Ignore so walls/floors never block the\nray). Do NOT use ECC_Visibility -- environment geometry blocks that channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeselectOnMissedClick_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Should a click that hits no POI clear this manager's selection? Off by default:\n// clicking empty space keeps the current POI highlighted, only clicking ANOTHER\n// POI moves the selection. Checked per manager, so each can decide on its own.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Should a click that hits no POI clear this manager's selection? Off by default:\nclicking empty space keeps the current POI highlighted, only clicking ANOTHER\nPOI moves the selection. Checked per manager, so each can decide on its own." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomDataFloats_MetaData[] = {
		{ "Category", "POI" },
		{ "ClampMax", "32" },
		{ "ClampMin", "4" },
		{ "Comment", "// Custom data floats per instance. Slot layout (the material must read these):\n//   0      Visible (1/0) -> Opacity Mask         (the only hide mechanism)\n//   1..3   RGB color (default white)\n//   4      Selected (1/0) -> brighter emissive\n//   5      SelectTime (world seconds at selection; material runs a decaying\n//          envelope on Time - slot5 for a one-shot pulse)\n// Minimum 4: slots 0..3 are always written.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Custom data floats per instance. Slot layout (the material must read these):\n  0      Visible (1/0) -> Opacity Mask         (the only hide mechanism)\n  1..3   RGB color (default white)\n  4      Selected (1/0) -> brighter emissive\n  5      SelectTime (world seconds at selection; material runs a decaying\n         envelope on Time - slot5 for a one-shot pulse)\nMinimum 4: slots 0..3 are always written." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedDataIndex_MetaData[] = {
		{ "Category", "POI" },
		{ "ClampMax", "31" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectTimeDataIndex_MetaData[] = {
		{ "Category", "POI" },
		{ "ClampMax", "31" },
		{ "ClampMin", "-1" },
		{ "Comment", "// -1 = no timestamp slot (selection still works, the pulse does not).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "-1 = no timestamp slot (selection still works, the pulse does not)." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIClassRef_MetaData[] = {
		{ "Category", "POI" },
		{ "Comment", "// Source actor class for the editor buttons. Soft ref: editor dropdown + it\n// follows redirectors if the asset is moved/renamed.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Source actor class for the editor buttons. Soft ref: editor dropdown + it\nfollows redirectors if the asset is moved/renamed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestSpawnCount_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "1" },
		{ "Comment", "// ---- Test spawning (the \"Spawn Test POIs\" button; test-only) ----\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "---- Test spawning (the \"Spawn Test POIs\" button; test-only) ----" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGridColumns_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "ClampMin", "1" },
		{ "Comment", "// POIs per row (X axis).\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "POIs per row (X axis)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGridRows_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "ClampMin", "1" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestCubeMeshes_MetaData[] = {
		{ "Category", "POI|Test" },
		{ "Comment", "// Meshes assigned randomly to spawned POIs' Cube component. Empty -> engine BasicShapes cube.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Meshes assigned randomly to spawned POIs' Cube component. Empty -> engine BasicShapes cube." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISMs_MetaData[] = {
		{ "Comment", "// Parallel arrays: HISMs[i] renders instances of MeshKeys[i].\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Parallel arrays: HISMs[i] renders instances of MeshKeys[i]." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/POIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIInstances_MetaData[] = {
		{ "Comment", "// One entry per baked POI, same order as BakedEntries.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "One entry per baked POI, same order as BakedEntries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPOI_ID_MetaData[] = {
		{ "Comment", "// Currently selected POI_ID (empty = none). Transient: fresh instances default\n// to Selected = 0, so the selection resets with the HISMs.\n" },
		{ "ModuleRelativePath", "Public/POIManager.h" },
		{ "ToolTip", "Currently selected POI_ID (empty = none). Transient: fresh instances default\nto Selected = 0, so the selection resets with the HISMs." },
	};
#endif // WITH_METADATA

// ********** Begin Class APOIManager constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedEntries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialsByMesh_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialsByMesh_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialsByMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_POITraceChannel;
	static void NewProp_bDeselectOnMissedClick_SetBit(void* Obj)
	{
		((APOIManager*)Obj)->bDeselectOnMissedClick = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeselectOnMissedClick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomDataFloats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedDataIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectTimeDataIndex;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_POIClassRef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestSpawnCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestGridColumns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestGridRows;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestGridSpacing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestCubeMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestCubeMeshes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HISMs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HISMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POIInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_POIInstances;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedPOI_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APOIManager constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyColorMap"), .Pointer = &APOIManager::execApplyColorMap },
		{ .NameUTF8 = UTF8TEXT("ApplyHiddenSet"), .Pointer = &APOIManager::execApplyHiddenSet },
		{ .NameUTF8 = UTF8TEXT("ApplyVisibleSet"), .Pointer = &APOIManager::execApplyVisibleSet },
#if WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("BakeFromLevel"), .Pointer = &APOIManager::execBakeFromLevel },
		{ .NameUTF8 = UTF8TEXT("DeleteSourcePOIs"), .Pointer = &APOIManager::execDeleteSourcePOIs },
#endif // WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("GetAllPOIIds"), .Pointer = &APOIManager::execGetAllPOIIds },
		{ .NameUTF8 = UTF8TEXT("GetPOICameraData"), .Pointer = &APOIManager::execGetPOICameraData },
		{ .NameUTF8 = UTF8TEXT("HiddenAll"), .Pointer = &APOIManager::execHiddenAll },
		{ .NameUTF8 = UTF8TEXT("ResolveClick"), .Pointer = &APOIManager::execResolveClick },
		{ .NameUTF8 = UTF8TEXT("SelectPOIByTrace"), .Pointer = &APOIManager::execSelectPOIByTrace },
		{ .NameUTF8 = UTF8TEXT("SetPOIColor"), .Pointer = &APOIManager::execSetPOIColor },
		{ .NameUTF8 = UTF8TEXT("SetSelectedPOI"), .Pointer = &APOIManager::execSetSelectedPOI },
		{ .NameUTF8 = UTF8TEXT("ShowAll"), .Pointer = &APOIManager::execShowAll },
#if WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("SpawnTestPOIs"), .Pointer = &APOIManager::execSpawnTestPOIs },
#endif // WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("TraceForPOI"), .Pointer = &APOIManager::execTraceForPOI },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APOIManager_ApplyColorMap, "ApplyColorMap" }, // c461e4775d2d254d3218a1bbd968bbaffc51a9dc
		{ &Z_Construct_UFunction_APOIManager_ApplyHiddenSet, "ApplyHiddenSet" }, // 4bb537c912381167b6fc62f09ade35dbeec9dd92
		{ &Z_Construct_UFunction_APOIManager_ApplyVisibleSet, "ApplyVisibleSet" }, // a4d7e781377a817449ef86dba686fa28b4d4e1ac
#if WITH_EDITOR
		{ &Z_Construct_UFunction_APOIManager_BakeFromLevel, "BakeFromLevel" }, // 2c599b6967588a5ae07a791a9076f9e25e3dc408
		{ &Z_Construct_UFunction_APOIManager_DeleteSourcePOIs, "DeleteSourcePOIs" }, // 51fc4d59282d0d5fff6226702812c144b14da36c
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_APOIManager_GetAllPOIIds, "GetAllPOIIds" }, // 20dc40677b5aa538f3403efd00d0b414ce780da9
		{ &Z_Construct_UFunction_APOIManager_GetPOICameraData, "GetPOICameraData" }, // a6372474073f009493fec12d6ab48f200bf7aec6
		{ &Z_Construct_UFunction_APOIManager_HiddenAll, "HiddenAll" }, // dbb1f42c51ab0e9e76b23cd1bdbf4ef86866a336
		{ &Z_Construct_UFunction_APOIManager_ResolveClick, "ResolveClick" }, // 19ba5d4dd9eb9b56962ecbb5bd9e78da32d4d608
		{ &Z_Construct_UFunction_APOIManager_SelectPOIByTrace, "SelectPOIByTrace" }, // a521410f9b2d5c8a3e3dd922d89830b650f6154f
		{ &Z_Construct_UFunction_APOIManager_SetPOIColor, "SetPOIColor" }, // 4e8381bd4a67b248b4d52dab3b4d8aac8584a19a
		{ &Z_Construct_UFunction_APOIManager_SetSelectedPOI, "SetSelectedPOI" }, // e82e1df6bc4e2dbd5d41a6b8296311329bf80af5
		{ &Z_Construct_UFunction_APOIManager_ShowAll, "ShowAll" }, // 8cc5e0690af2b47e63718b34be8004c0b548147b
#if WITH_EDITOR
		{ &Z_Construct_UFunction_APOIManager_SpawnTestPOIs, "SpawnTestPOIs" }, // 61b62210755b2286c58f94b5cf773f9185cf47e7
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_APOIManager_TraceForPOI, "TraceForPOI" }, // 30015fcb0ea99546f7bfe1bb21b49037d6adcae6
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APOIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class APOIManager Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SceneRoot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BakedEntries_Inner = { "BakedEntries", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPOIBakeEntry, METADATA_PARAMS(0, nullptr) }; // e9d0b9af23d96cda08ae12b6072acfdab773e37d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BakedEntries = { "BakedEntries", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, BakedEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedEntries_MetaData), NewProp_BakedEntries_MetaData) }; // e9d0b9af23d96cda08ae12b6072acfdab773e37d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MaterialsByMesh_ValueProp = { "MaterialsByMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPOIMaterialSet, METADATA_PARAMS(0, nullptr) }; // d3d24883c04527405daa286ab730b39aeca3d47e
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaterialsByMesh_Key_KeyProp = { "MaterialsByMesh_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_MaterialsByMesh = { "MaterialsByMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, MaterialsByMesh), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialsByMesh_MetaData), NewProp_MaterialsByMesh_MetaData) }; // d3d24883c04527405daa286ab730b39aeca3d47e
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_POITraceChannel = { "POITraceChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, POITraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITraceChannel_MetaData), NewProp_POITraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDeselectOnMissedClick = { "bDeselectOnMissedClick", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(APOIManager), &UHT_STATICS::NewProp_bDeselectOnMissedClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeselectOnMissedClick_MetaData), NewProp_bDeselectOnMissedClick_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumCustomDataFloats = { "NumCustomDataFloats", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, NumCustomDataFloats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCustomDataFloats_MetaData), NewProp_NumCustomDataFloats_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SelectedDataIndex = { "SelectedDataIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SelectedDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedDataIndex_MetaData), NewProp_SelectedDataIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SelectTimeDataIndex = { "SelectTimeDataIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SelectTimeDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectTimeDataIndex_MetaData), NewProp_SelectTimeDataIndex_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_POIClassRef = { "POIClassRef", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, POIClassRef), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIClassRef_MetaData), NewProp_POIClassRef_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TestSpawnCount = { "TestSpawnCount", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestSpawnCount_MetaData), NewProp_TestSpawnCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TestGridColumns = { "TestGridColumns", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestGridColumns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGridColumns_MetaData), NewProp_TestGridColumns_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TestGridRows = { "TestGridRows", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestGridRows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGridRows_MetaData), NewProp_TestGridRows_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TestGridSpacing = { "TestGridSpacing", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestGridSpacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGridSpacing_MetaData), NewProp_TestGridSpacing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TestCubeMeshes_Inner = { "TestCubeMeshes", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TestCubeMeshes = { "TestCubeMeshes", nullptr, (EPropertyFlags)0x0124080800000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, TestCubeMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestCubeMeshes_MetaData), NewProp_TestCubeMeshes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HISMs_Inner = { "HISMs", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomHISMC, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_HISMs = { "HISMs", nullptr, (EPropertyFlags)0x0124088000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, HISMs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISMs_MetaData), NewProp_HISMs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MeshKeys_Inner = { "MeshKeys", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MeshKeys = { "MeshKeys", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, MeshKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshKeys_MetaData), NewProp_MeshKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_POIInstances_Inner = { "POIInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPOIRuntimeInstance, METADATA_PARAMS(0, nullptr) }; // b527f913b88f7ef1c3c4c4af12b7bf3088cf53b5
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_POIInstances = { "POIInstances", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, POIInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIInstances_MetaData), NewProp_POIInstances_MetaData) }; // b527f913b88f7ef1c3c4c4af12b7bf3088cf53b5
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SelectedPOI_ID = { "SelectedPOI_ID", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(APOIManager, SelectedPOI_ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPOI_ID_MetaData), NewProp_SelectedPOI_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BakedEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BakedEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialsByMesh_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialsByMesh_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialsByMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POITraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDeselectOnMissedClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumCustomDataFloats,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectTimeDataIndex,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POIClassRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestSpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestGridColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestGridRows,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestGridSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestCubeMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestCubeMeshes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HISMs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HISMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POIInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_POIInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedPOI_ID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class APOIManager Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_APOIManager,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void APOIManager_StaticRegisterNativesAPOIManager()
{
	UClass* Class = APOIManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APOIManager;
UClass* Z_Construct_UClass_APOIManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = APOIManager;
		if (!Z_Registration_Info_UClass_APOIManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("POIManager"),
				Z_Registration_Info_UClass_APOIManager.InnerSingleton,
				APOIManager_StaticRegisterNativesAPOIManager,
				DataSizeOf<TClass>(),
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
	if (!Z_Registration_Info_UClass_APOIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APOIManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_APOIManager.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APOIManager);
APOIManager::~APOIManager() {}
// ********** End Class APOIManager ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FPOIBakeEntry, Z_Construct_UScriptStruct_FPOIBakeEntry_Statics::NewStructOps, TEXT("POIBakeEntry"),&Z_Registration_Info_UScriptStruct_FPOIBakeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIBakeEntry), 3922770351U) },
		{ Z_Construct_UScriptStruct_FPOIMaterialSet, Z_Construct_UScriptStruct_FPOIMaterialSet_Statics::NewStructOps, TEXT("POIMaterialSet"),&Z_Registration_Info_UScriptStruct_FPOIMaterialSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIMaterialSet), 3553773699U) },
		{ Z_Construct_UScriptStruct_FPOIHitResult, Z_Construct_UScriptStruct_FPOIHitResult_Statics::NewStructOps, TEXT("POIHitResult"),&Z_Registration_Info_UScriptStruct_FPOIHitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIHitResult), 597737075U) },
		{ Z_Construct_UScriptStruct_FPOIRuntimeInstance, Z_Construct_UScriptStruct_FPOIRuntimeInstance_Statics::NewStructOps, TEXT("POIRuntimeInstance"),&Z_Registration_Info_UScriptStruct_FPOIRuntimeInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIRuntimeInstance), 3039295763U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APOIManager, TEXT("APOIManager"), &Z_Registration_Info_UClass_APOIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APOIManager), 3889701764U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_POIManager_h__Script_REX_Interaction_3c28c1d325291339fb6667ee0d447257bbd0d887{
	TEXT("/Script/REX_Interaction"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
