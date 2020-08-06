// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnakeBPFunctionLib.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGCPP_API USnakeBPFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static float SquareNumber(const float In);

		UFUNCTION(BlueprintPure)
		static float NewJumpTime(const float In);
	
};
