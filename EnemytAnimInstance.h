// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemytAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class VR_AI_PROGRAMING_API UEnemytAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	

	UFUNCTION(BlueprintCallable)
	void UpdataAnimationProperties(float DeltaTime);

private: 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class AEnemyActor* Enemy;

public:

	
};
