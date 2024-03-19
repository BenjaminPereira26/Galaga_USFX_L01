// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaKamikaze.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();

	const int32 NumeroDeColumnasCaza = 2; // N° Columnas
	const int32 NumeroDeFilasCaza = 5;    // N° Filas

	// Generar cierto tipo de naves enemigas en una matriz de columnas y filas
	for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
		{
			// Definir los vectores de posición y rotación
			FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + 200.0f, 250.0f); // Posicion inicial de la nave desde la cual se escalan las demás
			FRotator SpawningRotation = FRotator::ZeroRotator; // Rotación inicial (nula)

			// Nave spawneada en el mundo y siendo incluida en el TArray
			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveCaza);
		}
		// Agregar el TArray al TMap
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasEspia = 2; 
	const int32 NumeroDeFilasEspia = 5;    

	for (int32 Columna = 0; Columna < NumeroDeColumnasEspia; ++Columna)
	{
		TArray<ANaveEnemigaEspia*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasEspia; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 900.0f, Fila * 200 + 200.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaEspia* NuevaNaveEspia = GetWorld()->SpawnActor<ANaveEnemigaEspia>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveEspia);
		}
		ColumnaNavesEnemigasEspia.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasKamikaze = 2;
	const int32 NumeroDeFilasKamikaze = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasKamikaze; ++Columna)
	{
		TArray<ANaveEnemigaKamikaze*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasEspia; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1500.0f, Fila * 200 + 200.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaKamikaze* NuevaNaveKamikaze = GetWorld()->SpawnActor<ANaveEnemigaKamikaze>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveKamikaze);
		}
		ColumnaNavesEnemigasKamikaze.Add(Columna, NavesEnColumna);
	}
}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
}