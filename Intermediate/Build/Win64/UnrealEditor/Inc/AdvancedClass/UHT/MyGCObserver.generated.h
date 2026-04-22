// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGCObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDCLASS_MyGCObserver_generated_h
#error "MyGCObserver.generated.h already included, missing '#pragma once' in MyGCObserver.h"
#endif
#define ADVANCEDCLASS_MyGCObserver_generated_h

#define FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryToUseObjects);


#define FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGCObserver(); \
	friend struct Z_Construct_UClass_AMyGCObserver_Statics; \
public: \
	DECLARE_CLASS(AMyGCObserver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedClass"), NO_API) \
	DECLARE_SERIALIZER(AMyGCObserver)


#define FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyGCObserver(AMyGCObserver&&); \
	AMyGCObserver(const AMyGCObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGCObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGCObserver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGCObserver) \
	NO_API virtual ~AMyGCObserver();


#define FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_9_PROLOG
#define FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_12_INCLASS_NO_PURE_DECLS \
	FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCLASS_API UClass* StaticClass<class AMyGCObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedClass_Source_AdvancedClass_Private_MyGCObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
