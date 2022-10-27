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
	 * Function BP_ReportNotification.BP_ReportNotification_C.ReportReasonToText
	 */
	struct UBP_ReportNotification_C_ReportReasonToText_Params
	{
	public:
		unsigned char                                              ForCategory;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V24Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.UpdateTextBasedOnAccountStatus
	 */
	struct UBP_ReportNotification_C_UpdateTextBasedOnAccountStatus_Params
	{
	public:
		struct FGetAccountStatusResult                             AccountStatus;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.OnKeyDown
	 */
	struct UBP_ReportNotification_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.OnFocusReceived
	 */
	struct UBP_ReportNotification_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.BndEvt__AcceptBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_ReportNotification_C_BndEvt__AcceptBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.BndEvt__ComunityGuideLinesBtn_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_ReportNotification_C_BndEvt__ComunityGuideLinesBtn_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.OpenLink
	 */
	struct UBP_ReportNotification_C_OpenLink_Params
	{	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.ExecuteUbergraph_BP_ReportNotification
	 */
	struct UBP_ReportNotification_C_ExecuteUbergraph_BP_ReportNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReportNotification.BP_ReportNotification_C.OnContinue__DelegateSignature
	 */
	struct UBP_ReportNotification_C_OnContinue__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
