#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.Get_Button_Mute_ToolTipWidget_1
	 */
	struct UWBP_GameInfo_Player_C_Get_Button_Mute_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetOnDutyVis
	 */
	struct UWBP_GameInfo_Player_C_GetOnDutyVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetUniqueId
	 */
	struct UWBP_GameInfo_Player_C_GetUniqueId_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetMuteBrush
	 */
	struct UWBP_GameInfo_Player_C_GetMuteBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetPlayerPing
	 */
	struct UWBP_GameInfo_Player_C_GetPlayerPing_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetPlayerName
	 */
	struct UWBP_GameInfo_Player_C_GetPlayerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.GetLineColour
	 */
	struct UWBP_GameInfo_Player_C_GetLineColour_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.UpdateVOIPPulse
	 */
	struct UWBP_GameInfo_Player_C_UpdateVOIPPulse_Params
	{
	public:
		bool                                                       Talking;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.BndEvt__Button_Mute_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_GameInfo_Player_C_BndEvt__Button_Mute_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.Tick
	 */
	struct UWBP_GameInfo_Player_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo_Player.WBP_GameInfo_Player_C.ExecuteUbergraph_WBP_GameInfo_Player
	 */
	struct UWBP_GameInfo_Player_C_ExecuteUbergraph_WBP_GameInfo_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F0DJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
