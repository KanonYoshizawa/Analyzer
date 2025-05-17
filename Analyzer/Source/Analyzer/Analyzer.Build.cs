// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Analyzer : ModuleRules
{
	public Analyzer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
