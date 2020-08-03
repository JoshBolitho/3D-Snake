// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	valueOne = 10;
	valueTwo = 20.5f;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}




// Allows valueThree to be dynamically recalculated in the editor ================================
void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();

	CalculateValues();
}

void AMyActor::CalculateValues()
{
	valueThree = valueOne / valueTwo;
}

#if WITH_EDITOR
void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	CalculateValues();

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif
// =================================================================================================