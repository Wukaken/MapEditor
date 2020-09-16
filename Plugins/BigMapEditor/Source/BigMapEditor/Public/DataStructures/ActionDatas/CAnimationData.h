// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CAnimationData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCAnimationData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AnimKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AnimType;
};
