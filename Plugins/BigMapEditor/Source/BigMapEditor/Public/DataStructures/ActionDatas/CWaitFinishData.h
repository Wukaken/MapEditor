// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CWaitFinishData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCWaitFinishData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int WaitID;
};
