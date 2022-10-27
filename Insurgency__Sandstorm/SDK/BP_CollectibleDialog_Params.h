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
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.SetupCollectible
	 */
	struct UBP_CollectibleDialog_C_SetupCollectible_Params
	{	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.OnKeyUp
	 */
	struct UBP_CollectibleDialog_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.UpdateDialogType
	 */
	struct UBP_CollectibleDialog_C_UpdateDialogType_Params
	{
	public:
		EDialogType                                                NewType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.DialogConfirmed
	 */
	struct UBP_CollectibleDialog_C_DialogConfirmed_Params
	{	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.OnFocusReceived
	 */
	struct UBP_CollectibleDialog_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.BndEvt__OKButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UBP_CollectibleDialog_C_BndEvt__OKButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.Construct
	 */
	struct UBP_CollectibleDialog_C_Construct_Params
	{	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.Close Dialog
	 */
	struct UBP_CollectibleDialog_C_Close_Dialog_Params
	{	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.ExecuteUbergraph_BP_CollectibleDialog
	 */
	struct UBP_CollectibleDialog_C_ExecuteUbergraph_BP_CollectibleDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CollectibleDialog.BP_CollectibleDialog_C.OnConfirmed__DelegateSignature
	 */
	struct UBP_CollectibleDialog_C_OnConfirmed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
