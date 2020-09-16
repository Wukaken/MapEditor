// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CBornActorData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCBornActorData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ActorBPAssetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform;
};
