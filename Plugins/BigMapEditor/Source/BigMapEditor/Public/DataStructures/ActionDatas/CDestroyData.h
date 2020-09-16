// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CDestroyData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCDestroyData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Destroy;
};
