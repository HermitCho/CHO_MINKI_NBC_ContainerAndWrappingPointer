// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedClass/Private/MyGCObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGCObserver() {}

// Begin Cross Module References
ADVANCEDCLASS_API UClass* Z_Construct_UClass_AMyGCObserver();
ADVANCEDCLASS_API UClass* Z_Construct_UClass_AMyGCObserver_NoRegister();
ADVANCEDCLASS_API UClass* Z_Construct_UClass_UMyTestObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AdvancedClass();
// End Cross Module References

// Begin Class AMyGCObserver Function TryToUseObjects
struct Z_Construct_UFunction_AMyGCObserver_TryToUseObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MyGCObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGCObserver_TryToUseObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGCObserver, nullptr, "TryToUseObjects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGCObserver_TryToUseObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGCObserver_TryToUseObjects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyGCObserver_TryToUseObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGCObserver_TryToUseObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGCObserver::execTryToUseObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryToUseObjects();
	P_NATIVE_END;
}
// End Class AMyGCObserver Function TryToUseObjects

// Begin Class AMyGCObserver
void AMyGCObserver::StaticRegisterNativesAMyGCObserver()
{
	UClass* Class = AMyGCObserver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TryToUseObjects", &AMyGCObserver::execTryToUseObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGCObserver);
UClass* Z_Construct_UClass_AMyGCObserver_NoRegister()
{
	return AMyGCObserver::StaticClass();
}
struct Z_Construct_UClass_AMyGCObserver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyGCObserver.h" },
		{ "ModuleRelativePath", "Private/MyGCObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/MyGCObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SafeObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGCObserver_TryToUseObjects, "TryToUseObjects" }, // 3998158728
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGCObserver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGCObserver_Statics::NewProp_SafeObject = { "SafeObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGCObserver, SafeObject), Z_Construct_UClass_UMyTestObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeObject_MetaData), NewProp_SafeObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGCObserver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGCObserver_Statics::NewProp_SafeObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGCObserver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGCObserver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGCObserver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGCObserver_Statics::ClassParams = {
	&AMyGCObserver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyGCObserver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGCObserver_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGCObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGCObserver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGCObserver()
{
	if (!Z_Registration_Info_UClass_AMyGCObserver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGCObserver.OuterSingleton, Z_Construct_UClass_AMyGCObserver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGCObserver.OuterSingleton;
}
template<> ADVANCEDCLASS_API UClass* StaticClass<AMyGCObserver>()
{
	return AMyGCObserver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGCObserver);
AMyGCObserver::~AMyGCObserver() {}
// End Class AMyGCObserver

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGCObserver, AMyGCObserver::StaticClass, TEXT("AMyGCObserver"), &Z_Registration_Info_UClass_AMyGCObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGCObserver), 643581584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_1596643536(TEXT("/Script/AdvancedClass"),
	Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
