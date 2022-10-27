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
	 * Function WBP_QuitDropDown_Disconnect.WBP_QuitDropDown_Disconnect_C.GetTextColorAndOpacity
	 */
	struct UWBP_QuitDropDown_Disconnect_C_GetTextColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_QuitDropDown_Disconnect.WBP_QuitDropDown_Disconnect_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_QuitDropDown_Disconnect_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_QuitDropDown_Disconnect.WBP_QuitDropDown_Disconnect_C.Construct
	 */
	struct UWBP_QuitDropDown_Disconnect_C_Construct_Params
	{	};

	/**
	 * Function WBP_QuitDropDown_Disconnect.WBP_QuitDropDown_Disconnect_C.OnClickedDisconnect
	 */
	struct UWBP_QuitDropDown_Disconnect_C_OnClickedDisconnect_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuitDropDown_Disconnect.WBP_QuitDropDown_Disconnect_C.ExecuteUbergraph_WBP_QuitDropDown_Disconnect
	 */
	struct UWBP_QuitDropDown_Disconnect_C_ExecuteUbergraph_WBP_QuitDropDown_Disconnect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuitDropDown_Disconnect.WBP_QuitDropDown_Disconnect_C.OnEntrySelected__DelegateSignature
	 */
	struct UWBP_QuitDropDown_Disconnect_C_OnEntrySelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
