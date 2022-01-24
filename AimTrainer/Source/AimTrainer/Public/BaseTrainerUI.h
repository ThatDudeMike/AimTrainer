// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseTrainerUI.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCountDownCompletedSignature);

UCLASS()
class AIMTRAINER_API UBaseTrainerUI : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
protected:
	UPROPERTY(BlueprintReadWrite, Category = TrainerUI)
	class UTextBlock* StartText;

	UPROPERTY(BlueprintReadWrite, Category = TrainerUI)
	class UTextBlock* TimeText;

	UPROPERTY(BlueprintReadWrite, Category = TrainerUI)
	class UTextBlock* HitMissText;
	
	
	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	void SetStartingTextBlock();

	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	void UpdatedStartingTextBlock(FString InString);

	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	void StartingTextBlockTick();

	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	void BeginCountDown();

private:
	UPROPERTY()
	int32 CountDownSeconds;

public:
	UPROPERTY(BlueprintAssignable, Category = TrainerUI)
	FCountDownCompletedSignature CountdownCompletedEvent;

	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	int32 GetCountDownSeconds();

	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	void DecrementCountDownSeconds();

	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	void ResetCountdownSeconds();

	UFUNCTION(BlueprintCallable, Category = TrainerUI)
	void CountdownCompleted();
};
