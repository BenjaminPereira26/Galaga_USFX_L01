// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

//class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;

class ANaveEnemigaCazaNieta01;
class ANaveEnemigaCazaNieta02;

class ANaveEnemigaEspiaNieta01;
class ANaveEnemigaEspiaNieta02;

class ANaveEnemigaKamikazeNieta01;
class ANaveEnemigaKamikazeNieta02;

class ANaveEnemigaNodrizaNieta01;
class ANaveEnemigaNodrizaNieta02;

class ANaveEnemigaReabastecimientoN01;
class ANaveEnemigaReabastecimientoN02;

class ANaveEnemigaTransporteNieta01;
class ANaveEnemigaTransporteNieta02;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

public:
	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;

	ANaveEnemigaCazaNieta01* NaveEnemigaCazaNieta01_1;
	ANaveEnemigaCazaNieta01* NaveEnemigaCazaNieta01_2;
	ANaveEnemigaCazaNieta02* NaveEnemigaCazaNieta02_1;
	ANaveEnemigaCazaNieta02* NaveEnemigaCazaNieta02_2;

	ANaveEnemigaEspiaNieta01* NaveEnemigaEspiaNieta01_1;
	ANaveEnemigaEspiaNieta01* NaveEnemigaEspiaNieta01_2;
	ANaveEnemigaEspiaNieta02* NaveEnemigaEspiaNieta02_1;
	ANaveEnemigaEspiaNieta02* NaveEnemigaEspiaNieta02_2;

	ANaveEnemigaKamikazeNieta01* NaveEnemigaKamikazeNieta01_1;
	ANaveEnemigaKamikazeNieta01* NaveEnemigaKamikazeNieta01_2;
	ANaveEnemigaKamikazeNieta02* NaveEnemigaKamikazeNieta02_1;
	ANaveEnemigaKamikazeNieta02* NaveEnemigaKamikazeNieta02_2;

	ANaveEnemigaNodrizaNieta01* NaveEnemigaNodrizaNieta01_1;
	ANaveEnemigaNodrizaNieta01* NaveEnemigaNodrizaNieta01_2;
	ANaveEnemigaNodrizaNieta02* NaveEnemigaNodrizaNieta02_1;
	ANaveEnemigaNodrizaNieta02* NaveEnemigaNodrizaNieta02_2;

	ANaveEnemigaReabastecimientoN01* NaveEnemigaReabastecimientoN01_1;
	ANaveEnemigaReabastecimientoN01* NaveEnemigaReabastecimientoN01_2;
	ANaveEnemigaReabastecimientoN02* NaveEnemigaReabastecimientoN02_1;
	ANaveEnemigaReabastecimientoN02* NaveEnemigaReabastecimientoN02_2;

	ANaveEnemigaTransporteNieta01* NaveEnemigaTransporteNieta01_1;
	ANaveEnemigaTransporteNieta01* NaveEnemigaTransporteNieta01_2;
	ANaveEnemigaTransporteNieta02* NaveEnemigaTransporteNieta02_1;
	ANaveEnemigaTransporteNieta02* NaveEnemigaTransporteNieta02_2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};