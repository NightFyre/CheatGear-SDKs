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
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.GetSettingText
	 */
	struct UWBP_ModifierSetting_ComboBox_C_GetSettingText_Params
	{
	public:
		class FText                                                SettingText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.SetSettingText
	 */
	struct UWBP_ModifierSetting_ComboBox_C_SetSettingText_Params
	{
	public:
		class FText                                                InSettingText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.PreConstruct
	 */
	struct UWBP_ModifierSetting_ComboBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_ModifierSetting_ComboBox_C_BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
	 */
	struct UWBP_ModifierSetting_ComboBox_C_BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnInitialized
	 */
	struct UWBP_ModifierSetting_ComboBox_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.ExecuteUbergraph_WBP_ModifierSetting_ComboBox
	 */
	struct UWBP_ModifierSetting_ComboBox_C_ExecuteUbergraph_WBP_ModifierSetting_ComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnOpening__DelegateSignature
	 */
	struct UWBP_ModifierSetting_ComboBox_C_OnOpening__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnSelectionChanged__DelegateSignature
	 */
	struct UWBP_ModifierSetting_ComboBox_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
