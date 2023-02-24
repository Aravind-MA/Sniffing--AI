// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Enemy_AIController.generated.h"

/**
 * 
 */
UCLASS()
class VR_AI_PROGRAMING_API AEnemy_AIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AEnemy_AIController();

	virtual void OnPossess(APawn* InPawn) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual FRotator GetControlRotation() const override;

	//UFUNCTION()
	//void OnPawnDetected(const TArray<AActor*>&DetectedPawns);

	class AEnemyActor* Enemy;

private:
	/** Blackboard component for this enemy */
	UPROPERTY(BlueprintReadWrite, Category = "AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBlackboardComponent* BlackboardComponent;

	/** Behavior tree component for this enemy */
	UPROPERTY(BlueprintReadWrite, Category = "AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTreeComponent* BehaviorTreeComponent;



public:
	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
};
