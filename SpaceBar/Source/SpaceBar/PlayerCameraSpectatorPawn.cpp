// Fill out your copyright notice in the Description page of Project Settings.

#include "StationPlayerController.h"
#include "PlayerCameraSpectatorPawn.h"

APlayerCameraSpectatorPawn::APlayerCameraSpectatorPawn()
{
	//enable tick function
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootScene;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootScene);
	SpringArm->bDoCollisionTest = false;
	SpringArm->SetRelativeRotation(FRotator(0.0f,0.0f,0.0f));

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArm);

	CameraXYLimit = 2500.0f;
	CameraRadius = 200.0f;
	CameraRadiusMax = 300.0f;
	CameraRadiusMin = 100.0f;
	CameraZoomSpeed = 10.0f;
	CameraMovementSpeed = 10.0f;
	CameraScrollBoundary = 25.0f;

	bCanMoveCamera = true;
}

FVector APlayerCameraSpectatorPawn::GetCameraPanDirection()
{
	float MousePosX;
	float MousePosY;
	float CamDirY = 0;
	float CamDirX = 0;

	if (PC)
	{
		PC->GetMousePosition(MousePosX, MousePosY);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not found!"));
	}

	if (MousePosX == 0) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Panning cam left."));
		CamDirY = -1;
	}
	return FVector(CamDirX, CamDirY, 0);
}

void APlayerCameraSpectatorPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AddActorWorldOffset(GetCameraPanDirection());
}

void APlayerCameraSpectatorPawn::BeginPlay()
{
	Super::BeginPlay();

	PC = Cast<AStationPlayerController>(GetController());
}
