// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP_SteamGameMode.h"
#include "MP_SteamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMP_SteamGameMode::AMP_SteamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
