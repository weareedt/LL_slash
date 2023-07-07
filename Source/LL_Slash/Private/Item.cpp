// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "LL_Slash/DebugMacro.h"



// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float MovementRate = 50.f;
	float RotationRate = 45.f;

	AddActorWorldOffset(FVector(MovementRate * DeltaTime,0.f,0.f));
	AddActorWorldRotation(FRotator(0.f,RotationRate *DeltaTime,0.f));
	DRAWDEBUGSPHERE_Update(GetActorLocation());
	DRAWDEBUGVECTOR_singleframe(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);

}

