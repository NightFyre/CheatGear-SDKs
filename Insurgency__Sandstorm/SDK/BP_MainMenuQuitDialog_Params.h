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
	 * Function BP_MainMenuQuitDialog.BP_MainMenuQuitDialog_C.OnKeyDown
	 */
	struct UBP_MainMenuQuitDialog_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenuQuitDialog.BP_MainMenuQuitDialog_C.OnFocusReceived
	 */
	struct UBP_MainMenuQuitDialog_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenuQuitDialog.BP_MainMenuQuitDialog_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_12_OnCanceled__DelegateSignature
	 */
	struct UBP_MainMenuQuitDialog_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_12_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuQuitDialog.BP_MainMenuQuitDialog_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_19_OnConfirmed__DelegateSignature
	 */
	struct UBP_MainMenuQuitDialog_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_19_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenuQuitDialog.BP_MainMenuQuitDialog_C.OnPanelOpened
	 */
	struct UBP_MainMenuQuitDialog_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenuQuitDialog.BP_MainMenuQuitDialog_C.ExecuteUbergraph_BP_MainMenuQuitDialog
	 */
	struct UBP_MainMenuQuitDialog_C_ExecuteUbergraph_BP_MainMenuQuitDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7WC6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenuQuitDialog.BP_MainMenuQuitDialog_C.OnCancelPressed__DelegateSignature
	 */
	struct UBP_MainMenuQuitDialog_C_OnCancelPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
