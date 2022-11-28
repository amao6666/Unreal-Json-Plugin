// Fill out your copyright notice in the Description page of Project Settings.


#include "MyJsonObject.h"

#include "MyJsonValue.h"

FString UMyJsonObject::GetStringField(const FString& FieldName) const
{
	if (NativeJsonObject)
	{
		return NativeJsonObject->GetStringField(FieldName);
	}
	return TEXT("");
}

bool UMyJsonObject::GetBoolField(const FString& FieldName) const
{
	if (NativeJsonObject)
	{
		return NativeJsonObject->GetBoolField(FieldName);
	}
	return false;
}

int32 UMyJsonObject::GetIntegerField(const FString& FieldName) const
{
	if (NativeJsonObject)
	{
		return NativeJsonObject->GetIntegerField(FieldName);
	}
	return 0;
}

TArray<UMyJsonValue*> UMyJsonObject::GetArrayField(const FString& FieldName) const
{
	TArray<UMyJsonValue*> MyJsonValues;
	if (NativeJsonObject)
	{
		TArray<TSharedPtr<FJsonValue>> JsonValues = NativeJsonObject->GetArrayField(FieldName);
		for (auto JV : JsonValues)
		{
			UMyJsonValue* MyJsonValue = NewObject<UMyJsonValue>(GetOuter());
			MyJsonValue->SetNativeJsonValue(JV);
			MyJsonValues.Add(MyJsonValue);
		}
		return MyJsonValues;
	}
	return MyJsonValues;
}

void UMyJsonObject::SetStringField(const FString& FieldName, const FString& Value)
{
	if (NativeJsonObject)
	{
		NativeJsonObject->SetStringField(FieldName, Value);
	}
}

void UMyJsonObject::SetBoolField(const FString& FieldName, bool Value)
{
	if (NativeJsonObject)
	{
		NativeJsonObject->SetBoolField(FieldName, Value);
	}
}

void UMyJsonObject::SetIntegerField(const FString& FieldName, int32 Value)
{
	if (NativeJsonObject)
	{
		NativeJsonObject->SetNumberField(FieldName, Value);
	}
}

void UMyJsonObject::SetNativeJsonObject(const TSharedPtr<FJsonObject> OutJsonObject)
{
	NativeJsonObject = OutJsonObject;
}

TSharedPtr<FJsonObject> UMyJsonObject::GetNativeObject()
{
	return NativeJsonObject;
}
