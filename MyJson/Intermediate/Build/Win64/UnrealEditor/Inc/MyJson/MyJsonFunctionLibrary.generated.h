// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyJsonValue;
class UMyJsonObject;
class UObject;
#ifdef MYJSON_MyJsonFunctionLibrary_generated_h
#error "MyJsonFunctionLibrary.generated.h already included, missing '#pragma once' in MyJsonFunctionLibrary.h"
#endif
#define MYJSON_MyJsonFunctionLibrary_generated_h

#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_SPARSE_DATA
#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSerializeArray); \
	DECLARE_FUNCTION(execSerializeObject); \
	DECLARE_FUNCTION(execDeserializeArray); \
	DECLARE_FUNCTION(execDeserializeObject); \
	DECLARE_FUNCTION(execMakeMyJsonValueObject); \
	DECLARE_FUNCTION(execMakeMyJsonValueInteger); \
	DECLARE_FUNCTION(execMakeMyJsonValueBool); \
	DECLARE_FUNCTION(execMakeMyJsonValueString); \
	DECLARE_FUNCTION(execMakeMyJsonObject);


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSerializeArray); \
	DECLARE_FUNCTION(execSerializeObject); \
	DECLARE_FUNCTION(execDeserializeArray); \
	DECLARE_FUNCTION(execDeserializeObject); \
	DECLARE_FUNCTION(execMakeMyJsonValueObject); \
	DECLARE_FUNCTION(execMakeMyJsonValueInteger); \
	DECLARE_FUNCTION(execMakeMyJsonValueBool); \
	DECLARE_FUNCTION(execMakeMyJsonValueString); \
	DECLARE_FUNCTION(execMakeMyJsonObject);


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyJsonFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyJsonFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyJsonFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyJson"), NO_API) \
	DECLARE_SERIALIZER(UMyJsonFunctionLibrary)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMyJsonFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyJsonFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyJsonFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyJson"), NO_API) \
	DECLARE_SERIALIZER(UMyJsonFunctionLibrary)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyJsonFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyJsonFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyJsonFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyJsonFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyJsonFunctionLibrary(UMyJsonFunctionLibrary&&); \
	NO_API UMyJsonFunctionLibrary(const UMyJsonFunctionLibrary&); \
public:


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyJsonFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyJsonFunctionLibrary(UMyJsonFunctionLibrary&&); \
	NO_API UMyJsonFunctionLibrary(const UMyJsonFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyJsonFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyJsonFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyJsonFunctionLibrary)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_14_PROLOG
#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_SPARSE_DATA \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_RPC_WRAPPERS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_INCLASS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_SPARSE_DATA \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYJSON_API UClass* StaticClass<class UMyJsonFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
