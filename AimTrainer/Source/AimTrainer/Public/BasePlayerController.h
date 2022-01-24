// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartTrainerSignature);

UCLASS()
class AIMTRAINER_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ABasePlayerController();

protected:
	virtual void SetupInputComponent() override;

protected:
	UPROPERTY(BlueprintReadOnly, Category = PlayerController)
	bool bInMenu;

public:
	UPROPERTY(BlueprintAssignable, Category = PlayerController)
	FStartTrainerSignature StartTrainerEvent;

	UFUNCTION(BlueprintCallable, Category = PlayerController)
	bool IsInMenu();

	UFUNCTION()
	void StartTrainer();
};
