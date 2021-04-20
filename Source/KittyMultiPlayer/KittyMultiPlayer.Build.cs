// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KittyMultiPlayer : ModuleRules
{
	public KittyMultiPlayer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
