// Fill out your copyright notice in the Description page of Project Settings.

#include "FreeFlight_GIT.h"
#include "ExtendedFunctions.h"

float UExtendedFunctions::calculateBreak(float currentSpeed, float decelerationValue){
	float result;
	result = 0;
	if (currentSpeed > 0){
		result = decelerationValue*-1;
	}
	else if(currentSpeed < 0){
		result = decelerationValue;
	}
	return result;
}

int32 UExtendedFunctions::getRandomElementIndexFromRange(int32 size, TArray<int32> excludedIndices)
{
	int32 lastindex = size - 1;
	int32 result = FMath::RandRange(0, lastindex);
	if(size>excludedIndices.Num())
	{
		TArray<int32> a;
		for (int i = 0; i<size; ++i)
			a.Add(i);
		for (auto It = excludedIndices.CreateConstIterator(); It; ++It)
			a.Swap(*It, lastindex--);
		result = a[FMath::RandRange(0, lastindex)];
	}
	return result;
}

