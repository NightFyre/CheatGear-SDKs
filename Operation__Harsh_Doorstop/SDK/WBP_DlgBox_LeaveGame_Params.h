#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_DlgBox_LeaveGame.WBP_DlgBox_LeaveGame_C.OnMouseButtonDown
	 */
	struct UWBP_DlgBox_LeaveGame_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DlgBox_LeaveGame.WBP_DlgBox_LeaveGame_C.Construct
	 */
	struct UWBP_DlgBox_LeaveGame_C_Construct_Params
	{	};

	/**
	 * Function WBP_DlgBox_LeaveGame.WBP_DlgBox_LeaveGame_C.BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 */
	struct UWBP_DlgBox_LeaveGame_C_BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_DialogBox_Button_C*                             ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DlgBox_LeaveGame.WBP_DlgBox_LeaveGame_C.BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
	 */
	struct UWBP_DlgBox_LeaveGame_C_BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature_Params
	{
	public:
		class UWBP_DialogBox_Button_C*                             ClickedBtn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DlgBox_LeaveGame.WBP_DlgBox_LeaveGame_C.DummyInput
	 */
	struct UWBP_DlgBox_LeaveGame_C_DummyInput_Params
	{	};

	/**
	 * Function WBP_DlgBox_LeaveGame.WBP_DlgBox_LeaveGame_C.ExecuteUbergraph_WBP_DlgBox_LeaveGame
	 */
	struct UWBP_DlgBox_LeaveGame_C_ExecuteUbergraph_WBP_DlgBox_LeaveGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
