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
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.OnFocusReceived
	 */
	struct UBP_FeedbackForm_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.OnKeyUp
	 */
	struct UBP_FeedbackForm_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.OnFeedbackSubmitted
	 */
	struct UBP_FeedbackForm_C_OnFeedbackSubmitted_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.OnSendReportComplete_D71CA2C044B56BA1DC51E3A49F0DCDA8
	 */
	struct UBP_FeedbackForm_C_OnSendReportComplete_D71CA2C044B56BA1DC51E3A49F0DCDA8_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_57_OnClick__DelegateSignature
	 */
	struct UBP_FeedbackForm_C_BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_57_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.BndEvt__SubmitIssueButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UBP_FeedbackForm_C_BndEvt__SubmitIssueButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UBP_FeedbackForm_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBP_FeedbackForm_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.Construct
	 */
	struct UBP_FeedbackForm_C_Construct_Params
	{	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.Seleciton Changed
	 */
	struct UBP_FeedbackForm_C_Seleciton_Changed_Params
	{
	public:
		class FText                                                SelectedItem;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectionType;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FeedbackForm.BP_FeedbackForm_C.ExecuteUbergraph_BP_FeedbackForm
	 */
	struct UBP_FeedbackForm_C_ExecuteUbergraph_BP_FeedbackForm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
