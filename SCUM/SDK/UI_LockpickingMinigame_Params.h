#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetDifficultyVisuals
	 */
	struct UUI_LockpickingMinigame_C_SetDifficultyVisuals_Params
	{
	public:
		ELockPickingDifficulty                                     Difficulty;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick
	 */
	struct UUI_LockpickingMinigame_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo
	 */
	struct UUI_LockpickingMinigame_C_ShowInfo_Params
	{	};

	/**
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo
	 */
	struct UUI_LockpickingMinigame_C_HideInfo_Params
	{	};

	/**
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess
	 */
	struct UUI_LockpickingMinigame_C_OnSuccess_Params
	{	};

	/**
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure
	 */
	struct UUI_LockpickingMinigame_C_OnFailure_Params
	{	};

	/**
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetLockPickingDifficulty
	 */
	struct UUI_LockpickingMinigame_C_SetLockPickingDifficulty_Params
	{
	public:
		ELockPickingDifficulty                                     Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame
	 */
	struct UUI_LockpickingMinigame_C_ExecuteUbergraph_UI_LockpickingMinigame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
