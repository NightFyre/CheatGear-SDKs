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
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.onAudioOptionInitialized
	 */
	struct UWB_MenuOptionsAudios_C_onAudioOptionInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnButtonInitialized
	 */
	struct UWB_MenuOptionsAudios_C_OnButtonInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.SetActivateSlotHoverDetailText
	 */
	struct UWB_MenuOptionsAudios_C_SetActivateSlotHoverDetailText_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Descript;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Set Activate Slot Hover
	 */
	struct UWB_MenuOptionsAudios_C_SetActivateSlotHover_Params
	{
	public:
		class UWidgetSwitcher*                                     ActivateSwitcherSelected;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnInitialized
	 */
	struct UWB_MenuOptionsAudios_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnTotalVolumeHovered
	 */
	struct UWB_MenuOptionsAudios_C_OnTotalVolumeHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnEffectVolumeHovered
	 */
	struct UWB_MenuOptionsAudios_C_OnEffectVolumeHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnMusicVolumeHovered
	 */
	struct UWB_MenuOptionsAudios_C_OnMusicVolumeHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnBackgroundVolumeHovered
	 */
	struct UWB_MenuOptionsAudios_C_OnBackgroundVolumeHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnGameUserSettingAudios
	 */
	struct UWB_MenuOptionsAudios_C_OnGameUserSettingAudios_Params
	{
	public:
		struct FGameUserSettingAudios                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FGameUserSettingAudios                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.UpdateWindowFocusChanged
	 */
	struct UWB_MenuOptionsAudios_C_UpdateWindowFocusChanged_Params
	{
	public:
		bool                                                       IsFocus;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBackgroundOption;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IYYH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TotalVolume;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.ExecuteUbergraph_WB_MenuOptionsAudios
	 */
	struct UWB_MenuOptionsAudios_C_ExecuteUbergraph_WB_MenuOptionsAudios_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
