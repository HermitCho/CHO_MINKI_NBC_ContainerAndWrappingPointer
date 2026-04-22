// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedClass/Private/MyTestGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestGameModeBase() {}

// Begin Cross Module References
ADVANCEDCLASS_API UClass* Z_Construct_UClass_AMyTestGameModeBase();
ADVANCEDCLASS_API UClass* Z_Construct_UClass_AMyTestGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AdvancedClass();
// End Cross Module References

// Begin Class AMyTestGameModeBase
void AMyTestGameModeBase::StaticRegisterNativesAMyTestGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestGameModeBase);
UClass* Z_Construct_UClass_AMyTestGameModeBase_NoRegister()
{
	return AMyTestGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AMyTestGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyTestGameModeBase.h" },
		{ "ModuleRelativePath", "Private/MyTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyTestGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestGameModeBase_Statics::ClassParams = {
	&AMyTestGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTestGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMyTestGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestGameModeBase.OuterSingleton, Z_Construct_UClass_AMyTestGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTestGameModeBase.OuterSingleton;
}
template<> ADVANCEDCLASS_API UClass* StaticClass<AMyTestGameModeBase>()
{
	return AMyTestGameModeBase::StaticClass();
}
AMyTestGameModeBase::AMyTestGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestGameModeBase);
AMyTestGameModeBase::~AMyTestGameModeBase() {}
// End Class AMyTestGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestGameModeBase, AMyTestGameModeBase::StaticClass, TEXT("AMyTestGameModeBase"), &Z_Registration_Info_UClass_AMyTestGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestGameModeBase), 1341904887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_1366471786(TEXT("/Script/AdvancedClass"),
	Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
