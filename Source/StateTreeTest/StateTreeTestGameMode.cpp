// Copyright Epic Games, Inc. All Rights Reserved.

#include "StateTreeTestGameMode.h"
#include "StateTreeTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStateTreeTestGameMode::AStateTreeTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
