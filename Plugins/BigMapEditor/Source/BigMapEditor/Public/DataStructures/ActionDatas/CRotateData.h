// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CRotateData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCRotateData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Char;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ActorType;
};
