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
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnAnalogValueChanged
	 */
	struct UBP_Widget_Scoreboard_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGamepadSelectButtonVisibility
	 */
	struct UBP_Widget_Scoreboard_C_UpdateGamepadSelectButtonVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnKeyUp
	 */
	struct UBP_Widget_Scoreboard_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetFormatText
	 */
	struct UBP_Widget_Scoreboard_C_GetFormatText_Params
	{
	public:
		bool                                                       bFirstElement;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5L3G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnCustomNavigation
	 */
	struct UBP_Widget_Scoreboard_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnKeyDown
	 */
	struct UBP_Widget_Scoreboard_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnFocusReceived
	 */
	struct UBP_Widget_Scoreboard_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGameModeText
	 */
	struct UBP_Widget_Scoreboard_C_UpdateGameModeText_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.HighlightPlayerStatus
	 */
	struct UBP_Widget_Scoreboard_C_HighlightPlayerStatus_Params
	{
	public:
		class AINSPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Status;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G86E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateScoreboardConfig
	 */
	struct UBP_Widget_Scoreboard_C_UpdateScoreboardConfig_Params
	{
	public:
		struct FScoreboardConfig                                   Config;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGameState
	 */
	struct UBP_Widget_Scoreboard_C_UpdateGameState_Params
	{
	public:
		class AINSGameState*                                       GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetRightTeamBottomBorderVisibility
	 */
	struct UBP_Widget_Scoreboard_C_GetRightTeamBottomBorderVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetLeftTeamBottomBorderVisibility
	 */
	struct UBP_Widget_Scoreboard_C_GetLeftTeamBottomBorderVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetOrderText
	 */
	struct UBP_Widget_Scoreboard_C_GetOrderText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetSpectatorLabelVisibility
	 */
	struct UBP_Widget_Scoreboard_C_GetSpectatorLabelVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__Button_377_K2Node_ComponentBoundEvent_67_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_C_BndEvt__Button_377_K2Node_ComponentBoundEvent_67_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnScoreboardShown
	 */
	struct UBP_Widget_Scoreboard_C_OnScoreboardShown_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoUpdateGameState
	 */
	struct UBP_Widget_Scoreboard_C_DoUpdateGameState_Params
	{
	public:
		class AINSGameState*                                       GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoUpdateGameModeText
	 */
	struct UBP_Widget_Scoreboard_C_DoUpdateGameModeText_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoBindTacticalMapPawnHowerStatusChanged
	 */
	struct UBP_Widget_Scoreboard_C_DoBindTacticalMapPawnHowerStatusChanged_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.Construct
	 */
	struct UBP_Widget_Scoreboard_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnScoreboardHidden
	 */
	struct UBP_Widget_Scoreboard_C_OnScoreboardHidden_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.ExecuteUbergraph_BP_Widget_Scoreboard
	 */
	struct UBP_Widget_Scoreboard_C_ExecuteUbergraph_BP_Widget_Scoreboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
