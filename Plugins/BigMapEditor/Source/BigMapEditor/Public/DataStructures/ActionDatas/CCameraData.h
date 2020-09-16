// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CCameraData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCCameraData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int DramaPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CameraName;
};
