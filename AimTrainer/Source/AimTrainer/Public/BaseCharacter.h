// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShotSignature);

UCLASS()
class AIMTRAINER_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* Mesh1P;

	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

protected:
	UPROPERTY(EditDefaultsOnly, Category = Camera)
	float BaseTurnRate;

	UPROPERTY(EditDefaultsOnly, Category = Camera)
	float BaseLookUpRate;

	UPROPERTY(EditAnywhere, Category = Gameplay)
	FVector GunOffset;

	UPROPERTY(EditDefaultsOnly, Category = Gameplay)
	class UAnimMontage* FireAnimation;

protected:
	void MoveForward(float Val);
	void MoveRight(float Val);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	void OnFire();

//Weapons
protected:
	UPROPERTY(BlueprintReadOnly, Category = Weapon)
	class AWeapon* EquippedWeapon;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	TSubclassOf<AWeapon> WeaponClass;

public:
	UPROPERTY(BlueprintAssignable, Category = Gameplay)
	FShotSignature ShotEvent;
};
