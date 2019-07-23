// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCameraController.h"
#include "PlayerCameraSpectatorPawn.h"

void APlayerCameraController::SetCameraAxes(float XInput, float YInput)
{
	float CurrentY = 0.0f;
	float CurrentX = 0.0f;
	CurrentX = FMath::Clamp<float>(CurrentX + XInput, -1, 1);
	CurrentY = FMath::Clamp<float>(CurrentY + YInput, -1, 1);

	DriveCamera(CurrentX, CurrentY);
}

void APlayerCameraController::DriveCamera(float VInput, float HInput)
{

}
