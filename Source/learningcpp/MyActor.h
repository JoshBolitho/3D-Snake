// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class LEARNINGCPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();


	// This exposes the following property "ValueOne" to the UE4 editor. 
	// It will appear editable in the "propertyGroupExample" group. 
	UPROPERTY(EditAnywhere, Category = "propertyGroupExample");
	int valueOne;
	// Another property added to the same example group.
	UPROPERTY(EditAnywhere, Category = "propertyGroupExample");
	float valueTwo;

	// A new property to be derived from the other two
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "propertyGroupExample");
	float valueThree;


	//Exposing the CalculateValues() function to the editor
	UFUNCTION(BlueprintCallable, Category = "Damage")
	void CalculateValues();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void PostInitProperties();
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);

};
