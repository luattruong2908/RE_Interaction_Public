// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomEIA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCustomEIA() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_REX_Interaction(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomEIA(ETypeConstructPhase);
REX_INTERACTION_API UClass* Z_Construct_UClass_UCustomEIA(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCustomEIA ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCustomEIA_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Fixes UE's long-standing touch input bug: when a finger is released, the touch\n// key's value/accumulator can survive into later frames (\"sticking\" input).\n// Nothing to call -- works only when wired as the project input class in\n// Config/DefaultInput.ini (DefaultPlayerInputClass + DefaultEditorInputClass).\n" },
		{ "IncludePath", "CustomEIA.h" },
		{ "ModuleRelativePath", "Public/CustomEIA.h" },
		{ "ToolTip", "Fixes UE's long-standing touch input bug: when a finger is released, the touch\nkey's value/accumulator can survive into later frames (\"sticking\" input).\nNothing to call -- works only when wired as the project input class in\nConfig/DefaultInput.ini (DefaultPlayerInputClass + DefaultEditorInputClass)." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCustomEIA constinit property declarations *******************************
// ********** End Class UCustomEIA constinit property declarations *********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomEIA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEnhancedPlayerInput,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_REX_Interaction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCustomEIA,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomEIA;
UClass* Z_Construct_UClass_UCustomEIA(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCustomEIA;
		if (!Z_Registration_Info_UClass_UCustomEIA.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CustomEIA"),
				Z_Registration_Info_UClass_UCustomEIA.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UCustomEIA.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCustomEIA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomEIA.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomEIA.OuterSingleton;
}
#undef UHT_STATICS
UCustomEIA::UCustomEIA() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCustomEIA);
UCustomEIA::~UCustomEIA() {}
// ********** End Class UCustomEIA *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomEIA_h__Script_REX_Interaction_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomEIA, TEXT("UCustomEIA"), &Z_Registration_Info_UClass_UCustomEIA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomEIA), 3421519795U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_REX_Interaction_Source_REX_Interaction_Public_CustomEIA_h__Script_REX_Interaction_f648c7c954ed3bb0f15eccc274f6dc0955e7993c{
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
