// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Target.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHitSignature);

UCLASS()
class AIMTRAINER_API ATarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = Target, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere, Category = Target, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleAnywhere, Category = Target, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* HeadMesh;

protected:
	UPROPERTY(EditDefaultsOnly, Category = Target)
	class UStaticMesh* InactiveBodyMesh;

	UPROPERTY(EditDefaultsOnly, Category = Target)
	class UStaticMesh* ActiveBodyMesh;

	UPROPERTY(EditDefaultsOnly, Category = Target)
	class UStaticMesh* InactiveHeadMesh;

	UPROPERTY(EditDefaultsOnly, Category = Target)
	class UStaticMesh* ActiveHeadMesh;

	bool bHeadActive;
	bool bBodyActive;

private:
	void ToggleHeadActive(bool InActive);
	void ToggleBodyActive(bool InActive);

public:
	UPROPERTY(BlueprintAssignable, Category = Target)
	FHitSignature HitEvent;

	UFUNCTION(BlueprintCallable, Category = Target)
	void ActivateHead(bool InActive);

	UFUNCTION(BlueprintCallable, Category = Target)
	void ActivateBody(bool InActive);

	UFUNCTION(BlueprintCallable, Category = Target)
	bool IsHeadActive();

	UFUNCTION(BlueprintCallable, Category = Target)
	bool IsBodyActive();

	UFUNCTION()
	void TargetHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
