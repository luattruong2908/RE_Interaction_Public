// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomHISMC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCustomHISMC() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomHISMC(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomHISMC(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCustomHISMC Function GetInstanceCustomDataValue *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCustomHISMC_GetInstanceCustomDataValue_Statics
struct UHT_STATICS
{
	struct CustomHISMC_eventGetInstanceCustomDataValue_Parms
	{
		int32 InstanceIndex;
		int32 DataIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Custom HISM" },
		{ "Comment", "// Returns the instance's custom data float, or 0 if any index is out of range.\n" },
		{ "ModuleRelativePath", "Public/CustomHISMC.h" },
		{ "ToolTip", "Returns the instance's custom data float, or 0 if any index is out of range." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInstanceCustomDataValue constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInstanceCustomDataValue constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInstanceCustomDataValue Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CustomHISMC_eventGetInstanceCustomDataValue_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CustomHISMC_eventGetInstanceCustomDataValue_Parms, DataIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CustomHISMC_eventGetInstanceCustomDataValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetInstanceCustomDataValue Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCustomHISMC, nullptr, "GetInstanceCustomDataValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CustomHISMC_eventGetInstanceCustomDataValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CustomHISMC_eventGetInstanceCustomDataValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomHISMC_GetInstanceCustomDataValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCustomHISMC::execGetInstanceCustomDataValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInstanceCustomDataValue(Z_Param_InstanceIndex,Z_Param_DataIndex);
	P_NATIVE_END;
}
// ********** End Class UCustomHISMC Function GetInstanceCustomDataValue ***************************

// ********** Begin Class UCustomHISMC *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCustomHISMC_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// HISM with a bounds-checked READ of per-instance custom data (the engine only\n// exposes the write path). Backbone of the POI system. Keep logic identical to UCustomISMC.\n" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "CustomHISMC.h" },
		{ "ModuleRelativePath", "Public/CustomHISMC.h" },
		{ "ToolTip", "HISM with a bounds-checked READ of per-instance custom data (the engine only\nexposes the write path). Backbone of the POI system. Keep logic identical to UCustomISMC." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCustomHISMC constinit property declarations *****************************
// ********** End Class UCustomHISMC constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetInstanceCustomDataValue"), .Pointer = &UCustomHISMC::execGetInstanceCustomDataValue },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomHISMC_GetInstanceCustomDataValue, "GetInstanceCustomDataValue" }, // f74b2d33d201fbc8cc9e316429c9e7ce7beadd96
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomHISMC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCustomHISMC,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UCustomHISMC_StaticRegisterNativesUCustomHISMC()
{
	UClass* Class = UCustomHISMC::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomHISMC;
UClass* Z_Construct_UClass_UCustomHISMC(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCustomHISMC;
		if (!Z_Registration_Info_UClass_UCustomHISMC.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CustomHISMC"),
				Z_Registration_Info_UClass_UCustomHISMC.InnerSingleton,
				UCustomHISMC_StaticRegisterNativesUCustomHISMC,
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
		return Z_Registration_Info_UClass_UCustomHISMC.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCustomHISMC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomHISMC.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomHISMC.OuterSingleton;
}
#undef UHT_STATICS
UCustomHISMC::UCustomHISMC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCustomHISMC);
UCustomHISMC::~UCustomHISMC() {}
// ********** End Class UCustomHISMC ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h__Script_REX_Interaction_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomHISMC, TEXT("UCustomHISMC"), &Z_Registration_Info_UClass_UCustomHISMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomHISMC), 1370590273U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomHISMC_h__Script_REX_Interaction_1bce3b2393108221e0d7609a6aa53cd0371b2bec{
	TEXT("/Script/REX_Interaction"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
