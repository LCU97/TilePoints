// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobileTPPGameMode.h"
#include "MobileTPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMobileTPPGameMode::AMobileTPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
