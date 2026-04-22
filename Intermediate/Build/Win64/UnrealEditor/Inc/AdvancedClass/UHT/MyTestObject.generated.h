// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDCLASS_MyTestObject_generated_h
#error "MyTestObject.generated.h already included, missing '#pragma once' in MyTestObject.h"
#endif
#define ADVANCEDCLASS_MyTestObject_generated_h

#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyTestObject(); \
	friend struct Z_Construct_UClass_UMyTestObject_Statics; \
public: \
	DECLARE_CLASS(UMyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedClass"), NO_API) \
	DECLARE_SERIALIZER(UMyTestObject)


#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyTestObject(UMyTestObject&&); \
	UMyTestObject(const UMyTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyTestObject) \
	NO_API virtual ~UMyTestObject();


#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_12_PROLOG
#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCLASS_API UClass* StaticClass<class UMyTestObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedClass_Source_AdvancedClass_Private_MyTestObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
