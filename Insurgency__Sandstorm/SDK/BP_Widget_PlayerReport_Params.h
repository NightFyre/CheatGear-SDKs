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
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnKeyUp
	 */
	struct UBP_Widget_PlayerReport_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnKeyDown
	 */
	struct UBP_Widget_PlayerReport_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.NavigateToSelectReason
	 */
	struct UBP_Widget_PlayerReport_C_NavigateToSelectReason_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZHBF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnFocusReceived
	 */
	struct UBP_Widget_PlayerReport_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Get Catagory From Dropdown 
	 */
	struct UBP_Widget_PlayerReport_C_Get_Catagory_From_Dropdown_Params
	{
	public:
		class UBP_OptionsRow_DropdownIndexed_C*                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EReportCategoryEnum                                        Catagory;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q61A[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_5147F2B3474381C64A68EF89A97CF1AC
	 */
	struct UBP_Widget_PlayerReport_C_OnSendReportComplete_5147F2B3474381C64A68EF89A97CF1AC_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C0X6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSendReportResult                                   Result;                                                  // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_F393412742B87002BA1246B11F4E7BA5
	 */
	struct UBP_Widget_PlayerReport_C_OnSendReportComplete_F393412742B87002BA1246B11F4E7BA5_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KGX5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSendReportResult                                   Result;                                                  // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_AD4A16B44B190E9B83ED858E253CAFE8
	 */
	struct UBP_Widget_PlayerReport_C_OnSendReportComplete_AD4A16B44B190E9B83ED858E253CAFE8_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ANJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSendReportResult                                   Result;                                                  // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.EndDialogue
	 */
	struct UBP_Widget_PlayerReport_C_EndDialogue_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ReportThanks_K2Node_ComponentBoundEvent_3_OnConfirmed__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__ReportThanks_K2Node_ComponentBoundEvent_3_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__SendBtn_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__SendBtn_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ReportInProgress_K2Node_ComponentBoundEvent_1_OnActionCancelled__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__ReportInProgress_K2Node_ComponentBoundEvent_1_OnActionCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Request New Popup
	 */
	struct UBP_Widget_PlayerReport_C_Request_New_Popup_Params
	{
	public:
		int32_t                                                    Selected_Enum;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_3_OnCanceled__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__GenericError_K2Node_ComponentBoundEvent_3_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_7_OnCanceled__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_7_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_5_OnConfirmed__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__GenericError_K2Node_ComponentBoundEvent_5_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__PlayerReportText_K2Node_ComponentBoundEvent_12_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__PlayerReportText_K2Node_ComponentBoundEvent_12_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_11_OnConfirmedExtraButton__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__GenericError_K2Node_ComponentBoundEvent_11_OnConfirmedExtraButton__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnShowRoundOver
	 */
	struct UBP_Widget_PlayerReport_C_OnShowRoundOver_Params
	{
	public:
		struct FPlayerRoundOverData                                UIData;                                                  // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Construct
	 */
	struct UBP_Widget_PlayerReport_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__SendButtonAction_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__SendButtonAction_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__CancelButtonAction_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_BndEvt__CancelButtonAction_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.ExecuteUbergraph_BP_Widget_PlayerReport
	 */
	struct UBP_Widget_PlayerReport_C_ExecuteUbergraph_BP_Widget_PlayerReport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnClosed__DelegateSignature
	 */
	struct UBP_Widget_PlayerReport_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
