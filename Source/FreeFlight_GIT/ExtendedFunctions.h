// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "ExtendedFunctions.generated.h"


/**
 * 
 */
UCLASS()
class FREEFLIGHT_GIT_API UExtendedFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "TobiasBPLibrary")
		static float calculateBreak(float currentSpeed, float decelerationValue);
	UFUNCTION(BlueprintCallable, Category = "Array")
		static int32 getRandomElementIndexFromRange(int32 size, TArray<int32> excludedIndices);
	
};
