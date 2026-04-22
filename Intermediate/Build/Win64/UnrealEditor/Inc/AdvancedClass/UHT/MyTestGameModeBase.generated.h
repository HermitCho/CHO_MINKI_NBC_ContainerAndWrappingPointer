// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDCLASS_MyTestGameModeBase_generated_h
#error "MyTestGameModeBase.generated.h already included, missing '#pragma once' in MyTestGameModeBase.h"
#endif
#define ADVANCEDCLASS_MyTestGameModeBase_generated_h

#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestGameModeBase(); \
	friend struct Z_Construct_UClass_AMyTestGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedClass"), NO_API) \
	DECLARE_SERIALIZER(AMyTestGameModeBase)


#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyTestGameModeBase(AMyTestGameModeBase&&); \
	AMyTestGameModeBase(const AMyTestGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestGameModeBase) \
	NO_API virtual ~AMyTestGameModeBase();


#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_12_PROLOG
#define FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCLASS_API UClass* StaticClass<class AMyTestGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedClass_Source_AdvancedClass_Private_MyTestGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
