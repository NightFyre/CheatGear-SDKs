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
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnKeyDown
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.UpdateButtonVisibility
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_UpdateButtonVisibility_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.Get_BtnSpectatePlayer_bIsEnabled_1
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_Get_BtnSpectatePlayer_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_27PY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnFocusReceived
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.Construct
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_126_OnClick__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_126_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_137_OnClick__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_137_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_37_OnClick__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_37_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnHideWidget
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_OnHideWidget_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnShowRoundOver
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_OnShowRoundOver_Params
	{
	public:
		struct FPlayerRoundOverData                                UIData;                                                  // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerMenu
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_ExecuteUbergraph_BP_Widget_Scoreboard_PlayerMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9K9G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnButtonPresed__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_PlayerMenu_C_OnButtonPresed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
