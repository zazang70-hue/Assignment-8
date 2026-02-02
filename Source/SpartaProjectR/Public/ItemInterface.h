// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
    GENERATED_BODY()
};

class SPARATAPROJECTR_API IItemInterface
{
    GENERATED_BODY()

public:
    UFUNCTION()
    virtual void OnItemOverlap(
        UPrimitiveComponent* OverlappedComp, // 오버랩을 감지하는 자신을 가리킴
        AActor* OtherActor,                  // 오버립을 이르킨 대상
        UPrimitiveComponent* OtherComp,      // 대상의 컴포넌트
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult) = 0;
    
    UFUNCTION()
    virtual void OnItemEndOverlap(
        UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex) = 0;

    virtual void ActivateItem(AActor* Activator) = 0;
    virtual FName GetItemType() const = 0;
};
