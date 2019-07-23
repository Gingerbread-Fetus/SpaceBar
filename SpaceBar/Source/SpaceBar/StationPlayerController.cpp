// Fill out your copyright notice in the Description page of Project Settings.
#include "StationPlayerController.h"
#include "PlayerCameraSpectatorPawn.h"

AStationPlayerController::AStationPlayerController() 
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
}

void AStationPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AStationPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	
	if (InputComponent)
	{
		InputComponent->BindAxis("MoveVertically", this, &AStationPlayerController::MoveY);
		InputComponent->BindAxis("MoveHorizontally", this, &AStationPlayerController::MoveX);
	}
}

void AStationPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AStationPlayerController::MoveX(float InputAxis)
{
	//UE_LOG(LogTemp, Warning, TEXT("MoveX called with input %f"), InputAxis);
	XAxis = InputAxis;
	
	auto MyPawn = Cast<APlayerCameraSpectatorPawn>(this->GetPawn());
	if (MyPawn)
	{
		MyPawn->PanCamera(XAxis, YAxis);
	}
	
}

void AStationPlayerController::MoveY(float InputAxis)
{
	//UE_LOG(LogTemp, Warning, TEXT("MoveY called with input %f"), InputAxis);
	YAxis = InputAxis;
	auto MyPawn = Cast<APlayerCameraSpectatorPawn>(this->GetPawn());
	if (MyPawn)
	{
		MyPawn->PanCamera(XAxis, YAxis);
	}
}

void AStationPlayerController::SetPawn(APawn * InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		auto PosessedCam = Cast<APlayerCameraSpectatorPawn>(InPawn);
		if (!ensure(PosessedCam)) { return; }
	}
}


