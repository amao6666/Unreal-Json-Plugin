// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyJson/Public/MyJsonFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyJsonFunctionLibrary() {}
// Cross Module References
	MYJSON_API UClass* Z_Construct_UClass_UMyJsonFunctionLibrary_NoRegister();
	MYJSON_API UClass* Z_Construct_UClass_UMyJsonFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyJson();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MYJSON_API UClass* Z_Construct_UClass_UMyJsonValue_NoRegister();
	MYJSON_API UClass* Z_Construct_UClass_UMyJsonObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execSerializeArray)
	{
		P_GET_TARRAY_REF(UMyJsonValue*,Z_Param_Out_MyJsonValues);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JsonObjectStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMyJsonFunctionLibrary::SerializeArray(Z_Param_Out_MyJsonValues,Z_Param_Out_JsonObjectStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execSerializeObject)
	{
		P_GET_OBJECT(UMyJsonObject,Z_Param_MyJsonObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JsonObjectStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMyJsonFunctionLibrary::SerializeObject(Z_Param_MyJsonObject,Z_Param_Out_JsonObjectStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execDeserializeArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonArrayStr);
		P_GET_TARRAY_REF(UMyJsonValue*,Z_Param_Out_MyJsonValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMyJsonFunctionLibrary::DeserializeArray(Z_Param_WorldContextObject,Z_Param_JsonArrayStr,Z_Param_Out_MyJsonValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execDeserializeObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonObjectStr);
		P_GET_OBJECT_REF(UMyJsonObject,Z_Param_Out_MyJsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMyJsonFunctionLibrary::DeserializeObject(Z_Param_WorldContextObject,Z_Param_JsonObjectStr,Z_Param_Out_MyJsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execMakeMyJsonValueObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UMyJsonObject,Z_Param_Out_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyJsonValue**)Z_Param__Result=UMyJsonFunctionLibrary::MakeMyJsonValueObject(Z_Param_WorldContextObject,Z_Param_Out_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execMakeMyJsonValueInteger)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyJsonValue**)Z_Param__Result=UMyJsonFunctionLibrary::MakeMyJsonValueInteger(Z_Param_WorldContextObject,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execMakeMyJsonValueBool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyJsonValue**)Z_Param__Result=UMyJsonFunctionLibrary::MakeMyJsonValueBool(Z_Param_WorldContextObject,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execMakeMyJsonValueString)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyJsonValue**)Z_Param__Result=UMyJsonFunctionLibrary::MakeMyJsonValueString(Z_Param_WorldContextObject,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonFunctionLibrary::execMakeMyJsonObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyJsonObject**)Z_Param__Result=UMyJsonFunctionLibrary::MakeMyJsonObject(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UMyJsonFunctionLibrary::StaticRegisterNativesUMyJsonFunctionLibrary()
	{
		UClass* Class = UMyJsonFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeserializeArray", &UMyJsonFunctionLibrary::execDeserializeArray },
			{ "DeserializeObject", &UMyJsonFunctionLibrary::execDeserializeObject },
			{ "MakeMyJsonObject", &UMyJsonFunctionLibrary::execMakeMyJsonObject },
			{ "MakeMyJsonValueBool", &UMyJsonFunctionLibrary::execMakeMyJsonValueBool },
			{ "MakeMyJsonValueInteger", &UMyJsonFunctionLibrary::execMakeMyJsonValueInteger },
			{ "MakeMyJsonValueObject", &UMyJsonFunctionLibrary::execMakeMyJsonValueObject },
			{ "MakeMyJsonValueString", &UMyJsonFunctionLibrary::execMakeMyJsonValueString },
			{ "SerializeArray", &UMyJsonFunctionLibrary::execSerializeArray },
			{ "SerializeObject", &UMyJsonFunctionLibrary::execSerializeObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics
	{
		struct MyJsonFunctionLibrary_eventDeserializeArray_Parms
		{
			UObject* WorldContextObject;
			FString JsonArrayStr;
			TArray<UMyJsonValue*> MyJsonValues;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonArrayStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonArrayStr;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyJsonValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyJsonValues;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventDeserializeArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_JsonArrayStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_JsonArrayStr = { "JsonArrayStr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventDeserializeArray_Parms, JsonArrayStr), METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_JsonArrayStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_JsonArrayStr_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_MyJsonValues_Inner = { "MyJsonValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_MyJsonValues = { "MyJsonValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventDeserializeArray_Parms, MyJsonValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyJsonFunctionLibrary_eventDeserializeArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyJsonFunctionLibrary_eventDeserializeArray_Parms), &Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_JsonArrayStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_MyJsonValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_MyJsonValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "DeserializeArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::MyJsonFunctionLibrary_eventDeserializeArray_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics
	{
		struct MyJsonFunctionLibrary_eventDeserializeObject_Parms
		{
			UObject* WorldContextObject;
			FString JsonObjectStr;
			UMyJsonObject* MyJsonObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObjectStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonObjectStr;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyJsonObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventDeserializeObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_JsonObjectStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_JsonObjectStr = { "JsonObjectStr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventDeserializeObject_Parms, JsonObjectStr), METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_JsonObjectStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_JsonObjectStr_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_MyJsonObject = { "MyJsonObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventDeserializeObject_Parms, MyJsonObject), Z_Construct_UClass_UMyJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyJsonFunctionLibrary_eventDeserializeObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyJsonFunctionLibrary_eventDeserializeObject_Parms), &Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_JsonObjectStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_MyJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "DeserializeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::MyJsonFunctionLibrary_eventDeserializeObject_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics
	{
		struct MyJsonFunctionLibrary_eventMakeMyJsonObject_Parms
		{
			UObject* WorldContextObject;
			UMyJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonObject_Parms, ReturnValue), Z_Construct_UClass_UMyJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "MakeMyJsonObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::MyJsonFunctionLibrary_eventMakeMyJsonObject_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics
	{
		struct MyJsonFunctionLibrary_eventMakeMyJsonValueBool_Parms
		{
			UObject* WorldContextObject;
			bool Value;
			UMyJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueBool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((MyJsonFunctionLibrary_eventMakeMyJsonValueBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyJsonFunctionLibrary_eventMakeMyJsonValueBool_Parms), &Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UMyJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "MakeMyJsonValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::MyJsonFunctionLibrary_eventMakeMyJsonValueBool_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics
	{
		struct MyJsonFunctionLibrary_eventMakeMyJsonValueInteger_Parms
		{
			UObject* WorldContextObject;
			int32 Value;
			UMyJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueInteger_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueInteger_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueInteger_Parms, ReturnValue), Z_Construct_UClass_UMyJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "MakeMyJsonValueInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::MyJsonFunctionLibrary_eventMakeMyJsonValueInteger_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics
	{
		struct MyJsonFunctionLibrary_eventMakeMyJsonValueObject_Parms
		{
			UObject* WorldContextObject;
			UMyJsonObject* Object;
			UMyJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueObject_Parms, Object), Z_Construct_UClass_UMyJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UMyJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "MakeMyJsonValueObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::MyJsonFunctionLibrary_eventMakeMyJsonValueObject_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics
	{
		struct MyJsonFunctionLibrary_eventMakeMyJsonValueString_Parms
		{
			UObject* WorldContextObject;
			FString Value;
			UMyJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventMakeMyJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UMyJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "MakeMyJsonValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::MyJsonFunctionLibrary_eventMakeMyJsonValueString_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics
	{
		struct MyJsonFunctionLibrary_eventSerializeArray_Parms
		{
			TArray<UMyJsonValue*> MyJsonValues;
			FString JsonObjectStr;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyJsonValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyJsonValues;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonObjectStr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_MyJsonValues_Inner = { "MyJsonValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_MyJsonValues = { "MyJsonValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventSerializeArray_Parms, MyJsonValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_JsonObjectStr = { "JsonObjectStr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventSerializeArray_Parms, JsonObjectStr), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyJsonFunctionLibrary_eventSerializeArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyJsonFunctionLibrary_eventSerializeArray_Parms), &Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_MyJsonValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_MyJsonValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_JsonObjectStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "SerializeArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::MyJsonFunctionLibrary_eventSerializeArray_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics
	{
		struct MyJsonFunctionLibrary_eventSerializeObject_Parms
		{
			UMyJsonObject* MyJsonObject;
			FString JsonObjectStr;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyJsonObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonObjectStr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_MyJsonObject = { "MyJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventSerializeObject_Parms, MyJsonObject), Z_Construct_UClass_UMyJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_JsonObjectStr = { "JsonObjectStr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonFunctionLibrary_eventSerializeObject_Parms, JsonObjectStr), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyJsonFunctionLibrary_eventSerializeObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyJsonFunctionLibrary_eventSerializeObject_Parms), &Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_MyJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_JsonObjectStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|Json" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonFunctionLibrary, nullptr, "SerializeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::MyJsonFunctionLibrary_eventSerializeObject_Parms), Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyJsonFunctionLibrary);
	UClass* Z_Construct_UClass_UMyJsonFunctionLibrary_NoRegister()
	{
		return UMyJsonFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyJsonFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeArray, "DeserializeArray" }, // 3687483415
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_DeserializeObject, "DeserializeObject" }, // 1877749987
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonObject, "MakeMyJsonObject" }, // 1161192212
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueBool, "MakeMyJsonValueBool" }, // 620234882
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueInteger, "MakeMyJsonValueInteger" }, // 2195250813
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueObject, "MakeMyJsonValueObject" }, // 2908546103
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_MakeMyJsonValueString, "MakeMyJsonValueString" }, // 2541986807
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeArray, "SerializeArray" }, // 266820816
		{ &Z_Construct_UFunction_UMyJsonFunctionLibrary_SerializeObject, "SerializeObject" }, // 85125198
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyJsonFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyJsonFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyJsonFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::ClassParams = {
		&UMyJsonFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyJsonFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMyJsonFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyJsonFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyJsonFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyJsonFunctionLibrary.OuterSingleton;
	}
	template<> MYJSON_API UClass* StaticClass<UMyJsonFunctionLibrary>()
	{
		return UMyJsonFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyJsonFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyJsonFunctionLibrary, UMyJsonFunctionLibrary::StaticClass, TEXT("UMyJsonFunctionLibrary"), &Z_Registration_Info_UClass_UMyJsonFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyJsonFunctionLibrary), 2963694530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_1495851863(TEXT("/Script/MyJson"),
		Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
