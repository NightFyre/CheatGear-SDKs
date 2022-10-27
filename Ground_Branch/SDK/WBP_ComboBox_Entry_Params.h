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
	 * Function WBP_ComboBox_Entry.WBP_ComboBox_Entry_C.GetTextShadowColorAndOpacity
	 */
	struct UWBP_ComboBox_Entry_C_GetTextShadowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ComboBox_Entry.WBP_ComboBox_Entry_C.GetTextColorAndOpacity
	 */
	struct UWBP_ComboBox_Entry_C_GetTextColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ComboBox_Entry.WBP_ComboBox_Entry_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_ComboBox_Entry_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ComboBox_Entry.WBP_ComboBox_Entry_C.InternalSetSelected
	 */
	struct UWBP_ComboBox_Entry_C_InternalSetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ComboBox_Entry.WBP_ComboBox_Entry_C.InternalOnSelected
	 */
	struct UWBP_ComboBox_Entry_C_InternalOnSelected_Params
	{	};

	/**
	 * Function WBP_ComboBox_Entry.WBP_ComboBox_Entry_C.ExecuteUbergraph_WBP_ComboBox_Entry
	 */
	struct UWBP_ComboBox_Entry_C_ExecuteUbergraph_WBP_ComboBox_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ComboBox_Entry.WBP_ComboBox_Entry_C.OnEntrySelected__DelegateSignature
	 */
	struct UWBP_ComboBox_Entry_C_OnEntrySelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
