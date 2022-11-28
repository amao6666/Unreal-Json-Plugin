// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyJsonValue;
#ifdef MYJSON_MyJsonObject_generated_h
#error "MyJsonObject.generated.h already included, missing '#pragma once' in MyJsonObject.h"
#endif
#define MYJSON_MyJsonObject_generated_h

#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_SPARSE_DATA
#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execGetStringField);


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execGetStringField);


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyJsonObject(); \
	friend struct Z_Construct_UClass_UMyJsonObject_Statics; \
public: \
	DECLARE_CLASS(UMyJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyJson"), NO_API) \
	DECLARE_SERIALIZER(UMyJsonObject)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMyJsonObject(); \
	friend struct Z_Construct_UClass_UMyJsonObject_Statics; \
public: \
	DECLARE_CLASS(UMyJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyJson"), NO_API) \
	DECLARE_SERIALIZER(UMyJsonObject)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyJsonObject(UMyJsonObject&&); \
	NO_API UMyJsonObject(const UMyJsonObject&); \
public:


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyJsonObject(UMyJsonObject&&); \
	NO_API UMyJsonObject(const UMyJsonObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyJsonObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyJsonObject)


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_14_PROLOG
#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_SPARSE_DATA \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_RPC_WRAPPERS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_INCLASS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_SPARSE_DATA \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_INCLASS_NO_PURE_DECLS \
	FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYJSON_API UClass* StaticClass<class UMyJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
