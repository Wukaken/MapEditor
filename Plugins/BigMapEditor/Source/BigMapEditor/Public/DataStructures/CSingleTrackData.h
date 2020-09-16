// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionDatas/CAnimationData.h"
#include "ActionDatas/CBornActorData.h"
#include "ActionDatas/CBornCityData.h"
#include "ActionDatas/CBornCrowdData.h"
#include "ActionDatas/CCameraData.h"
#include "ActionDatas/CDelayData.h"
#include "ActionDatas/CDestroyData.h"
#include "ActionDatas/CDialogData.h"
#include "ActionDatas/CFollowCharData.h"
#include "ActionDatas/CMovePointData.h"
#include "ActionDatas/CRotateData.h"
#include "ActionDatas/CWaitFinishData.h"
#include "CSingleTrackData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCSingleTrackData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCBornCityData> BornCityDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCBornActorData> BornActorDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCBornCrowdData> BornCrowdDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCFollowCharData> FollowCharDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCMovePointData> MovePointDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCDelayData> DelayDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCDialogData> DialogDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCRotateData> RotateDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCAnimationData> AnimationDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCWaitFinishData> WaitFinishDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCDestroyData> DestroyDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCCameraData> CameraDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DataTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> DataIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Color;
};
