// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/BaseHUD.h"
#include "UI/Widgets/BaseUserWidget.h"

void ABaseHUD::BeginPlay()
{
	checkf(OverlayWidgetClass, TEXT("Overlay Widget Class uninitialized, please fill out BP_BaseHUD"));
	Super::BeginPlay();
	OverlayWidget = CreateWidget<UBaseUserWidget>(GetWorld(), OverlayWidgetClass);
	checkf(OverlayWidget, TEXT("Failed to create OverlayWidget"));

	OverlayWidget->AddToViewport();
}
