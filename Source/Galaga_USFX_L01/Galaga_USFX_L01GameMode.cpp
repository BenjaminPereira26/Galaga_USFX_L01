// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaKamikaze.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();

	const int32 NumeroDeColumnas = 5; // Número de columnas
	const int32 NumeroDeFilas = 5;    // Número de filas

	// Generar naves enemigas caza y agregarlas al TMap en las columnas correspondientes
	for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
		{
			// Definir la ubicación y rotación de la nave enemiga
			FVector SpawnLocation = FVector(Columna * 200.0f, Fila * 200.0f, 350.0f); // Ejemplo de ubicación de generación
			FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial

			// Generar la nave enemiga caza y agregarla al TArray
			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
			if (NuevaNaveCaza)
			{
				// Configurar la lógica de la nave enemiga caza si es necesario

			}
			else
			{
				// Ocurrió un error al crear la nave enemiga caza
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga caza."));
			}

			NavesEnColumna.Add(NuevaNaveCaza);
		}

		// Agregar el TArray al TMap
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}


}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
}