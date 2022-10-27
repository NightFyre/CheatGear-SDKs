#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateControlsContainerVisibility
	 */
	struct UBP_SpectatorUI_C_UpdateControlsContainerVisibility_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.OnShowRoundOverUI
	 */
	struct UBP_SpectatorUI_C_OnShowRoundOverUI_Params
	{
	public:
		struct FPlayerRoundOverData                                UIData;                                                  // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.OnHideRoundOverUI
	 */
	struct UBP_SpectatorUI_C_OnHideRoundOverUI_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.SetHidden
	 */
	struct UBP_SpectatorUI_C_SetHidden_Params
	{
	public:
		bool                                                       bNewHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateShoutcasterVisibility
	 */
	struct UBP_SpectatorUI_C_UpdateShoutcasterVisibility_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateSpectatorPanelVisibility
	 */
	struct UBP_SpectatorUI_C_UpdateSpectatorPanelVisibility_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.SetDedicatedSpectator
	 */
	struct UBP_SpectatorUI_C_SetDedicatedSpectator_Params
	{
	public:
		bool                                                       bNewDedicatedSpectator;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.SetIsSpectator
	 */
	struct UBP_SpectatorUI_C_SetIsSpectator_Params
	{
	public:
		bool                                                       bNewIsSpectator;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.GetControlsVisibility
	 */
	struct UBP_SpectatorUI_C_GetControlsVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.UpdatePlayerPreferences
	 */
	struct UBP_SpectatorUI_C_UpdatePlayerPreferences_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateHiddenState
	 */
	struct UBP_SpectatorUI_C_UpdateHiddenState_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateSpectatorStatus
	 */
	struct UBP_SpectatorUI_C_UpdateSpectatorStatus_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.GetPlayerWidget
	 */
	struct UBP_SpectatorUI_C_GetPlayerWidget_Params
	{
	public:
		int32_t                                                    TeamId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_SpectatorPlayerWidget_C*                         Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.UpdatePlayerWidgets
	 */
	struct UBP_SpectatorUI_C_UpdatePlayerWidgets_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.IsIngameMenuActive
	 */
	struct UBP_SpectatorUI_C_IsIngameMenuActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CLX4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.IsPlayingBackDemo
	 */
	struct UBP_SpectatorUI_C_IsPlayingBackDemo_Params
	{
	public:
		bool                                                       WatchingDemo;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TZ7K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.OnHUDPreferencesUpdated
	 */
	struct UBP_SpectatorUI_C_OnHUDPreferencesUpdated_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.Tick
	 */
	struct UBP_SpectatorUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.Construct
	 */
	struct UBP_SpectatorUI_C_Construct_Params
	{	};

	/**
	 * Function BP_SpectatorUI.BP_SpectatorUI_C.ExecuteUbergraph_BP_SpectatorUI
	 */
	struct UBP_SpectatorUI_C_ExecuteUbergraph_BP_SpectatorUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YV9A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
