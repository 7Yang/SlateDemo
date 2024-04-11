// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Widgets/SWeakWidget.h"

#include "SimpleSHUD.generated.h"

/**
 */
UCLASS()
class UE5SLATEPRACTICE_API ASimpleSHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

    TSharedPtr<class SWidget> MainContainer;
};
