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
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.FindOptionIndex
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_FindOptionIndex_Params
	{
	public:
		class FText                                                OptionDisplayName;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O88J[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOption
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_SetSelectedOption_Params
	{
	public:
		class FText                                                OptionDisplayName;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOptionByValue
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_SetSelectedOptionByValue_Params
	{
	public:
		class FString                                              OptionValue;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.PopulateOptionsByPreset
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_PopulateOptionsByPreset_Params
	{
	public:
		EArrowOptionsPreset                                        Preset;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.FindOptionValueIndex
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_FindOptionValueIndex_Params
	{
	public:
		class FString                                              OptionValue;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNN3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOptionByIndex
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_SetSelectedOptionByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ClearSelection
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_ClearSelection_Params
	{	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.INTERNAL_ClearSelection
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_INTERNAL_ClearSelection_Params
	{
	public:
		ESelectInfo                                                DeselectionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.RemoveOptionAtIndex
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_RemoveOptionAtIndex_Params
	{
	public:
		int32_t                                                    IndexToRemove;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRemovalSuccess;                                         // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetOptionCount
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_GetOptionCount_Params
	{
	public:
		int32_t                                                    OptionCount;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.AddOption
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_AddOption_Params
	{
	public:
		struct FFOptionItemSelection                               NewOption;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetOptionValueAtIndex
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_GetOptionValueAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K4FW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OptionValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetSelectedOptionValue
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_GetSelectedOptionValue_Params
	{
	public:
		class FString                                              OptionValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.INTERNAL_SetSelectedOptionByIndex
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_INTERNAL_SetSelectedOptionByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ClearOptions
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_ClearOptions_Params
	{	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.PreConstruct
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.Construct
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_Construct_Params
	{	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnItemSelectionChanged
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_OnItemSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ExecuteUbergraph_WBP_OptionsMenuItem_Arrow
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_ExecuteUbergraph_WBP_OptionsMenuItem_Arrow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnSelectionChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Arrow_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
