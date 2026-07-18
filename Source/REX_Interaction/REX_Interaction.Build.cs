// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class REX_Interaction : ModuleRules
{
	public REX_Interaction(ReadOnlyTargetRules Target) : base(Target)
	{
		// Distributed as a precompiled (closed-source) plugin: link the shipped
		// binaries/objs instead of compiling from source (Private/ is not shipped).
		bUsePrecompiled = true;

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
				"CoreUObject",
				"Engine",
				"InputCore",
				"EnhancedInput",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
			);

		// Chỉ dùng cho hàm tạo material trong editor (CreatePlaneMaterial).
		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"UnrealEd",
					"MaterialEditor",
					"AssetTools",
				}
				);
		}
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}