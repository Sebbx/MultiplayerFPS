// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerFPSGameMode.h"
#include "MultiplayerFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerFPSGameMode::AMultiplayerFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
