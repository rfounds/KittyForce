// Copyright Epic Games, Inc. All Rights Reserved.

#include "KittyForceGameMode.h"
#include "KittyForceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKittyForceGameMode::AKittyForceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
