// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();

    // Calcular el desplazamiento circular
    float Radio = 2.0f; // Radio del círculo
    float VelocidadAngular = 2 * PI / 10.0f; // Velocidad angular (ajusta este valor según sea necesario)
    float TiempoActual = GetWorld()->GetTimeSeconds(); // Tiempo actual del juego
    float DesplazamientoX = Radio * FMath::Cos(VelocidadAngular * TiempoActual);
    float DesplazamientoY = Radio * FMath::Sin(VelocidadAngular * TiempoActual);

    // Calcular la nueva posición
    FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX, PosicionActual.Y + DesplazamientoY, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaNodriza::Destruirse()
{
}

void ANaveEnemigaNodriza::Desplegar()
{
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
