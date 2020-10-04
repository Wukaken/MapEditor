// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CMediaData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCMediaData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MediaAssetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Time;
};
