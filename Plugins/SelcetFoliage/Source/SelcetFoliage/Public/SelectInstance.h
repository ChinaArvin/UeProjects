// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Foliage/Public/InstancedFoliageActor.h"
#include "SelectInstance.generated.h"

/**
 * 
 */
UCLASS()
class  USelectInstance : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "MyTest sample test testing"), Category = "MyTestTesting")
		static TArray<UFoliageType*> GetSelectedInstances(UActorComponent* BaseComponent);
	
};
