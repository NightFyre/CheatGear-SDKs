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
	 * Function WBP_Checkbox.WBP_Checkbox_C.SetCheckedState
	 */
	struct UWBP_Checkbox_C_SetCheckedState_Params
	{
	public:
		ECheckBoxState                                             NewCheckedState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Checkbox.WBP_Checkbox_C.SetIsChecked
	 */
	struct UWBP_Checkbox_C_SetIsChecked_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Checkbox.WBP_Checkbox_C.IsChecked
	 */
	struct UWBP_Checkbox_C_IsChecked_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Checkbox.WBP_Checkbox_C.GetCheckedState
	 */
	struct UWBP_Checkbox_C_GetCheckedState_Params
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Checkbox.WBP_Checkbox_C.BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Checkbox.WBP_Checkbox_C.ExecuteUbergraph_WBP_Checkbox
	 */
	struct UWBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Checkbox.WBP_Checkbox_C.CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_Checkbox_C_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Checkbox.WBP_Checkbox_C.CheckStateChanged__DelegateSignature
	 */
	struct UWBP_Checkbox_C_CheckStateChanged__DelegateSignature_Params
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
