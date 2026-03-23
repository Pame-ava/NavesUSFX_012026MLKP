// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavesUSFX_012026GameMode.h"
#include "NavesUSFX_012026Pawn.h"
#include "Enemigo.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"


ANavesUSFX_012026GameMode::ANavesUSFX_012026GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANavesUSFX_012026Pawn::StaticClass();
    // en que lugar del escenario a parce mi acor 
    /*
    	ClaseEnemigo = AEnemigo::StaticClass();
	PosicionSpawn = FVector(300.0f, 0.0f, 200.0f);
	RotacionSpawn = FRotator::ZeroRotator;

    */
}

void ANavesUSFX_012026GameMode::BeginPlay()
{
	Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    // Spawn 10 naves y agregar a array
    for (int32 i = 0; i < 10; i++)
    {
        FVector UbicacionSpawn(-600 + (i * 50), 150 + FMath::Sin(i) * 50, 150);  // Spread inicial
        AEnemigo* NuevaNave = World->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), UbicacionSpawn, FRotator::ZeroRotator);

        if (NuevaNave)
        {
            NuevaNave->bMovimientoAutonomo = true;  // Iniciar movimiento autónomo
            AEnemigos.Add(NuevaNave);
            UE_LOG(LogTemp, Warning, TEXT("Nave %d spawnada"), i);
        }
    }

    // Obtener Pawn jugador
    PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

    // Iniciar timer cada 5 seg
    GetWorldTimerManager().SetTimer(TimerFormacion, this, &ANavesUSFX_012026GameMode::FormarNavesFrentePawn, IntervaloFormacion, true);

}
void ANavesUSFX_012026GameMode::Tick(float DeltaTime)
{
}

FTimerHandle TimerDispersar;  // Nuevo timer

void ANavesUSFX_012026GameMode::FormarNavesFrentePawn()
{
    if (!PlayerPawn || AEnemigos.Num() == 0)
        return;

    FVector UbicacionPawn = PlayerPawn->GetActorLocation();
    FRotator RotacionPawn = PlayerPawn->GetActorRotation();

    FVector DireccionFrente = RotacionPawn.Vector();
    FVector PosicionBase = UbicacionPawn + (DireccionFrente * -500);
     
    // Formar en V mejorar para que tenga mejor formacion 
    for (int32 i = 0; i < AEnemigos.Num(); i++)
    {
        if (AEnemigo* Nave = AEnemigos[i])
        {
            int32 Fila = i / 2;
            int32 Columna = i % 2;

            float OffsetX = (Columna == 0 ? -1 : 1) * (EspaciadoHorizontal + Fila * 50); // 50 = apertura de la V
            FVector PosicionFormacion(PosicionBase.X + OffsetX, PosicionBase.Y + (Fila * EspaciadoVertical), PosicionBase.Z);

            Nave->PosicionDestinoGameMode = PosicionFormacion;
            Nave->SetActorRotation(FRotator(0, 0, RotacionPawn.Pitch));
            Nave->bMovimientoAutonomo = false;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("¡Naves formadas en V frente al jugador!"));

    // Programar dispersión en 10 segundos
    GetWorldTimerManager().SetTimer(TimerDispersar, this, &ANavesUSFX_012026GameMode::DispersarNaves, 10.0f, false);
}

void ANavesUSFX_012026GameMode::DispersarNaves()
{
    UWorld* World = GetWorld();
    if (!World) return;

    for (AEnemigo* Nave : AEnemigos)
    {
        if (Nave)
        {
            // Darles un destino aleatorio en el escenario
            FVector DestinoAleatorio(
                FMath::RandRange(-1000, 1000),
                FMath::RandRange(-1000, 1000),
                FMath::RandRange(200, 600)
            );

            Nave->PosicionDestinoGameMode = DestinoAleatorio;
            Nave->bMovimientoAutonomo = true;  // Reactivar movimiento autónomo
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("¡Naves dispersadas aleatoriamente!"));
}


   // UE_LOG(LogTemp, Warning, TEXT("¡Naves formadas frente al jugador!"));

    /*if (!PlayerPawn) return;
    FVector UbicacionJugador = PlayerPawn->GetActorLocation();
    FRotator RotacionJugador = PlayerPawn->GetActorRotation();
    for (int32 i = 0; i < AEnemigos.Num(); i++)
    {
        if (AEnemigos[i])
        {
            float DesplazamientoY = (i - AEnemigos.Num() / 2) * EspaciadoVertical;
            FVector NuevaUbicacion = UbicacionJugador + RotacionJugador.RotateVector(FVector(200, DesplazamientoY, 0));
            AEnemigos[i]->SetActorLocation(NuevaUbicacion);
        }
    }*/

    // muestra el lugar del actor
    /*
    	if (ClaseEnemigoDona)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride =
			ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		GetWorld()->SpawnActor<AEnemigo>(
			ClaseEnemigo,
			PosicionSpawn,
			RotacionSpawn,
			SpawnParams
		);
	}

    */
//}

