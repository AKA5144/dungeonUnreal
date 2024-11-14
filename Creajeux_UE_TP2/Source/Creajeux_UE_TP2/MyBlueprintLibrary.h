// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CREAJEUX_UE_TP2_API UMyBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
    UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Distance Between Two Actors"))
    static FVector  GetDistanceBetweenTwoActors(AActor* FromActor, AActor* ToActor);
    UFUNCTION(BlueprintPure, meta = (DisplayName = "Calculate Distance from Actor to Point"))
    static float CalculateDistanceFromActorToPoint(AActor* FromActor, FVector Point);
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Play Sound at Randomized Pitch"))
    static void PlaySountAtRandomizedPitch(UObject* WorldContextObject, USoundBase* Sound, FVector Location, float MinPitch, float MaxPitch);
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Spawn Particles at Actor Location"))
    static void  SpawnParticlesAtActorLocation(UParticleSystem* ParticleSystem, AActor* Actor);
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Object Material with Index"))
    static void  SetObjectMaterialWithIndex(UStaticMeshComponent* MeshComponent, UMaterialInterface* Material, int materialIndex);

};

