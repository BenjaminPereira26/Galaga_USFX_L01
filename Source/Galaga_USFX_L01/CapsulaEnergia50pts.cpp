// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia50pts.h"

ACapsulaEnergia50pts::ACapsulaEnergia50pts()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaEnergia->SetStaticMesh(CapsulaMesh.Object);
	SetVelocidad(100.0f);
	SetCantEnergia(50);
}

void ACapsulaEnergia50pts::Mover(float DeltaTime)
{
}

void ACapsulaEnergia50pts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
