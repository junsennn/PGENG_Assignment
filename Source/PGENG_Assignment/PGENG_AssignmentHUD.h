// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "PGENG_AssignmentHUD.generated.h"

UCLASS()
class APGENG_AssignmentHUD : public AHUD
{
	GENERATED_BODY()

public:
	APGENG_AssignmentHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

