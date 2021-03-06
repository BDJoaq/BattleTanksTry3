// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"


class UProjectileFireComponent;
class UTankAimingComponent;
/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	
	UProjectileFireComponent* FiringComponent = nullptr;
	UTankAimingComponent* AimingComponent = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float ClosestDistance = 4500.f;

private:

	UFUNCTION()
	void OnPossesedTankDeath();


	virtual void SetPawn(APawn* InPawn) override;
	

};
