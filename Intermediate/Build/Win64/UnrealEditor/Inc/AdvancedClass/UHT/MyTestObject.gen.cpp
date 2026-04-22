// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedClass/Private/MyTestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestObject() {}

// Begin Cross Module References
ADVANCEDCLASS_API UClass* Z_Construct_UClass_UMyTestObject();
ADVANCEDCLASS_API UClass* Z_Construct_UClass_UMyTestObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AdvancedClass();
// End Cross Module References

// Begin Class UMyTestObject
void UMyTestObject::StaticRegisterNativesUMyTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyTestObject);
UClass* Z_Construct_UClass_UMyTestObject_NoRegister()
{
	return UMyTestObject::StaticClass();
}
struct Z_Construct_UClass_UMyTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyTestObject.h" },
		{ "ModuleRelativePath", "Private/MyTestObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyTestObject_Statics::ClassParams = {
	&UMyTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyTestObject()
{
	if (!Z_Registration_Info_UClass_UMyTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyTestObject.OuterSingleton, Z_Construct_UClass_UMyTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyTestObject.OuterSingleton;
}
template<> ADVANCEDCLASS_API UClass* StaticClass<UMyTestObject>()
{
	return UMyTestObject::StaticClass();
}
UMyTestObject::UMyTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTestObject);
UMyTestObject::~UMyTestObject() {}
// End Class UMyTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyTestObject, UMyTestObject::StaticClass, TEXT("UMyTestObject"), &Z_Registration_Info_UClass_UMyTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyTestObject), 1997079915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_1654918236(TEXT("/Script/AdvancedClass"),
	Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
