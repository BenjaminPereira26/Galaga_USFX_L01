// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia100pts.h"

ACapsulaEnergia100pts::ACapsulaEnergia100pts()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaEnergia->SetStaticMesh(CapsulaMesh.Object);
	SetVelocidad(100.0f);
	SetCantEnergia(50);
}

void ACapsulaEnergia100pts::Mover(float DeltaTime)
{
}

void ACapsulaEnergia100pts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
