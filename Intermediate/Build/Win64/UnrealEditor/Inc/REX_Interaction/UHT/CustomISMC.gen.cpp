// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomISMC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomISMC() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomISMC();
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomISMC_NoRegister();
UPackage* Z_Construct_UPackage__Script_REX_Interaction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomISMC Function GetInstanceCustomDataValue **************************
struct Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics
{
	struct CustomISMC_eventGetInstanceCustomDataValue_Parms
	{
		int32 InstanceIndex;
		int32 DataIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom ISM" },
		{ "Comment", "// Returns the instance's custom data float, or 0 if any index is out of range.\n" },
		{ "ModuleRelativePath", "Public/CustomISMC.h" },
		{ "ToolTip", "Returns the instance's custom data float, or 0 if any index is out of range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomISMC_eventGetInstanceCustomDataValue_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomISMC_eventGetInstanceCustomDataValue_Parms, DataIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomISMC_eventGetInstanceCustomDataValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::NewProp_DataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomISMC, nullptr, "GetInstanceCustomDataValue", Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::CustomISMC_eventGetInstanceCustomDataValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::CustomISMC_eventGetInstanceCustomDataValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
void UCustomISMC::StaticRegisterNativesUCustomISMC()
{
	UClass* Class = UCustomISMC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstanceCustomDataValue", &UCustomISMC::execGetInstanceCustomDataValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomISMC;
UClass* UCustomISMC::GetPrivateStaticClass()
{
	using TClass = UCustomISMC;
	if (!Z_Registration_Info_UClass_UCustomISMC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomISMC"),
			Z_Registration_Info_UClass_UCustomISMC.InnerSingleton,
			StaticRegisterNativesUCustomISMC,
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
	return Z_Registration_Info_UClass_UCustomISMC.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomISMC_NoRegister()
{
	return UCustomISMC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomISMC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// ISM with a bounds-checked READ of per-instance custom data (the engine only\n// exposes the write path). Keep logic identical to UCustomHISMC.\n" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "CustomISMC.h" },
		{ "ModuleRelativePath", "Public/CustomISMC.h" },
		{ "ToolTip", "ISM with a bounds-checked READ of per-instance custom data (the engine only\nexposes the write path). Keep logic identical to UCustomHISMC." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomISMC_GetInstanceCustomDataValue, "GetInstanceCustomDataValue" }, // 1460864168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomISMC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomISMC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomISMC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomISMC_Statics::ClassParams = {
	&UCustomISMC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomISMC_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomISMC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomISMC()
{
	if (!Z_Registration_Info_UClass_UCustomISMC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomISMC.OuterSingleton, Z_Construct_UClass_UCustomISMC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomISMC.OuterSingleton;
}
UCustomISMC::UCustomISMC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomISMC);
UCustomISMC::~UCustomISMC() {}
// ********** End Class UCustomISMC ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h__Script_REX_Interaction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomISMC, UCustomISMC::StaticClass, TEXT("UCustomISMC"), &Z_Registration_Info_UClass_UCustomISMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomISMC), 2766747592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h__Script_REX_Interaction_239184136(TEXT("/Script/REX_Interaction"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h__Script_REX_Interaction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomISMC_h__Script_REX_Interaction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
