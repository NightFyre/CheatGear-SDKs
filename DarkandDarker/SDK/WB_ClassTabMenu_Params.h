#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WB_ClassTabMenu.WB_ClassTabMenu_C.Construct
	 */
	struct UWB_ClassTabMenu_C_Construct_Params
	{	};

	/**
	 * Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuPerkandSkillButtonClicked
	 */
	struct UWB_ClassTabMenu_C_TapMenuPerkandSkillButtonClicked_Params
	{	};

	/**
	 * Function WB_ClassTabMenu.WB_ClassTabMenu_C.UpdateTapMenuSwitch
	 */
	struct UWB_ClassTabMenu_C_UpdateTapMenuSwitch_Params
	{
	public:
		EWidgetClassGroupType                                      CurrentTapType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuLevelButtonClicked
	 */
	struct UWB_ClassTabMenu_C_TapMenuLevelButtonClicked_Params
	{	};

	/**
	 * Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuSpellButtonClicked
	 */
	struct UWB_ClassTabMenu_C_TapMenuSpellButtonClicked_Params
	{	};

	/**
	 * Function WB_ClassTabMenu.WB_ClassTabMenu_C.OnLobbyCharacterInfoUpdated_BP
	 */
	struct UWB_ClassTabMenu_C_OnLobbyCharacterInfoUpdated_BP_Params
	{
	public:
		struct FPrimaryAssetId                                     CharacterClassId;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassTabMenu.WB_ClassTabMenu_C.ExecuteUbergraph_WB_ClassTabMenu
	 */
	struct UWB_ClassTabMenu_C_ExecuteUbergraph_WB_ClassTabMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8AYA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
