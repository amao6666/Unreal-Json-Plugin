// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyJsonObject.generated.h"

class UMyJsonValue;

/**
 * 
 */
UCLASS(BlueprintType)
class MYJSON_API UMyJsonObject : public UObject
{
	GENERATED_BODY()
	TSharedPtr<FJsonObject> NativeJsonObject;
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="My|JsonObject")
	FString GetStringField(const FString& FieldName) const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="My|JsonObject")
	bool GetBoolField(const FString& FieldName) const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="My|JsonObject")
	int32 GetIntegerField(const FString& FieldName) const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="My|JsonObject")
	TArray<UMyJsonValue*> GetArrayField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category="My|JsonObject")
	void SetStringField(const FString& FieldName, const FString& Value);
	UFUNCTION(BlueprintCallable, Category="My|JsonObject")
	void SetBoolField(const FString& FieldName, bool Value);
	UFUNCTION(BlueprintCallable, Category="My|JsonObject")
	void SetIntegerField(const FString& FieldName, int32 Value);
	
	void SetNativeJsonObject(const TSharedPtr<FJsonObject> OutJsonObject);
	TSharedPtr<FJsonObject> GetNativeObject();
};
