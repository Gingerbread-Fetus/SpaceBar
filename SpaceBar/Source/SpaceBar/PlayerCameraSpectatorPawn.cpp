// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayerCameraSpectatorPawn.h"
#include "StationPlayerController.h"

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
	CameraScrollMargin = 25.0f;

	bCanMoveCamera = true;
}

FVector APlayerCameraSpectatorPawn::GetCameraPanDirection()
{
	float MousePosX;
	float MousePosY;
	float CamDirY = 0;
	float CamDirX = 0;
	int32 ViewportXDim = 0;
	int32 ViewportYDim = 0;

	if (PC)
	{
		PC->GetMousePosition(MousePosX, MousePosY);
		PC->GetViewportSize(ViewportXDim, ViewportYDim);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not found!"));
	}
	//Pan Camera Left
	if (MousePosX <= CameraScrollMargin) 
	{
		CamDirX = -1;
	}
	//Pan Camera Up
	if (MousePosY <= CameraScrollMargin)
	{
		CamDirY += 1;
	}
	//Pan Camera Right
	if (MousePosX >= (ViewportXDim - CameraScrollMargin))
	{
		CamDirX += 1;
	}
	//Pan Camera Down
	if (MousePosY >= (ViewportYDim - CameraScrollMargin))
	{
		CamDirY -= 1;
	}
	return FVector(0, CamDirX * CameraMovementSpeed, CamDirY * CameraMovementSpeed);
}

void APlayerCameraSpectatorPawn::PanCamera(float XInput, float YInput)
{
	AddActorWorldOffset(FVector(0, XInput, YInput));
}

void APlayerCameraSpectatorPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//This call here is how the edge scrolling is done.
	AddActorWorldOffset(GetCameraPanDirection());
}

void APlayerCameraSpectatorPawn::BeginPlay()
{
	Super::BeginPlay();

	PC = Cast<AStationPlayerController>(GetController());
}
