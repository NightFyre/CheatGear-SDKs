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
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.GetVisibility_1
	 */
	struct UWBP_DialogueBox_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_883_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DialogueBox_C_BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_883_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.BndEvt__Button_Password_Cancel_K2Node_ComponentBoundEvent_1107_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DialogueBox_C_BndEvt__Button_Password_Cancel_K2Node_ComponentBoundEvent_1107_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.Construct
	 */
	struct UWBP_DialogueBox_C_Construct_Params
	{	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.PreConstruct
	 */
	struct UWBP_DialogueBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.Close
	 */
	struct UWBP_DialogueBox_C_Close_Params
	{	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.ExecuteUbergraph_WBP_DialogueBox
	 */
	struct UWBP_DialogueBox_C_ExecuteUbergraph_WBP_DialogueBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WUYT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.OnCancelClicked__DelegateSignature
	 */
	struct UWBP_DialogueBox_C_OnCancelClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogueBox.WBP_DialogueBox_C.OnOkClicked__DelegateSignature
	 */
	struct UWBP_DialogueBox_C_OnOkClicked__DelegateSignature_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
