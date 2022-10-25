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
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.IsSelectingKey
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_IsSelectingKey_Params
	{
	public:
		bool                                                       IsSelecting;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ClearSelectedKey
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_ClearSelectedKey_Params
	{
	public:
		class UWBP_OptionsMenuItem_InputKeySelector_C*             IKS;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bIsPlayerChangingKeyBindings;                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.SetSelectedKey
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_SetSelectedKey_Params
	{
	public:
		struct FKey                                                SelectedKey;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.GetSelectedKey
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_GetSelectedKey_Params
	{
	public:
		struct FKey                                                SelectedKey;                                             // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.PreConstruct
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_InputKeySelector_C_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
