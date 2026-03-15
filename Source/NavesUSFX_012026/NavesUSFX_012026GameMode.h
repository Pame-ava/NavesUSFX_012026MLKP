// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NavesUSFX_012026GameMode.generated.h"

UCLASS(MinimalAPI)
class ANavesUSFX_012026GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavesUSFX_012026GameMode();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Spawn")
	TSubclassOf<class AEnemigo> ClaseEnemigoDona;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	FVector PosicionSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	FRotator RotacionSpawn;
};



