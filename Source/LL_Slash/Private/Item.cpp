// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "LL_Slash/DebugMacro.h"



// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponet"));
	RootComponent = ItemMesh;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	Avg<int32>(1,3);
	
}

float AItem::TransformedSin()
{
    return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float AItem::TransformedCos()
{
    return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunningTime += DeltaTime;

	//draw debug sphere and vector
	DRAWDEBUGSPHERE_Update(GetActorLocation())
	DRAWDEBUGVECTOR_singleframe(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100)

}

