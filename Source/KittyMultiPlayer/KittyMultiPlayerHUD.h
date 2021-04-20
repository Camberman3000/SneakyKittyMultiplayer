// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "KittyMultiPlayerHUD.generated.h"

UCLASS()
class AKittyMultiPlayerHUD : public AHUD
{
	GENERATED_BODY()

public:
	AKittyMultiPlayerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

