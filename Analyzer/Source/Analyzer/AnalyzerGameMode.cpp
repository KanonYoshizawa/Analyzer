// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnalyzerGameMode.h"
#include "AnalyzerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnalyzerGameMode::AAnalyzerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
