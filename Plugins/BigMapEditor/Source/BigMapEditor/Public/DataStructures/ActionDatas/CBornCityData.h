// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CBornCityData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCBornCityData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CityMeshAssetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform;
};
