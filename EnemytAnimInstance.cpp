// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemytAnimInstance.h"
#include "EnemyActor.h"
#include "Components/AudioComponent.h"


void UEnemytAnimInstance::UpdataAnimationProperties(float DeltaTime)
{
	if (Enemy == nullptr)
	{
		Enemy = Cast<AEnemyActor>(TryGetPawnOwner());
	}
	if (Enemy)
	{
		FVector Velocity = Enemy->GetVelocity();
		Velocity.Z = 0.f;
		Speed = Velocity.Size();//size is know as magnidued
	}
	
	
}