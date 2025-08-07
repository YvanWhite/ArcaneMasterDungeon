// Copyright YvanWhite

using UnrealBuildTool;
using System.Collections.Generic;

public class ArcaneMasterDungeonEditorTarget : TargetRules
{
	public ArcaneMasterDungeonEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "ArcaneMasterDungeon" } );
	}
}
