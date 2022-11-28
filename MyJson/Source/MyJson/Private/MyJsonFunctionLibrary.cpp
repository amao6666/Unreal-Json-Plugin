// Fill out your copyright notice in the Description page of Project Settings.


#include "MyJsonFunctionLibrary.h"
#include "MyJsonObject.h"
#include "MyJsonValue.h"

bool UMyJsonFunctionLibrary::DeserializeObject(UObject* WorldContextObject, const FString JsonObjectStr,
                                               UMyJsonObject*& MyJsonObject)
{
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonObjectStr);
	TSharedPtr<FJsonObject> JsonRoot;
	if (FJsonSerializer::Deserialize(JsonReader, JsonRoot))
	{
		MyJsonObject = NewObject<UMyJsonObject>(WorldContextObject);
		MyJsonObject->SetNativeJsonObject(JsonRoot);
		return true;
	}
	return false;
}

bool UMyJsonFunctionLibrary::DeserializeArray(UObject* WorldContextObject, const FString JsonArrayStr,
	TArray<UMyJsonValue*>& MyJsonValues)
{
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonArrayStr);
	TArray<TSharedPtr<FJsonValue>> JsonValues;
	
	if (FJsonSerializer::Deserialize(JsonReader, JsonValues))
	{
		for (auto JV:JsonValues)
		{
			UMyJsonValue* MyJsonValue = NewObject<UMyJsonValue>(WorldContextObject);
			MyJsonValue->SetNativeJsonValue(JV);
			MyJsonValues.Add(MyJsonValue);
		}
		return true;
	}
	return false;
}

bool UMyJsonFunctionLibrary::SerializeObject(UMyJsonObject* MyJsonObject, FString& JsonObjectStr)
{
	if (MyJsonObject && MyJsonObject->GetNativeObject())
	{
		TSharedRef<TJsonWriter<>> JsonWriter = TJsonWriterFactory<>::Create(&JsonObjectStr);
	    return FJsonSerializer::Serialize(MyJsonObject->GetNativeObject().ToSharedRef(), JsonWriter);
	}
	return false;
}

bool UMyJsonFunctionLibrary::SerializeArray(TArray<UMyJsonValue*>& MyJsonValues, FString& JsonObjectStr)
{
	TArray<TSharedPtr<FJsonValue>> JsonValues;
	for (auto MyJV : MyJsonValues)
	{
		JsonValues.Add(MyJV->GetNativeJsonValue());
	}
	TSharedRef<TJsonWriter<>> JsonWriter = TJsonWriterFactory<>::Create(&JsonObjectStr);
	return FJsonSerializer::Serialize(JsonValues, JsonWriter);
}

UMyJsonObject* UMyJsonFunctionLibrary::MakeMyJsonObject(UObject* WorldContextObject)
{
	UMyJsonObject* MyJsonObject = NewObject<UMyJsonObject>(WorldContextObject);
	MyJsonObject->SetNativeJsonObject(MakeShareable(new FJsonObject));
	return MyJsonObject;
}

UMyJsonValue* UMyJsonFunctionLibrary::MakeMyJsonValueString(UObject* WorldContextObject, FString& Value)
{
	UMyJsonValue* MyJsonValue = NewObject<UMyJsonValue>(WorldContextObject);
	MyJsonValue->SetNativeJsonValue(MakeShareable(new FJsonValueString(Value)));
	return MyJsonValue;
}

UMyJsonValue* UMyJsonFunctionLibrary::MakeMyJsonValueBool(UObject* WorldContextObject, bool& Value)
{
	UMyJsonValue* MyJsonValue = NewObject<UMyJsonValue>(WorldContextObject);
	MyJsonValue->SetNativeJsonValue(MakeShareable(new FJsonValueBoolean(Value)));
	return MyJsonValue;
}

UMyJsonValue* UMyJsonFunctionLibrary::MakeMyJsonValueInteger(UObject* WorldContextObject, int32& Value)
{
	UMyJsonValue* MyJsonValue = NewObject<UMyJsonValue>(WorldContextObject);
	MyJsonValue->SetNativeJsonValue(MakeShareable(new FJsonValueNumber(Value)));
	return MyJsonValue;
}

UMyJsonValue* UMyJsonFunctionLibrary::MakeMyJsonValueObject(UObject* WorldContextObject, UMyJsonObject*& Object)
{
	UMyJsonValue* MyJsonValue = NewObject<UMyJsonValue>(WorldContextObject);
	MyJsonValue->SetNativeJsonValue(MakeShareable(new FJsonValueObject(Object->GetNativeObject())));
	return MyJsonValue;
}
