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




