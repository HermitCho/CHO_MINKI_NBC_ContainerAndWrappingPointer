// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SecondActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDCLASS_SecondActor_generated_h
#error "SecondActor.generated.h already included, missing '#pragma once' in SecondActor.h"
#endif
#define ADVANCEDCLASS_SecondActor_generated_h

#define FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASecondActor(); \
	friend struct Z_Construct_UClass_ASecondActor_Statics; \
public: \
	DECLARE_CLASS(ASecondActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedClass"), NO_API) \
	DECLARE_SERIALIZER(ASecondActor)


#define FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASecondActor(ASecondActor&&); \
	ASecondActor(const ASecondActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASecondActor) \
	NO_API virtual ~ASecondActor();


#define FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_9_PROLOG
#define FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCLASS_API UClass* StaticClass<class ASecondActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedClass_Source_AdvancedClass_Public_SecondActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
