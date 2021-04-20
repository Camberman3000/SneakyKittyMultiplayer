// Copyright Epic Games, Inc. All Rights Reserved.

#include "KittyMultiPlayerGameMode.h"
#include "KittyMultiPlayerHUD.h"
#include "KittyMultiPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKittyMultiPlayerGameMode::AKittyMultiPlayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AKittyMultiPlayerHUD::StaticClass();
}
