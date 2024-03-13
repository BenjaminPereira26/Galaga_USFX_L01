// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaCazaNieta01.h"
#include "NaveEnemigaCazaNieta02.h"
#include "NaveEnemigaEspiaNieta01.h"
#include "NaveEnemigaEspiaNieta02.h"
#include "NaveEnemigaKamikazeNieta01.h"
#include "NaveEnemigaKamikazeNieta02.h"
#include "NaveEnemigaNodrizaNieta01.h"
#include "NaveEnemigaNodrizaNieta02.h"
#include "NaveEnemigaReabastecimientoN01.h"
#include "NaveEnemigaReabastecimientoN02.h"
#include "NaveEnemigaTransporteNieta01.h"
#include "NaveEnemigaTransporteNieta02.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);

	FVector ubicacionNaveEnemigaCazaNieta01_1 = FVector(703.0f, 604.0f, 250.0f);
	FVector ubicacionNaveEnemigaCazaNieta01_2 = FVector(807.0f, 610.0f, 250.0f);
	FVector ubicacionNaveEnemigaCazaNieta02_1 = FVector(800.0f, 500.0f, 250.0f);
	FVector ubicacionNaveEnemigaCazaNieta02_2 = FVector(700.0f, 500.0f, 250.0f);

	FVector ubicacionNaveEnemigaEspiaNieta01_1 = FVector(802.0f, 385.0f, 250.0f);
	FVector ubicacionNaveEnemigaEspiaNieta01_2 = FVector(800.0f, 262.0f, 250.0f);
	FVector ubicacionNaveEnemigaEspiaNieta02_1 = FVector(695.0f, 252.0f, 250.0f);
	FVector ubicacionNaveEnemigaEspiaNieta02_2 = FVector(694.0f, 386.0f, 250.0f);

	FVector ubicacionNaveEnemigaKamikazeNieta01_1 = FVector(797.0f, 134.0f, 250.0f);
	FVector ubicacionNaveEnemigaKamikazeNieta01_2 = FVector(796.0f, -10.0f, 250.0f);
	FVector ubicacionNaveEnemigaKamikazeNieta02_1 = FVector(687.0f, 143.0f, 250.0f);
	FVector ubicacionNaveEnemigaKamikazeNieta02_2 = FVector(692.0f,  -5.0f, 250.0f);

	FVector ubicacionNaveEnemigaNodrizaNieta01_1 = FVector(797.0f, -125.0f, 250.0f);
	FVector ubicacionNaveEnemigaNodrizaNieta01_2 = FVector(796.0f, -235.0f, 250.0f);
	FVector ubicacionNaveEnemigaNodrizaNieta02_1 = FVector(687.0f, -118.0f, 250.0f);
	FVector ubicacionNaveEnemigaNodrizaNieta02_2 = FVector(692.0f, -235.0f, 250.0f);

	FVector ubicacionNaveEnemigaReabastecimientoN01_1 = FVector(797.0f, -469.0f, 250.0f);
	FVector ubicacionNaveEnemigaReabastecimientoN01_2 = FVector(796.0f, -342.0f, 250.0f);
	FVector ubicacionNaveEnemigaReabastecimientoN02_1 = FVector(687.0f, -469.0f, 250.0f);
	FVector ubicacionNaveEnemigaReabastecimientoN02_2 = FVector(692.0f, -342.0f, 250.0f);

	FVector ubicacionNaveEnemigaTransporteNieta01_1 = FVector(797.0f, -668.0f, 250.0f);
	FVector ubicacionNaveEnemigaTransporteNieta01_2 = FVector(796.0f, -563.0f, 250.0f);
	FVector ubicacionNaveEnemigaTransporteNieta02_1 = FVector(687.0f, -668.0f, 250.0f);
	FVector ubicacionNaveEnemigaTransporteNieta02_2 = FVector(692.0f, -563.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);

		NaveEnemigaCazaNieta01_1 = World->SpawnActor<ANaveEnemigaCazaNieta01>(ubicacionNaveEnemigaCazaNieta01_1, rotacionNave);
		NaveEnemigaCazaNieta01_2 = World->SpawnActor<ANaveEnemigaCazaNieta01>(ubicacionNaveEnemigaCazaNieta01_2, rotacionNave);
		NaveEnemigaCazaNieta02_1 = World->SpawnActor<ANaveEnemigaCazaNieta02>(ubicacionNaveEnemigaCazaNieta02_1, rotacionNave);
		NaveEnemigaCazaNieta02_2 = World->SpawnActor<ANaveEnemigaCazaNieta02>(ubicacionNaveEnemigaCazaNieta02_2, rotacionNave);

		NaveEnemigaEspiaNieta01_1 = World->SpawnActor<ANaveEnemigaEspiaNieta01>(ubicacionNaveEnemigaEspiaNieta01_1, rotacionNave);
		NaveEnemigaEspiaNieta01_2 = World->SpawnActor<ANaveEnemigaEspiaNieta01>(ubicacionNaveEnemigaEspiaNieta01_2, rotacionNave);
		NaveEnemigaEspiaNieta02_1 = World->SpawnActor<ANaveEnemigaEspiaNieta02>(ubicacionNaveEnemigaEspiaNieta02_1, rotacionNave);
		NaveEnemigaEspiaNieta02_2 = World->SpawnActor<ANaveEnemigaEspiaNieta02>(ubicacionNaveEnemigaEspiaNieta02_2, rotacionNave);

		NaveEnemigaKamikazeNieta01_1 = World->SpawnActor<ANaveEnemigaKamikazeNieta01>(ubicacionNaveEnemigaKamikazeNieta01_1, rotacionNave);
		NaveEnemigaKamikazeNieta01_2 = World->SpawnActor<ANaveEnemigaKamikazeNieta01>(ubicacionNaveEnemigaKamikazeNieta01_2, rotacionNave);
		NaveEnemigaKamikazeNieta02_1 = World->SpawnActor<ANaveEnemigaKamikazeNieta02>(ubicacionNaveEnemigaKamikazeNieta02_1, rotacionNave);
		NaveEnemigaKamikazeNieta02_2 = World->SpawnActor<ANaveEnemigaKamikazeNieta02>(ubicacionNaveEnemigaKamikazeNieta02_2, rotacionNave);

		NaveEnemigaNodrizaNieta01_1 = World->SpawnActor<ANaveEnemigaNodrizaNieta01>(ubicacionNaveEnemigaNodrizaNieta01_1, rotacionNave);
		NaveEnemigaNodrizaNieta01_2 = World->SpawnActor<ANaveEnemigaNodrizaNieta01>(ubicacionNaveEnemigaNodrizaNieta01_2, rotacionNave);
		NaveEnemigaNodrizaNieta02_1 = World->SpawnActor<ANaveEnemigaNodrizaNieta02>(ubicacionNaveEnemigaNodrizaNieta02_1, rotacionNave);
		NaveEnemigaNodrizaNieta02_2 = World->SpawnActor<ANaveEnemigaNodrizaNieta02>(ubicacionNaveEnemigaNodrizaNieta02_2, rotacionNave);

		NaveEnemigaReabastecimientoN01_1 = World->SpawnActor<ANaveEnemigaReabastecimientoN01>(ubicacionNaveEnemigaReabastecimientoN01_1, rotacionNave);
		NaveEnemigaReabastecimientoN01_2 = World->SpawnActor<ANaveEnemigaReabastecimientoN01>(ubicacionNaveEnemigaReabastecimientoN01_2, rotacionNave);
		NaveEnemigaReabastecimientoN02_1 = World->SpawnActor<ANaveEnemigaReabastecimientoN02>(ubicacionNaveEnemigaReabastecimientoN02_1, rotacionNave);
		NaveEnemigaReabastecimientoN02_2 = World->SpawnActor<ANaveEnemigaReabastecimientoN02>(ubicacionNaveEnemigaReabastecimientoN02_2, rotacionNave);

		NaveEnemigaTransporteNieta01_1 = World->SpawnActor<ANaveEnemigaTransporteNieta01>(ubicacionNaveEnemigaTransporteNieta01_1, rotacionNave);
		NaveEnemigaTransporteNieta01_2 = World->SpawnActor<ANaveEnemigaTransporteNieta01>(ubicacionNaveEnemigaTransporteNieta01_2, rotacionNave);
		NaveEnemigaTransporteNieta02_1 = World->SpawnActor<ANaveEnemigaTransporteNieta02>(ubicacionNaveEnemigaTransporteNieta02_1, rotacionNave);
		NaveEnemigaTransporteNieta02_2 = World->SpawnActor<ANaveEnemigaTransporteNieta02>(ubicacionNaveEnemigaTransporteNieta02_2, rotacionNave);
	}

	NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(-1000.0f, 500.0f, 250.0f));

	NaveEnemigaCazaNieta01_1->SetPosicion(FVector(703.0f, 604.0f, 250.0f));
	NaveEnemigaCazaNieta01_2->SetPosicion(FVector(807.0f, 610.0f, 250.0f));
	NaveEnemigaCazaNieta02_1->SetPosicion(FVector(800.0f, 500.0f, 250.0f));
	NaveEnemigaCazaNieta02_2->SetPosicion(FVector(700.0f, 500.0f, 250.0f));

	NaveEnemigaEspiaNieta01_1->SetPosicion(FVector(802.0f, 385.0f, 250.0f));
	NaveEnemigaEspiaNieta01_2->SetPosicion(FVector(800.0f, 262.0f, 250.0f));
	NaveEnemigaEspiaNieta02_1->SetPosicion(FVector(695.0f, 252.0f, 250.0f));
	NaveEnemigaEspiaNieta02_2->SetPosicion(FVector(694.0f, 386.0f, 250.0f));

	NaveEnemigaKamikazeNieta01_1->SetPosicion(FVector(797.0f, 134.0f, 250.0f));
	NaveEnemigaKamikazeNieta01_2->SetPosicion(FVector(796.0f, -10.0f, 250.0f));
	NaveEnemigaKamikazeNieta02_1->SetPosicion(FVector(687.0f, 143.0f, 250.0f));
	NaveEnemigaKamikazeNieta02_2->SetPosicion(FVector(692.0f,  -5.0f, 250.0f));

	NaveEnemigaNodrizaNieta01_1->SetPosicion(FVector(797.0f, -125.0f, 250.0f));
	NaveEnemigaNodrizaNieta01_2->SetPosicion(FVector(796.0f, -235.0f, 250.0f));
	NaveEnemigaNodrizaNieta02_1->SetPosicion(FVector(687.0f, -118.0f, 250.0f));
	NaveEnemigaNodrizaNieta02_2->SetPosicion(FVector(692.0f, -235.0f, 250.0f));

	NaveEnemigaReabastecimientoN01_1->SetPosicion(FVector(797.0f, -469.0f, 250.0f));
	NaveEnemigaReabastecimientoN01_2->SetPosicion(FVector(796.0f, -342.0f, 250.0f));
	NaveEnemigaReabastecimientoN02_1->SetPosicion(FVector(687.0f, -469.0f, 250.0f));
	NaveEnemigaReabastecimientoN02_2->SetPosicion(FVector(692.0f, -342.0f, 250.0f));

	NaveEnemigaTransporteNieta01_1->SetPosicion(FVector(797.0f, -668.0f, 250.0f));
	NaveEnemigaTransporteNieta01_2->SetPosicion(FVector(796.0f, -563.0f, 250.0f));
	NaveEnemigaTransporteNieta02_1->SetPosicion(FVector(687.0f, -668.0f, 250.0f));
	NaveEnemigaTransporteNieta02_2->SetPosicion(FVector(692.0f, -563.0f, 250.0f));
}
