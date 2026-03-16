// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaEnemigo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	if (MallaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
	}

	// Escala para que se vea mejor
	MallaEnemigo->SetWorldScale3D(FVector(1.5f, 1.5f, 1.5f));

	// Configuración inicial del movimiento
	VelocidadAvance = 25.0f;
	AmplitudZigZag = 250.0f;
	FrecuenciaZigZag = 5.0f;
	RadioCircular = 60.0f;
	VelocidadCircular = 3.0f;
	VelocidadRotacion = FRotator(0.0f, 120.0f, 180.0f);

	TiempoTranscurrido = 0.0f;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
	PosicionInicial = GetActorLocation();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	TiempoTranscurrido += DeltaTime;

	// Avance constante en X
	float OffsetY = VelocidadAvance * TiempoTranscurrido;

	// Zigzag en Y
	float OffsetZigZagY = FMath::Sin(TiempoTranscurrido * FrecuenciaZigZag) * AmplitudZigZag;

	// Movimiento circular/flotante
	float OffsetCircularY = FMath::Cos(TiempoTranscurrido * VelocidadCircular) * RadioCircular;
	float OffsetCircularZ = FMath::Sin(TiempoTranscurrido * VelocidadCircular) * RadioCircular;

	FVector NuevaPosicion = PosicionInicial;
	NuevaPosicion.X += OffsetY;
	NuevaPosicion.Y += OffsetZigZagY + OffsetCircularY;
	NuevaPosicion.Z += OffsetCircularZ;

	SetActorLocation(NuevaPosicion);

	// Rotación constante
	AddActorLocalRotation(VelocidadRotacion * DeltaTime);

   /* if (!bMovimientoAutonomo)
    {
        FVector PosicionActual = GetActorLocation();

        float Distancia = FVector::Dist(PosicionActual, PosicionDestinoGameMode);

        if (Distancia <= Tolerancia)
        {
            // Waypoint alcanzado, siguiente
            return;
        }
        else
        {
            // Mover en línea recta
            FVector Direccion = (PosicionDestinoGameMode - PosicionActual).GetSafeNormal();
            FVector NuevaUbicacion = PosicionActual + (Direccion * VelocidadMovimiento * DeltaTime);
            SetActorLocation(NuevaUbicacion);
        } 
    }*/
}

