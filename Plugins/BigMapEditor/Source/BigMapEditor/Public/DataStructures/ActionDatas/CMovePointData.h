// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionDatas/CAnimationData.h"
#include "CMovePointData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCMovePointData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCAnimationData AnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Time;
};
