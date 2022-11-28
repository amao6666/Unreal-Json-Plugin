// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyJsonValue.generated.h"

class UMyJsonObject;

/**
 * 
 */
UCLASS()
class MYJSON_API UMyJsonValue : public UObject
{
	GENERATED_BODY()

	TSharedPtr<FJsonValue> NativeJsonValue;
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="My|JsonValue")
	int32 AsNumber();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="My|JsonValue")
	FString AsString();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="My|JsonValue")
	UMyJsonObject* AsObject();
	void SetNativeJsonValue(TSharedPtr<FJsonValue> OutJsonValue);
	TSharedPtr<FJsonValue> GetNativeJsonValue();
};
