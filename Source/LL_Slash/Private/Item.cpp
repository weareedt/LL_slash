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

	UWorld* World = GetWorld();
	
	SetActorLocation(FVector(0.f,0.f,50.f));
	SetActorRotation(FRotator(0.f,0.f,50.f));
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	
	//Macro for Debug
	DRAWDEBUGSPHERE(Location)
	//DRAWDEBUGLINE(Location, Location + Forward * 100.f)
	//DRAWDEBUGPOINT(Location +Forward *100.f )
	DRAWDEBUGVECTOR(Location, Location + Forward * 100.f)
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
