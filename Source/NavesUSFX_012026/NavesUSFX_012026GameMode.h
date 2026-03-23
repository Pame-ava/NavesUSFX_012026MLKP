// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NavesUSFX_012026GameMode.generated.h"

class AEnemigo;
class APawn;

UCLASS(MinimalAPI)
class ANavesUSFX_012026GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavesUSFX_012026GameMode();

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;


public:

	TArray<AEnemigo*> AEnemigos;

	FTimerHandle TimerFormacion;

	void FormarNavesFrentePawn();
	void DispersarNaves();

	APawn* PlayerPawn;  // Referencia al Pawn

	float IntervaloFormacion = 5.0f;

	float EspaciadoVertical = 100.0f;
	float EspaciadoHorizontal = 100.0f;

	/*
	private:
	UPROPERTY(EditAnywhere, Category = "Spawn")
	TSubclassOf<class AEnemigo> ClaseEnemigoDona;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	FVector PosicionSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	FRotator RotacionSpawn;

	*/
};
//UPROPERTY MUESRA EN EL EDITOR, PERMITE CONFIGURARLO DESDE EL EDITOR,
// SE PUEDE CONFIGURAR EN TIEMPO DE EJECUCIÓN, PERMITE CONFIGURARLO EN BLUEPRINTS



