// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionDatas/CAnimationData.h"
#include "CFollowCharData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCFollowCharData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Char;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCAnimationData AnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Time;
};
