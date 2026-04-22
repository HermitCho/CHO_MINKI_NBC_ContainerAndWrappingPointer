// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedClass/Public/SecondAssignmentInv.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondAssignmentInv() {}

// Begin Cross Module References
ADVANCEDCLASS_API UClass* Z_Construct_UClass_ASecondAssignmentInv();
ADVANCEDCLASS_API UClass* Z_Construct_UClass_ASecondAssignmentInv_NoRegister();
ADVANCEDCLASS_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AdvancedClass();
// End Cross Module References

// Begin ScriptStruct FItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_AdvancedClass(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> ADVANCEDCLASS_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInfo_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedTitle_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NeedTitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCount_MetaData), NewProp_ItemCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInfo_MetaData), NewProp_ItemInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NeedTitle = { "NeedTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, NeedTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedTitle_MetaData), NewProp_NeedTitle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NeedTitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedClass,
	nullptr,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin Class ASecondAssignmentInv
void ASecondAssignmentInv::StaticRegisterNativesASecondAssignmentInv()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondAssignmentInv);
UClass* Z_Construct_UClass_ASecondAssignmentInv_NoRegister()
{
	return ASecondAssignmentInv::StaticClass();
}
struct Z_Construct_UClass_ASecondAssignmentInv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SecondAssignmentInv.h" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bag_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMap_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Titles_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SecondAssignmentInv.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Bag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ItemMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Titles_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Titles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondAssignmentInv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Bag_Inner = { "Bag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Bag = { "Bag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondAssignmentInv, Bag), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bag_MetaData), NewProp_Bag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_ItemMap_ValueProp = { "ItemMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4001187228
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_ItemMap_Key_KeyProp = { "ItemMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_ItemMap = { "ItemMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondAssignmentInv, ItemMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMap_MetaData), NewProp_ItemMap_MetaData) }; // 4001187228
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Titles_ElementProp = { "Titles", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Titles = { "Titles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondAssignmentInv, Titles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Titles_MetaData), NewProp_Titles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASecondAssignmentInv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Bag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Bag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_ItemMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_ItemMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_ItemMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Titles_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondAssignmentInv_Statics::NewProp_Titles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondAssignmentInv_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASecondAssignmentInv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondAssignmentInv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondAssignmentInv_Statics::ClassParams = {
	&ASecondAssignmentInv::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASecondAssignmentInv_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASecondAssignmentInv_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondAssignmentInv_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondAssignmentInv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondAssignmentInv()
{
	if (!Z_Registration_Info_UClass_ASecondAssignmentInv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondAssignmentInv.OuterSingleton, Z_Construct_UClass_ASecondAssignmentInv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondAssignmentInv.OuterSingleton;
}
template<> ADVANCEDCLASS_API UClass* StaticClass<ASecondAssignmentInv>()
{
	return ASecondAssignmentInv::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondAssignmentInv);
ASecondAssignmentInv::~ASecondAssignmentInv() {}
// End Class ASecondAssignmentInv

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondAssignmentInv_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 4001187228U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondAssignmentInv, ASecondAssignmentInv::StaticClass, TEXT("ASecondAssignmentInv"), &Z_Registration_Info_UClass_ASecondAssignmentInv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondAssignmentInv), 3019142642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondAssignmentInv_h_3200637234(TEXT("/Script/AdvancedClass"),
	Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondAssignmentInv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondAssignmentInv_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondAssignmentInv_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedClass_Source_AdvancedClass_Public_SecondAssignmentInv_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
