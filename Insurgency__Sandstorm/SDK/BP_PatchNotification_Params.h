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
	 * Function BP_PatchNotification.BP_PatchNotification_C.BuildWidgetFromData
	 */
	struct UBP_PatchNotification_C_BuildWidgetFromData_Params
	{
	public:
		struct FMotdData                                           PopupData;                                               // 0x0000(0x0168)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.OnKeyDown
	 */
	struct UBP_PatchNotification_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.OnFocusReceived
	 */
	struct UBP_PatchNotification_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.OpenLink
	 */
	struct UBP_PatchNotification_C_OpenLink_Params
	{	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.BndEvt__LinkBtn_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_PatchNotification_C_BndEvt__LinkBtn_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_PatchNotification_C_BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.Accept
	 */
	struct UBP_PatchNotification_C_Accept_Params
	{	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.ExecuteUbergraph_BP_PatchNotification
	 */
	struct UBP_PatchNotification_C_ExecuteUbergraph_BP_PatchNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PatchNotification.BP_PatchNotification_C.OnContinue__DelegateSignature
	 */
	struct UBP_PatchNotification_C_OnContinue__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
