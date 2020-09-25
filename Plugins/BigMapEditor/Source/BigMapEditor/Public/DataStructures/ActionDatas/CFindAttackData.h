// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CAnimationData.h"
#include "CFindAttackData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCFindAttackData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Char;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCAnimationData AttackAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCAnimationData MoveAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SelfRemainPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetRemainPercent;
};
