// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PlayerCameraSpectatorPawn.generated.h"

class AStationPlayerController;

UCLASS()
class SPACEBAR_API APlayerCameraSpectatorPawn : public APawn
{
	GENERATED_BODY()

public:

	/** Constructor */
	APlayerCameraSpectatorPawn();

	/* Camera Component*/
	UPROPERTY()
	UCameraComponent* CameraComponent;

	UPROPERTY()
	USceneComponent* RootScene;
	
	UPROPERTY()
	USpringArmComponent* SpringArm;
	
	UPROPERTY()
	AStationPlayerController* PC;

	//** Camera XY limit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float CameraXYLimit;

	/** Camera Radius (Distance) From Pawn Position */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float CameraRadius;

	/** Camera Radius Max */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float CameraRadiusMax;

	/** Camera Radius Min */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float CameraRadiusMin;

	/** Camera Zoom Speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float CameraZoomSpeed;

	/** Camera Movement Speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float CameraMovementSpeed;

	/** Camera Scroll Boundary */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float CameraScrollBoundary;

	/** Should the camera move? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	bool bCanMoveCamera;

	FVector GetCameraPanDirection();



private:


public:
	/*Handles keyboard inputs.*/
	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;
};
