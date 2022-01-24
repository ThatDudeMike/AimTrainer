// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseTrainerUI.h"
#include "Components/TextBlock.h"
#include "Engine/World.h"

void UBaseTrainerUI::NativeConstruct()
{
	Super::NativeConstruct();

	ResetCountdownSeconds();
}

void UBaseTrainerUI::SetStartingTextBlock()
{
	UpdatedStartingTextBlock("Press Enter to Start");
}

void UBaseTrainerUI::UpdatedStartingTextBlock(FString InString)
{
	if (StartText)
	{
		StartText->SetText(FText::FromString(InString));
	}
}

void UBaseTrainerUI::StartingTextBlockTick()
{
	DecrementCountDownSeconds();
	FString NewString = TEXT("Starting in... ");
	NewString.AppendInt(CountDownSeconds);
	
	UpdatedStartingTextBlock(NewString);	
	CountdownCompleted();
}

void UBaseTrainerUI::BeginCountDown()
{
	FString NewString = TEXT("Starting in... ");
	NewString.AppendInt(CountDownSeconds);

	UpdatedStartingTextBlock(NewString);
	CountdownCompleted();
}

int32 UBaseTrainerUI::GetCountDownSeconds()
{
	return CountDownSeconds;
}

void UBaseTrainerUI::DecrementCountDownSeconds()
{
	CountDownSeconds--;
}

void UBaseTrainerUI::ResetCountdownSeconds()
{
	CountDownSeconds = 3;
}

void UBaseTrainerUI::CountdownCompleted()
{
	if (CountDownSeconds <= 0)
	{
		CountdownCompletedEvent.Broadcast();
	}
}
