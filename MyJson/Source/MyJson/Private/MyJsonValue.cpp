// Fill out your copyright notice in the Description page of Project Settings.


#include "MyJsonValue.h"

#include "MyJsonObject.h"

int32 UMyJsonValue::AsNumber()
{
	if (NativeJsonValue)
	{
		return NativeJsonValue->AsNumber();
	}
	return 0;
}

FString UMyJsonValue::AsString()
{
	if (NativeJsonValue)
	{
		return NativeJsonValue->AsString();
	}
	return TEXT("");
}

UMyJsonObject* UMyJsonValue::AsObject()
{
	if (NativeJsonValue)
	{
		TSharedPtr<FJsonObject> NativeJsonObject = NativeJsonValue->AsObject();
		UMyJsonObject* MyJsonObject = NewObject<UMyJsonObject>(GetOuter());
		MyJsonObject->SetNativeJsonObject(NativeJsonObject);
		return MyJsonObject; 
	}
	return nullptr;
}

void UMyJsonValue::SetNativeJsonValue(TSharedPtr<FJsonValue> OutJsonValue)
{
	NativeJsonValue = OutJsonValue;
}

TSharedPtr<FJsonValue> UMyJsonValue::GetNativeJsonValue()
{
	return NativeJsonValue;
}
