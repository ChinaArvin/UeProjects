// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectInstance.h"

TArray<UFoliageType*> USelectInstance::GetSelectedInstances(UActorComponent* BaseComponent)
{
	ULevel* TargetLevel = BaseComponent->GetComponentLevel();
	AInstancedFoliageActor* IFA = AInstancedFoliageActor::GetInstancedFoliageActorForLevel(TargetLevel, true);
	TMap<UFoliageType*, FFoliageInfo*> SelectedInstanceFoliageTypes = IFA->GetSelectedInstancesFoliageType();
	//TMap<UFoliageType*, FFoliageInfo*> Instances = InstancedFoliageActor->GetSelectedInstancesFoliageType();
	int32 Count = SelectedInstanceFoliageTypes.Num();

	TArray<UFoliageType*>   FruitKeys;
	SelectedInstanceFoliageTypes.GenerateKeyArray(FruitKeys);

	//UE_LOG(LogTemp, Error, TEXT("%d"), Count);

	return FruitKeys;
}

