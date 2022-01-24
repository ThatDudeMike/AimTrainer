// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class AIMTRAINER_API AWeapon : public ASkeletalMeshActor
{
	GENERATED_BODY()
	
public:
	AWeapon();

protected:

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	FName WeaponName;

	UPROPERTY(VisibleAnywhere, Category = Weapon, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* GripLocation;

public:
	virtual void Attack(class AController* AttackerController);
};
