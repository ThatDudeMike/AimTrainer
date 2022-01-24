// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TrainerGameMode.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTrainingEndedSignature);

UCLASS()
class AIMTRAINER_API ATrainerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATrainerGameMode();

	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, Category = Targets)
	TSubclassOf<class ATarget> TargetClass;

protected:
	UPROPERTY(BlueprintReadOnly, Category = Targets)
	TArray<class ATarget*> TargetArray;

	UPROPERTY(BlueprintReadOnly, Category = Targets)
	TArray<class ATargetPoint*> TargetPointerArray;

public:
	UFUNCTION(BlueprintCallable, Category = Targets)
	void AddToTargetPointArray(class ATargetPoint* InTargetPoint);

	UFUNCTION(BlueprintCallable, Category = Targets)
	void BeginTraining();

private:
	bool GetAllTargetPointsInWorld();
	void SpawnTargets();
	void ActivateRandomTarget();
	void EndTraining();

	bool bTrainingStarted;
	FTimerHandle TimerHandle;

	float Seconds;
	int32 Shots;
	int32 Hits;

	int32 LastTarget;

public:
	UPROPERTY(BlueprintAssignable, Category = GameMode)
	FTrainingEndedSignature TrainingEndedEvent;

	UFUNCTION(BlueprintCallable, Category = GameMode)
	void DecrementSeconds();

	UFUNCTION(BlueprintCallable, Category = GameMode)
	float GetSeconds();

	UFUNCTION(BlueprintCallable, Category = GameMode)
	int32 GetShots();

	UFUNCTION(BlueprintCallable, Category = GameMode)
	int32 GetHits();

	UFUNCTION(BlueprintCallable, Category = GameMode)
	void AddShot();

	UFUNCTION(BlueprintCallable, Category = GameMode)
	void AddHit();
};
