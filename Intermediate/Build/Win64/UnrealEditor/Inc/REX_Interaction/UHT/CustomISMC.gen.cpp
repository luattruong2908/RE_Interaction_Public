// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomISMC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCustomISMC() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomISMC(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomISMC(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCustomISMC Function GetInstanceCustomDataValue **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics
struct UHT_STATICS
{
	struct CustomISMC_eventGetInstanceCustomDataValue_Parms
	{
		int32 InstanceIndex;
		int32 DataIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Custom ISM" },
		{ "Comment", "// Returns the instance's custom data float, or 0 if any index is out of range.\n" },
		{ "ModuleRelativePath", "Public/CustomISMC.h" },
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
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CustomISMC_eventGetInstanceCustomDataValue_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CustomISMC_eventGetInstanceCustomDataValue_Parms, DataIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CustomISMC_eventGetInstanceCustomDataValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetInstanceCustomDataValue Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCustomISMC, nullptr, "GetInstanceCustomDataValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CustomISMC_eventGetInstanceCustomDataValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CustomISMC_eventGetInstanceCustomDataValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCustomISMC::execGetInstanceCustomDataValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInstanceCustomDataValue(Z_Param_InstanceIndex,Z_Param_DataIndex);
	P_NATIVE_END;
}
// ********** End Class UCustomISMC Function GetInstanceCustomDataValue ****************************

// ********** Begin Class UCustomISMC **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCustomISMC_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// ISM with a bounds-checked READ of per-instance custom data (the engine only\n// exposes the write path). Keep logic identical to UCustomHISMC.\n" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "CustomISMC.h" },
		{ "ModuleRelativePath", "Public/CustomISMC.h" },
		{ "ToolTip", "ISM with a bounds-checked READ of per-instance custom data (the engine only\nexposes the write path). Keep logic identical to UCustomHISMC." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCustomISMC constinit property declarations ******************************
// ********** End Class UCustomISMC constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetInstanceCustomDataValue"), .Pointer = &UCustomISMC::execGetInstanceCustomDataValue },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue, "GetInstanceCustomDataValue" }, // 776172c568ab0147b194e8e057f5171e0d970479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomISMC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInstancedStaticMeshComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCustomISMC,
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
static void UCustomISMC_StaticRegisterNativesUCustomISMC()
{
	UClass* Class = UCustomISMC::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomISMC;
UClass* Z_Construct_UClass_UCustomISMC(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCustomISMC;
		if (!Z_Registration_Info_UClass_UCustomISMC.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CustomISMC"),
				Z_Registration_Info_UClass_UCustomISMC.InnerSingleton,
				UCustomISMC_StaticRegisterNativesUCustomISMC,
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
		return Z_Registration_Info_UClass_UCustomISMC.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCustomISMC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomISMC.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomISMC.OuterSingleton;
}
#undef UHT_STATICS
UCustomISMC::UCustomISMC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCustomISMC);
UCustomISMC::~UCustomISMC() {}
// ********** End Class UCustomISMC ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h__Script_REX_Interaction_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomISMC, TEXT("UCustomISMC"), &Z_Registration_Info_UClass_UCustomISMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomISMC), 259276881U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h__Script_REX_Interaction_7dbb01162ad1254c34d461b44aaf0d5f05ed34e0{
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
