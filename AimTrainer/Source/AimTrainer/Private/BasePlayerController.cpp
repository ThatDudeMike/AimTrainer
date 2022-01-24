// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerController.h"

ABasePlayerController::ABasePlayerController()
{

}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("StartTrainer", IE_Pressed, this, &ABasePlayerController::StartTrainer);
}

bool ABasePlayerController::IsInMenu()
{
	return bInMenu;
}

void ABasePlayerController::StartTrainer()
{
	StartTrainerEvent.Broadcast();
}
