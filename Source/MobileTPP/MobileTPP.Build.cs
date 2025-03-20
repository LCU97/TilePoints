// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MobileTPP : ModuleRules
{
	public MobileTPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
