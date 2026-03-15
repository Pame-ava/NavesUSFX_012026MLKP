// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavesUSFX_012026GameMode.h"
#include "NavesUSFX_012026Pawn.h"
#include "Enemigo.h"
#include "Engine/World.h"

ANavesUSFX_012026GameMode::ANavesUSFX_012026GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANavesUSFX_012026Pawn::StaticClass();

	ClaseEnemigoDona = AEnemigo::StaticClass();
	PosicionSpawn = FVector(300.0f, 0.0f, 200.0f);
	RotacionSpawn = FRotator::ZeroRotator;
}

void ANavesUSFX_012026GameMode::BeginPlay()
{
	Super::BeginPlay();

	if (ClaseEnemigoDona)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride =
			ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		GetWorld()->SpawnActor<AEnemigo>(
			ClaseEnemigoDona,
			PosicionSpawn,
			RotacionSpawn,
			SpawnParams
		);
	}
}

