// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "StationPlayerController.generated.h"


class APlayerCameraSpectatorPawn;
/**
 * 
 */
UCLASS()
class SPACEBAR_API AStationPlayerController : public APlayerController
{
	GENERATED_BODY()

	AStationPlayerController();

public:
	virtual void BeginPlay() override;

private:

	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaSeconds) override;

	void MoveX(float InputAxis);
	void SetPawn(APawn* InPawn);
	void MoveY(float InputAxis);

	float XAxis = 0;
	float YAxis = 0;
};
