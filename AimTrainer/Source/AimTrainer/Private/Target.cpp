// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
	RootComponent = SceneComponent;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body Component"));
	BodyMesh->SetupAttachment(RootComponent);
	BodyMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	HeadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head Component"));
	HeadMesh->SetupAttachment(RootComponent);
	HeadMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	BodyMesh->OnComponentHit.AddDynamic(this, &ATarget::TargetHit);
	HeadMesh->OnComponentHit.AddDynamic(this, &ATarget::TargetHit);
}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();

	ActivateBody(false);
	ActivateHead(false);
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATarget::ToggleHeadActive(bool InActive)
{
	if (InActive)
	{
		HeadMesh->SetStaticMesh(ActiveHeadMesh);
	}
	else
	{
		HeadMesh->SetStaticMesh(InactiveHeadMesh);
	}		
}

void ATarget::ToggleBodyActive(bool InActive)
{
	if (InActive)
	{
		BodyMesh->SetStaticMesh(ActiveBodyMesh);
	}
	else
	{
		BodyMesh->SetStaticMesh(InactiveBodyMesh);
	}
}

void ATarget::ActivateHead(bool InActive)
{
	ToggleHeadActive(InActive);
	bHeadActive = InActive;
}

void ATarget::ActivateBody(bool InActive)
{
	ToggleBodyActive(InActive);
	bBodyActive = InActive;
}

bool ATarget::IsHeadActive()
{
	return bHeadActive;
}

bool ATarget::IsBodyActive()
{
	return bBodyActive;
}

void ATarget::TargetHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{	
	if ((HitComp == BodyMesh && bBodyActive) || (HitComp == HeadMesh && bHeadActive))
	{
		HitEvent.Broadcast();
		ActivateBody(false);
		ActivateHead(false);
	}
}

