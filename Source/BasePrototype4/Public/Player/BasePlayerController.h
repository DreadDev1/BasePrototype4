// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class BASEPROTOTYPE4_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ABasePlayerController();
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	
#pragma region Input Mappings - Actions
	UPROPERTY(EditDefaultsOnly, Category = "BasePrototype|InputMappingContext")
	TArray<TObjectPtr<UInputMappingContext>> DefaultIMCs;
   	
	void Move(const FInputActionValue& InputActionValue);
	UPROPERTY(EditDefaultsOnly, Category= "BasePrototype|InputActions|Movement")
	TObjectPtr<UInputAction> MoveAction;
    
	void Look(const FInputActionValue& InputActionValue);
	UPROPERTY(EditDefaultsOnly, Category=  "BasePrototype|InputActions|Movement")
	TObjectPtr<UInputAction> LookAction;
#pragma endregion
};
