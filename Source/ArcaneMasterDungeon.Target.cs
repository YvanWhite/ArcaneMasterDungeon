// Copyright YvanWhite

using UnrealBuildTool;
using System.Collections.Generic;

public class ArcaneMasterDungeonTarget : TargetRules
{
	public ArcaneMasterDungeonTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "ArcaneMasterDungeon" } );
	}
}
