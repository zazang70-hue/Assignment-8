// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SpartaPlayerController.generated.h"

class UInputMappingContext; // IMC 관련 전방선언
class UInputAction;         // IA 관련 전방 선언

UCLASS()
class SPARATAPROJECTR_API ASpartaPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ASpartaPlayerController();

	// 에디터에서 세팅할 IMC
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	
	// IA_Move를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Input")
	UInputAction* MoveAction;
	
	// IA_Jump를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Input")
	UInputAction* JumpAction;
	
	// IA_Look를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Input")
	UInputAction* LookAction;
	
	// IA_Sprint를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Input")
	UInputAction* SprintAction;

	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "HUD")
	TSubclassOf<UUserWidget> HUDWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "HUD")
	UUserWidget* HUDWidgetInstance;

	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Menu")
	TSubclassOf<UUserWidget> MainMenuWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Menu")
	UUserWidget* MainMenuWidgetInstance;
	
	
	UFUNCTION(BlueprintPure, Category = "HUD")
	UUserWidget* GetHUDWidget() const;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void ShowGameHUD();
	UFUNCTION(BlueprintCallable, Category = "Menu")
	void ShowMainMenu(bool bIsRestart);
	UFUNCTION(BlueprintCallable, Category = "HUD")
	void StartGame();


protected:
	virtual void BeginPlay() override;

};