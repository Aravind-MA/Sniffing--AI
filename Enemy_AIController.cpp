// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "EnemyActor.h"
#include "Enemychar.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SphereComponent.h"
AEnemy_AIController::AEnemy_AIController()
{
	PrimaryActorTick.bCanEverTick = true;

	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);

	

}
void AEnemy_AIController::BeginPlay()
{
	Super::BeginPlay();

	

		
	
	
	


	
}
void AEnemy_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn == nullptr) return;
	
	Enemy = Cast<AEnemyActor>(InPawn);
	if (Enemy)
	{
		if (Enemy->GetBehaviorTree())
		{											//Dereference operator due to InitializeBlackboard function needs an Input in the form of the UBlackBoardData but BlackBoardAsset from the GetBehaviorTree() ("BehaviorTree") is a pointer
			BlackboardComponent->InitializeBlackboard(*(Enemy->GetBehaviorTree()->BlackboardAsset));
		}
	}

	
	
	
}



void AEnemy_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

