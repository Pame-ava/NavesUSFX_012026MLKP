// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

class UStaticMeshComponent;

UCLASS()
class NAVESUSFX_012026_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

	//UStaticMeshComponent* MallaEnemigo;


/*public:
	bool bMovimientoAutonomo = false;

	FVector PosicionDestinoGameMode;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UStaticMeshComponent* MallaEnemigo;

	float VelocidadAvance;
	float AmplitudZigZag;
	float FrecuenciaZigZag;
	float RadioCircular;
	float VelocidadCircular;
	FRotator VelocidadRotacion;

	FVector PosicionInicial;
	float TiempoTranscurrido;
};
