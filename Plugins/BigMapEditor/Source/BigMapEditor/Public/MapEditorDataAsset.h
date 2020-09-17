// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataStructures/CSingleTrackData.h"
#include "MapEditorDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class BIGMAPEDITOR_API UMapEditorDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString>	TrackList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DialogDataAssetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCSingleTrackData CameraTrackData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FCSingleTrackData> TrackDataInfo;
};
