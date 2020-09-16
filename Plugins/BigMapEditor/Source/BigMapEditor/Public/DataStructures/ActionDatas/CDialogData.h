// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CDialogData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCDialogData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int SRowID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ERowID;
};
