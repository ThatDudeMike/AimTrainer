// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SceneComponent.h"

AWeapon::AWeapon()
{
	GripLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Grip Location"));
	GripLocation->SetupAttachment(GetSkeletalMeshComponent());
}

void AWeapon::Attack(class AController* AttackerController)
{
}
