// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyJson/Public/MyJsonValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyJsonValue() {}
// Cross Module References
	MYJSON_API UClass* Z_Construct_UClass_UMyJsonValue_NoRegister();
	MYJSON_API UClass* Z_Construct_UClass_UMyJsonValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MyJson();
	MYJSON_API UClass* Z_Construct_UClass_UMyJsonObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyJsonValue::execAsObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyJsonObject**)Z_Param__Result=P_THIS->AsObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonValue::execAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyJsonValue::execAsNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AsNumber();
		P_NATIVE_END;
	}
	void UMyJsonValue::StaticRegisterNativesUMyJsonValue()
	{
		UClass* Class = UMyJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsNumber", &UMyJsonValue::execAsNumber },
			{ "AsObject", &UMyJsonValue::execAsObject },
			{ "AsString", &UMyJsonValue::execAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics
	{
		struct MyJsonValue_eventAsNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|JsonValue" },
		{ "ModuleRelativePath", "Public/MyJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonValue, nullptr, "AsNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::MyJsonValue_eventAsNumber_Parms), Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonValue_AsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonValue_AsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonValue_AsObject_Statics
	{
		struct MyJsonValue_eventAsObject_Parms
		{
			UMyJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UMyJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|JsonValue" },
		{ "ModuleRelativePath", "Public/MyJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonValue, nullptr, "AsObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::MyJsonValue_eventAsObject_Parms), Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonValue_AsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonValue_AsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyJsonValue_AsString_Statics
	{
		struct MyJsonValue_eventAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJsonValue_AsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJsonValue_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyJsonValue_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "My|JsonValue" },
		{ "ModuleRelativePath", "Public/MyJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJsonValue, nullptr, "AsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyJsonValue_AsString_Statics::MyJsonValue_eventAsString_Parms), Z_Construct_UFunction_UMyJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonValue_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyJsonValue_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJsonValue_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyJsonValue_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJsonValue_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyJsonValue);
	UClass* Z_Construct_UClass_UMyJsonValue_NoRegister()
	{
		return UMyJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_UMyJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyJsonValue_AsNumber, "AsNumber" }, // 3113764738
		{ &Z_Construct_UFunction_UMyJsonValue_AsObject, "AsObject" }, // 2441261507
		{ &Z_Construct_UFunction_UMyJsonValue_AsString, "AsString" }, // 300205689
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyJsonValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyJsonValue.h" },
		{ "ModuleRelativePath", "Public/MyJsonValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyJsonValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyJsonValue_Statics::ClassParams = {
		&UMyJsonValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyJsonValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyJsonValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyJsonValue()
	{
		if (!Z_Registration_Info_UClass_UMyJsonValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyJsonValue.OuterSingleton, Z_Construct_UClass_UMyJsonValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyJsonValue.OuterSingleton;
	}
	template<> MYJSON_API UClass* StaticClass<UMyJsonValue>()
	{
		return UMyJsonValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyJsonValue);
	struct Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyJsonValue, UMyJsonValue::StaticClass, TEXT("UMyJsonValue"), &Z_Registration_Info_UClass_UMyJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyJsonValue), 1434913987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_1924430038(TEXT("/Script/MyJson"),
		Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECpp_Plugins_MyJson_Source_MyJson_Public_MyJsonValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
