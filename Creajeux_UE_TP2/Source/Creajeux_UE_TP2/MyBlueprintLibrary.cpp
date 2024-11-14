// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintLibrary.h"

FVector UMyBlueprintLibrary::GetDistanceBetweenTwoActors(AActor* FromActor, AActor* ToActor)
{
	return FVector::ZeroVector;
}

float UMyBlueprintLibrary::CalculateDistanceFromActorToPoint(AActor* FromActor, FVector Point)
{
	return 0;
}

void UMyBlueprintLibrary::PlaySountAtRandomizedPitch(UObject* WorldContextObject, USoundBase* Sound, FVector Location, float MinPitch, float MaxPitch)
{

};
void UMyBlueprintLibrary::SpawnParticlesAtActorLocation(UParticleSystem* ParticleSystem, AActor* Actor)
{
	
}

void UMyBlueprintLibrary::SetObjectMaterialWithIndex(UStaticMeshComponent* MeshComponent, UMaterialInterface* Material, int materialIndex)
{

}