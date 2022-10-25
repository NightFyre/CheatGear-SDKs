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
	 * Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.GetTextColorAndOpacity
	 */
	struct UWBP_QuitDropDown_ExitGame_C_GetTextColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_QuitDropDown_ExitGame_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_1029_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.OnClickedQuit
	 */
	struct UWBP_QuitDropDown_ExitGame_C_OnClickedQuit_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.ExecuteUbergraph_WBP_QuitDropDown_ExitGame
	 */
	struct UWBP_QuitDropDown_ExitGame_C_ExecuteUbergraph_WBP_QuitDropDown_ExitGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0XRK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_QuitDropDown_ExitGame.WBP_QuitDropDown_ExitGame_C.OnEntrySelected__DelegateSignature
	 */
	struct UWBP_QuitDropDown_ExitGame_C_OnEntrySelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
