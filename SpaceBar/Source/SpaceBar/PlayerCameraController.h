// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCameraController.generated.h"

//Forward Declarations
class APlayerCameraSpectatorPawn;

/**
 * 
 */
UCLASS()
class SPACEBAR_API APlayerCameraController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetCameraAxes(float XInput, float YInput);

private:
	void DriveCamera(float VInput, float HInput);

	APlayerCameraSpectatorPawn* PlayerCamera;
};
