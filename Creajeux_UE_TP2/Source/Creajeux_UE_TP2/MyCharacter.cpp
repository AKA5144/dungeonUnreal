// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Camera/CameraComponent.h" 

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(GetMesh());
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCharacter::interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Function called: %s"), TEXT(__FUNCTION__));
}
void AMyCharacter::Scroll(float Direction)
{
	UE_LOG(LogTemp, Warning, TEXT("Direction Value: %f"), Direction);
}
void AMyCharacter::Grab()
{
	UE_LOG(LogTemp, Warning, TEXT("Function called: %s"), TEXT(__FUNCTION__));
}
void AMyCharacter::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("Function called: %s"), TEXT(__FUNCTION__));
}