// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGameResources.h"

#include "DA_BuildingAsset.generated.h"

/**
 * 
 */

UCLASS(BlueprintType)
class DAWNOFCIVILIZATION_API UDA_BuildingAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		E_BuildingTypes BuildingType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TSubclassOf<class AActor> BuildingActor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float BuildingHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float InfluenceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
		FName BuildingName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
		FText BuildingDescription;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
		UTexture2D* BuildingIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Construction")
		UStaticMesh* PreviewMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Construction")
		FBuildingResources ConstructionCost;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Construction", meta = (ClampMin = "0", ClampMax = "4", UIMin = "1", UIMax = "4"))
		int BuildingTier = 1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Construction")
		bool BuilderOnly = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resources")
		E_ResourceType AssociatedResourceType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resources")
		float StorageCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Citizens")
		E_JobType AssociatedJobType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Citizens")
		int MaxUnitOccupation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Citizens")
		TArray<FCitizenNeeds> BuildingProvidingNeeds;

};
