// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyJsonObject;
#ifdef MYJSON_MyJsonValue_generated_h
#error "MyJsonValue.generated.h already included, missing '#pragma once' in MyJsonValue.h"
#endif
#define MYJSON_MyJsonValue_generated_h

#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_SPARSE_DATA
#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsNumber);


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsNumber);


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyJsonValue(); \
	friend struct Z_Construct_UClass_UMyJsonValue_Statics; \
public: \
	DECLARE_CLASS(UMyJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyJson"), NO_API) \
	DECLARE_SERIALIZER(UMyJsonValue)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMyJsonValue(); \
	friend struct Z_Construct_UClass_UMyJsonValue_Statics; \
public: \
	DECLARE_CLASS(UMyJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyJson"), NO_API) \
	DECLARE_SERIALIZER(UMyJsonValue)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyJsonValue(UMyJsonValue&&); \
	NO_API UMyJsonValue(const UMyJsonValue&); \
public:


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyJsonValue(UMyJsonValue&&); \
	NO_API UMyJsonValue(const UMyJsonValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyJsonValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyJsonValue)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_14_PROLOG
#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_SPARSE_DATA \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_RPC_WRAPPERS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_INCLASS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_SPARSE_DATA \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_INCLASS_NO_PURE_DECLS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYJSON_API UClass* StaticClass<class UMyJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
