// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fps_FuturisticGameMode.h"
#include "Fps_FuturisticCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFps_FuturisticGameMode::AFps_FuturisticGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
