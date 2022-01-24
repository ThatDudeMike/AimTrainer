// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Gun.generated.h"

/**
 * 
 */
UCLASS()
class AIMTRAINER_API AGun : public AWeapon
{
	GENERATED_BODY()
	
public:
	AGun();


protected:

	UPROPERTY(BlueprintReadOnly, Category = Gun)
	bool bSafetyOn;

	UPROPERTY(EditDefaultsOnly, Category = Gun)
	float MuzzleVelocity;

	UPROPERTY(EditDefaultsOnly, Category = Gun)
	int32 MaxAmmoCount;

	UPROPERTY(BlueprintReadOnly, Category = Gun)
	int32 AmmoCount;

	UPROPERTY(EditDefaultsOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = Gun)
	class USoundBase* FireSound;

private:
	UPROPERTY(VisibleAnywhere, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* MuzzleLocation;

public:
	UFUNCTION(BlueprintCallable, Category = Gun)
	virtual void Shoot(class AController* AttackerController);

	virtual void Attack(class AController* AttackerController) override;

	UFUNCTION(BlueprintCallable, Category = Gun)
	virtual void Reload();

	UFUNCTION(BlueprintCallable, Category = Gun)
	bool IsSafetyOn();

	UFUNCTION(BlueprintCallable, Category = Gun)
	void SetSafetyOn(bool bInSafety);
};
