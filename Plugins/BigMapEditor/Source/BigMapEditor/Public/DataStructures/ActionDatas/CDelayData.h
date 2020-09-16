// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CDelayData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCDelayData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DelayTime;
};
