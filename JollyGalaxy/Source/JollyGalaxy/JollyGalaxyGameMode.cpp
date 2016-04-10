// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "JollyGalaxy.h"
#include "JollyGalaxyGameMode.h"
#include "JollyGalaxyHUD.h"
#include "JollyGalaxyCharacter.h"

AJollyGalaxyGameMode::AJollyGalaxyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJollyGalaxyHUD::StaticClass();
}
