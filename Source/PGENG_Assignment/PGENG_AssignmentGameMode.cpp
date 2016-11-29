// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "PGENG_Assignment.h"
#include "PGENG_AssignmentGameMode.h"
#include "PGENG_AssignmentHUD.h"
#include "PGENG_AssignmentCharacter.h"

APGENG_AssignmentGameMode::APGENG_AssignmentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APGENG_AssignmentHUD::StaticClass();
}
