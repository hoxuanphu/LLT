// Copyright (c) Viga Entertainment Technology Pvt. ltd. 2022, All rights Reserved

using UnrealBuildTool;

public class RgbPoseLiveLink : ModuleRules
{
	public RgbPoseLiveLink(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"LiveLinkInterface",
				"Messaging",
				"Engine",
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"CoreUObject",
				"Engine",
				"InputCore",
                "Networking",
				"Sockets",
				"LiveLink",
				"AnimGraph",
				"BlueprintGraph",
				"AnimGraphRuntime",
				"LiveLinkInterface",
			}
			);

        if (Target.Type == TargetType.Editor)
        {
            PrivateDependencyModuleNames.Add("UnrealEd");
        }

DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
