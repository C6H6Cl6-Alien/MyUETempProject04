// Copyright Epic Games, Inc. All Rights Reserved.

#include "TempProject04GameMode.h"
#include "TempProject04Character.h"
#include "UObject/ConstructorHelpers.h"

ATempProject04GameMode::ATempProject04GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
