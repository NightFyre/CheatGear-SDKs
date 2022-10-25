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
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.SetCheckedState
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_SetCheckedState_Params
	{
	public:
		ECheckBoxState                                             NewCheckedState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.SetIsChecked
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_SetIsChecked_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.IsChecked
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_IsChecked_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.GetCheckedState
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_GetCheckedState_Params
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.PreConstruct
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature_Params
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.CheckStateChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Checkbox_C_CheckStateChanged__DelegateSignature_Params
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
