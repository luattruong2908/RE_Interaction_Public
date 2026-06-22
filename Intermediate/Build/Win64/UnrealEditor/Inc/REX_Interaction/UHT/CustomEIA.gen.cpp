// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomEIA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomEIA() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput();
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomEIA();
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomEIA_NoRegister();
UPackage* Z_Construct_UPackage__Script_REX_Interaction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomEIA ***************************************************************
void UCustomEIA::StaticRegisterNativesUCustomEIA()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomEIA;
UClass* UCustomEIA::GetPrivateStaticClass()
{
	using TClass = UCustomEIA;
	if (!Z_Registration_Info_UClass_UCustomEIA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomEIA"),
			Z_Registration_Info_UClass_UCustomEIA.InnerSingleton,
			StaticRegisterNativesUCustomEIA,
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
	return Z_Registration_Info_UClass_UCustomEIA.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomEIA_NoRegister()
{
	return UCustomEIA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomEIA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Fixes UE's long-standing touch input bug: when a finger is released, the touch\n// key's value/accumulator can survive into later frames (\"sticking\" input).\n// Nothing to call -- works only when wired as the project input class in\n// Config/DefaultInput.ini (DefaultPlayerInputClass + DefaultEditorInputClass).\n" },
		{ "IncludePath", "CustomEIA.h" },
		{ "ModuleRelativePath", "Public/CustomEIA.h" },
		{ "ToolTip", "Fixes UE's long-standing touch input bug: when a finger is released, the touch\nkey's value/accumulator can survive into later frames (\"sticking\" input).\nNothing to call -- works only when wired as the project input class in\nConfig/DefaultInput.ini (DefaultPlayerInputClass + DefaultEditorInputClass)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomEIA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomEIA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedPlayerInput,
	(UObject* (*)())Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEIA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomEIA_Statics::ClassParams = {
	&UCustomEIA::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomEIA_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomEIA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomEIA()
{
	if (!Z_Registration_Info_UClass_UCustomEIA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomEIA.OuterSingleton, Z_Construct_UClass_UCustomEIA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomEIA.OuterSingleton;
}
UCustomEIA::UCustomEIA() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomEIA);
UCustomEIA::~UCustomEIA() {}
// ********** End Class UCustomEIA *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomEIA_h__Script_REX_Interaction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomEIA, UCustomEIA::StaticClass, TEXT("UCustomEIA"), &Z_Registration_Info_UClass_UCustomEIA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomEIA), 1680228017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomEIA_h__Script_REX_Interaction_773253172(TEXT("/Script/REX_Interaction"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomEIA_h__Script_REX_Interaction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomEIA_h__Script_REX_Interaction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
