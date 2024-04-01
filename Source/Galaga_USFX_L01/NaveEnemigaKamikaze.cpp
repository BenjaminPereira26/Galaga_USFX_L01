// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaKamikaze.h"

ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaKamikaze::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 10 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);
	if (PosicionActual.X < 1100.0f) {
		NuevaPosicion = FVector(PosicionActual.X - 200 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);
		SetActorLocation(NuevaPosicion);
	}

	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1200.0f, PosicionActual.Y, PosicionActual.Z));


	}
}

void ANaveEnemigaKamikaze::Destruirse()
{
}

void ANaveEnemigaKamikaze::CaidaLibre()
{
}

void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
