// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TempProject04 : ModuleRules
{
	public TempProject04(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
