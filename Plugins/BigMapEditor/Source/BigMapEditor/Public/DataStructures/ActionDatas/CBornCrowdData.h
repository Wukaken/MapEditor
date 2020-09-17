// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSingleCrowdActorData.h"
#include "CBornCrowdData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCBornCrowdData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCSingleCrowdActorData> SingleActorData;
};
