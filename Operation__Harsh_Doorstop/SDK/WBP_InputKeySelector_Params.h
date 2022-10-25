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
	 * Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetSelectedKey
	 */
	struct UWBP_InputKeySelector_C_SetSelectedKey_Params
	{
	public:
		struct FKey                                                SelectedKey;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InputKeySelector.WBP_InputKeySelector_C.GetSelectedKey
	 */
	struct UWBP_InputKeySelector_C_GetSelectedKey_Params
	{
	public:
		struct FKey                                                SelectedKey;                                             // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_InputKeySelector_C_BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
	 */
	struct UWBP_InputKeySelector_C_BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector
	 */
	struct UWBP_InputKeySelector_C_ExecuteUbergraph_WBP_InputKeySelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3AAL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_InputKeySelector_C_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature
	 */
	struct UWBP_InputKeySelector_C_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
