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
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnKeyDown
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnFocusReceived
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateCompetitiveObjectiveVisibility
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_UpdateCompetitiveObjectiveVisibility_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BoolToVisibility
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_BoolToVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateColumnVisibilityFromScoreboardConfig
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_UpdateColumnVisibilityFromScoreboardConfig_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OpenPlayerMenu
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_OpenPlayerMenu_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnMouseButtonDown
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.GetControllerFromState
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_GetControllerFromState_Params
	{
	public:
		class AINSPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnHoverStateChange
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_OnHoverStateChange_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateDeveloperStatus
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_UpdateDeveloperStatus_Params
	{
	public:
		class AINSPlayerState*                                     InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDeveloperStatus;                                        // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdatePlayerExperience
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_UpdatePlayerExperience_Params
	{
	public:
		class AINSPlayerState*                                     InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewExperience;                                           // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.DoSetDefaultsToPlayerBadge
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_DoSetDefaultsToPlayerBadge_Params
	{
	public:
		class AINSPlayerState*                                     InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateExtendedColumnVisiblity
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_UpdateExtendedColumnVisiblity_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.Construct
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnFocusLost
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnClickedMuteButton
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_OnClickedMuteButton_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerRow
	 */
	struct UBP_Widget_Scoreboard_PlayerRow_C_ExecuteUbergraph_BP_Widget_Scoreboard_PlayerRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_21PP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
