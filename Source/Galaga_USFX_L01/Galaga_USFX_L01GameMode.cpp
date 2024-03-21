// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaKamikaze.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
	const int32 NumeroDeColumnasReabasteimiento = 1;
	const int32 NumeroDeFilasReabastecimiento = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasReabasteimiento; ++Columna)
	{
		TArray<ANaveEnemigaReabastecimiento*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasReabastecimiento; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1800.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaReabastecimiento* NuevaNaveReabastecimiento = GetWorld()->SpawnActor<ANaveEnemigaReabastecimiento>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveReabastecimiento);
		}
		ColumnaNavesEnemigasReabastecimiento.Add(Columna, NavesEnColumna);
	}
	
	const int32 NumeroDeColumnasNodriza = 1;
	const int32 NumeroDeFilasNodriza = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasNodriza; ++Columna)
	{
		TArray<ANaveEnemigaNodriza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasNodriza; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1500.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaNodriza* NuevaNaveNodriza = GetWorld()->SpawnActor<ANaveEnemigaNodriza>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveNodriza);
		}
		ColumnaNavesEnemigasNodriza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasEspia = 1;
	const int32 NumeroDeFilasEspia = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasEspia; ++Columna)
	{
		TArray<ANaveEnemigaEspia*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasEspia; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1200.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaEspia* NuevaNaveEspia = GetWorld()->SpawnActor<ANaveEnemigaEspia>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveEspia);
		}
		ColumnaNavesEnemigasEspia.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasTransporte = 1;
	const int32 NumeroDeFilasTransporte = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasTransporte; ++Columna)
	{
		TArray<ANaveEnemigaTransporte*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasTransporte; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 900.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveTransporte);
		}
		ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasCaza = 2;
	const int32 NumeroDeFilasCaza = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveCaza);
			if (Fila == 2)
			{
				NuevaNaveCaza->Destroy();
			}
		}
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasKamikaze = 1;
	const int32 NumeroDeFilasKamikaze = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasKamikaze; ++Columna)
	{
		TArray<ANaveEnemigaKamikaze*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasKamikaze; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 0.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaKamikaze* NuevaNaveKamikaze = GetWorld()->SpawnActor<ANaveEnemigaKamikaze>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveKamikaze);
			if (Fila % 2 == 1)
			{
				NuevaNaveKamikaze->Destroy();
			}
		}
		ColumnaNavesEnemigasKamikaze.Add(Columna, NavesEnColumna);
	}

	TiempoTranscurrido = 0;
	}

}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
}