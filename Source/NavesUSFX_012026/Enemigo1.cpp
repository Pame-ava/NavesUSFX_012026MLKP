// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo1.h"

// Sets default values
AEnemigo1::AEnemigo1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigo1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

