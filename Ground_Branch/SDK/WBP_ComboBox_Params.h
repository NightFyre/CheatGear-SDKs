#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_ComboBox.WBP_ComboBox_C.GetComboBoxEntryText
	 */
	struct UWBP_ComboBox_C_GetComboBoxEntryText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ComboBox.WBP_ComboBox_C.OnGetMenuContent
	 */
	struct UWBP_ComboBox_C_OnGetMenuContent_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ComboBox.WBP_ComboBox_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ComboBox_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ComboBox.WBP_ComboBox_C.SetupContent
	 */
	struct UWBP_ComboBox_C_SetupContent_Params
	{
	public:
		class UWBP_ComboBox_Content_C*                             MenuDropdownContent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ComboBox.WBP_ComboBox_C.OnIndexChanged_Event
	 */
	struct UWBP_ComboBox_C_OnIndexChanged_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ComboBox.WBP_ComboBox_C.ExecuteUbergraph_WBP_ComboBox
	 */
	struct UWBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ComboBox.WBP_ComboBox_C.OnIndexChanged__DelegateSignature
	 */
	struct UWBP_ComboBox_C_OnIndexChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
