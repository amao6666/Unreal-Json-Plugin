// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyJsonFunctionLibrary.generated.h"

class UMyJsonObject;
class UMyJsonValue;

/**
 * 
 */
UCLASS()
class MYJSON_API UMyJsonFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="My|Json", meta=(WorldContext="WorldContextObject"))
	static UMyJsonObject* MakeMyJsonObject(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category="My|Json", meta=(WorldContext="WorldContextObject"))
	static UMyJsonValue* MakeMyJsonValueString(UObject* WorldContextObject, FString& Value);

	UFUNCTION(BlueprintCallable, Category="My|Json", meta=(WorldContext="WorldContextObject"))
	static UMyJsonValue* MakeMyJsonValueBool(UObject* WorldContextObject, bool& Value);

	UFUNCTION(BlueprintCallable, Category="My|Json", meta=(WorldContext="WorldContextObject"))
	static UMyJsonValue* MakeMyJsonValueInteger(UObject* WorldContextObject, int32& Value);

	UFUNCTION(BlueprintCallable, Category="My|Json", meta=(WorldContext="WorldContextObject"))
	static UMyJsonValue* MakeMyJsonValueObject(UObject* WorldContextObject, UMyJsonObject*& Object);
	
	UFUNCTION(BlueprintCallable, Category="My|Json", meta=(WorldContext="WorldContextObject"))
	static bool DeserializeObject(UObject* WorldContextObject, const FString JsonObjectStr, UMyJsonObject*& MyJsonObject);

	UFUNCTION(BlueprintCallable, Category="My|Json", meta=(WorldContext="WorldContextObject"))
	static bool DeserializeArray(UObject* WorldContextObject, const FString JsonArrayStr, TArray<UMyJsonValue*>& MyJsonValues);

	UFUNCTION(BlueprintCallable, Category="My|Json")
	static bool SerializeObject(UMyJsonObject* MyJsonObject, FString& JsonObjectStr);

	UFUNCTION(BlueprintCallable, Category="My|Json")
	static bool SerializeArray(TArray<UMyJsonValue*>& MyJsonValues, FString& JsonObjectStr);
};
