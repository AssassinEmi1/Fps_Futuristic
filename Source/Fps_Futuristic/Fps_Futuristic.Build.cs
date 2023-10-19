// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Fps_Futuristic : ModuleRules
{
	public Fps_Futuristic(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
