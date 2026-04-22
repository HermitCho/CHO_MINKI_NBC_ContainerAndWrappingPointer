// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedClass/Public/SecondActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondActor() {}

// Begin Cross Module References
ADVANCEDCLASS_API UClass* Z_Construct_UClass_ASecondActor();
ADVANCEDCLASS_API UClass* Z_Construct_UClass_ASecondActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedClass();
// End Cross Module References

// Begin Class ASecondActor
void ASecondActor::StaticRegisterNativesASecondActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondActor);
UClass* Z_Construct_UClass_ASecondActor_NoRegister()
{
	return ASecondActor::StaticClass();
}
struct Z_Construct_UClass_ASecondActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SecondActor.h" },
		{ "ModuleRelativePath", "Public/SecondActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SecondActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondActor_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASecondActor_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondActor, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASecondActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondActor_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondActor_Statics::NewProp_Components,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASecondActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondActor_Statics::ClassParams = {
	&ASecondActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASecondActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASecondActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondActor()
{
	if (!Z_Registration_Info_UClass_ASecondActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondActor.OuterSingleton, Z_Construct_UClass_ASecondActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondActor.OuterSingleton;
}
template<> ADVANCEDCLASS_API UClass* StaticClass<ASecondActor>()
{
	return ASecondActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondActor);
ASecondActor::~ASecondActor() {}
// End Class ASecondActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondActor, ASecondActor::StaticClass, TEXT("ASecondActor"), &Z_Registration_Info_UClass_ASecondActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondActor), 3182852669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_2991815967(TEXT("/Script/AdvancedClass"),
	Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
