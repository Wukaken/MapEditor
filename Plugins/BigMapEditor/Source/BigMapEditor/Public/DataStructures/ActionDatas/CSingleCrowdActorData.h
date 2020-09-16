// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSingleCrowdActorData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCSingleCrowdActorData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BornType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float XOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TextureAssetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ActorBPAssetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CenterPosition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator CenterRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector	Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> BornPositions;	
};
