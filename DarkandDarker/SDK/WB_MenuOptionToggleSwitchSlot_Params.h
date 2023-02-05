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
	 * Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetButtomText
	 */
	struct UWB_MenuOptionToggleSwitchSlot_C_SetButtomText_Params
	{	};

	/**
	 * Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ChangeButtonActivated
	 */
	struct UWB_MenuOptionToggleSwitchSlot_C_ChangeButtonActivated_Params
	{
	public:
		class UWB_OptionCheckButton01_C*                           ActivateButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWB_OptionCheckButton01_C*                           DeactivateButton;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetOptionButtonTile
	 */
	struct UWB_MenuOptionToggleSwitchSlot_C_SetOptionButtonTile_Params
	{
	public:
		class UWB_OptionCheckButton01_C*                           OptionButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InTitle;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnInitialized
	 */
	struct UWB_MenuOptionToggleSwitchSlot_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnToggleSwitch
	 */
	struct UWB_MenuOptionToggleSwitchSlot_C_OnToggleSwitch_Params
	{
	public:
		bool                                                       InSwitch;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.UpdateButtonText
	 */
	struct UWB_MenuOptionToggleSwitchSlot_C_UpdateButtonText_Params
	{
	public:
		class FText                                                LeftText;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                RightText;                                               // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot
	 */
	struct UWB_MenuOptionToggleSwitchSlot_C_ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
