// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleSHUD.h"
#include "Slates/STestSuite.h"

void ASimpleSHUD::BeginPlay()
{
	Super::BeginPlay();

    if (GEngine && GEngine->GameViewport) 
    {
        GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MainContainer, SWeakWidget).PossiblyNullContent(RestoreSlateTestSuite()));
    }
}
