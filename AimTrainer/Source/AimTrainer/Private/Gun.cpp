// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Projectile.h"
#include "Kismet/GameplayStatics.h"

AGun::AGun()
{
	bSafetyOn = false;
	MuzzleVelocity = 28498.8f;
	MaxAmmoCount = 30;
	AmmoCount = 30;

	MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle Location"));
	MuzzleLocation->SetupAttachment(GetSkeletalMeshComponent());
}

void AGun::Shoot(class AController* AttackerController)
{
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			const FRotator SpawnRotation = AttackerController->GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((MuzzleLocation != nullptr) ? MuzzleLocation->GetComponentLocation() : GetActorLocation());

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			// spawn the projectile at the muzzle
			AProjectile* NewProjectile = World->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			if (NewProjectile)
			{
				NewProjectile->SetMuzzleVelocity(MuzzleVelocity);
			}

			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}
		}
	}
}

void AGun::Attack(class AController* AttackerController)
{
	Shoot(AttackerController);
}

void AGun::Reload()
{

}

bool AGun::IsSafetyOn()
{
	return bSafetyOn;
}

void AGun::SetSafetyOn(bool bInSafety)
{
	bSafetyOn = bInSafety;
}
