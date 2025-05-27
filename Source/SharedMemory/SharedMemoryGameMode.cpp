// Copyright Epic Games, Inc. All Rights Reserved.

#include "SharedMemoryGameMode.h"
#include "SharedMemoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASharedMemoryGameMode::ASharedMemoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
