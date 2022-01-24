// Fill out your copyright notice in the Description page of Project Settings.


#include "TrainerGameMode.h"
#include "Engine/TargetPoint.h"
#include "Target.h"
#include "Kismet/GameplayStatics.h"
#include "BasePlayerController.h"
#include "BaseCharacter.h"
#include "TimerManager.h"

ATrainerGameMode::ATrainerGameMode()
{
	Seconds = 30.0f;
	Hits = 0;
	Shots = 0;
	LastTarget = -1;
	bTrainingStarted = false;
}

void ATrainerGameMode::BeginPlay()
{
	Super::BeginPlay();

	if(GetAllTargetPointsInWorld())
	{
		SpawnTargets();
	}

	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (ABasePlayerController* BPC = Cast<ABasePlayerController>(PC))
	{
		APawn* PlayerPawn = BPC->GetPawn();
		if (ABaseCharacter* PlayerCharacter = Cast<ABaseCharacter>(PlayerPawn))
		{
			PlayerCharacter->ShotEvent.AddDynamic(this, &ATrainerGameMode::AddShot);
		}
	}
}

void ATrainerGameMode::AddToTargetPointArray(ATargetPoint* InTargetPoint)
{
	if (!TargetPointerArray.Contains(InTargetPoint))
	{
		TargetPointerArray.AddUnique(InTargetPoint);
	}
}

void ATrainerGameMode::BeginTraining()
{
	ActivateRandomTarget();
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATrainerGameMode::DecrementSeconds, 1.0f, true, 0.0f);
	bTrainingStarted = true;
}

bool ATrainerGameMode::GetAllTargetPointsInWorld()
{
	TArray<AActor*> ActorList;
	UGameplayStatics::GetAllActorsOfClass(this, ATargetPoint::StaticClass(), ActorList);
	if (ActorList.Num() > 0)
	{
		for (AActor* actor : ActorList)
		{
			if (ATargetPoint* point = Cast<ATargetPoint>(actor))
			{
				AddToTargetPointArray(point);
			}
		}
	}

	if (TargetPointerArray.Num() > 0)
	{
		return true;
	}
	return false;
}

void ATrainerGameMode::SpawnTargets()
{
	if (GetWorld())
	{
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		int32 AmountOfTargets = TargetPointerArray.Num();

		for (int32 i = 0; i < AmountOfTargets; i++)
		{
			FVector TargetPointLocation = TargetPointerArray[i]->GetActorLocation();
			FRotator TargetPointRotation = TargetPointerArray[i]->GetActorRotation();
			ATarget* NewTarget = GetWorld()->SpawnActor<ATarget>(TargetClass, TargetPointLocation, TargetPointRotation, ActorSpawnParams);
			if (!TargetArray.Contains(NewTarget))
			{
				TargetArray.AddUnique(NewTarget);
			}
			NewTarget->ActivateHead(false);
			NewTarget->ActivateBody(false);
			NewTarget->HitEvent.AddDynamic(this, &ATrainerGameMode::AddHit);
		}
	}
}

void ATrainerGameMode::ActivateRandomTarget()
{
	int32 RandomTargetNum = FMath::RandRange(0, (TargetArray.Num() - 1));
	int32 RandomPartNum = FMath::RandRange(0, 1);

	if (RandomTargetNum == LastTarget)
	{
		ActivateRandomTarget();
		return;
	}

	if (RandomPartNum == 0)
		TargetArray[RandomTargetNum]->ActivateHead(true);
	else
		TargetArray[RandomTargetNum]->ActivateBody(true);

	for (ATarget* Target : TargetArray)
	{
		if (Target != TargetArray[RandomTargetNum])
		{
			Target->ActivateBody(false);
			Target->ActivateHead(false);
		}
	}

	LastTarget = RandomTargetNum;
}

void ATrainerGameMode::EndTraining()
{
	TrainingEndedEvent.Broadcast();
	for (ATarget* Target : TargetArray)
	{
		Target->ActivateBody(false);
		Target->ActivateHead(false);
	}
}

void ATrainerGameMode::DecrementSeconds()
{
	Seconds--;
	if (Seconds <= 0.0f)
	{
		EndTraining();
		GetWorldTimerManager().PauseTimer(TimerHandle);
	}
}

float ATrainerGameMode::GetSeconds()
{
	return Seconds;
}

int32 ATrainerGameMode::GetShots()
{
	return Shots;
}

int32 ATrainerGameMode::GetHits()
{
	return Hits;
}

void ATrainerGameMode::AddShot()
{
	if(bTrainingStarted)
		Shots++;
}

void ATrainerGameMode::AddHit()
{
	Hits++;
	ActivateRandomTarget();
}
