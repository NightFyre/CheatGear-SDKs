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
	 * Function WBP_ColourPicker.WBP_ColourPicker_C.OnGetMenuContent
	 */
	struct UWBP_ColourPicker_C_OnGetMenuContent_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ColourPicker.WBP_ColourPicker_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ColourPicker_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ColourPicker.WBP_ColourPicker_C.SetupContent
	 */
	struct UWBP_ColourPicker_C_SetupContent_Params
	{
	public:
		class UWBP_ColourPicker_Content_C*                         MenuDropdownContent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ColourPicker.WBP_ColourPicker_C.OnColourPicked_Event_1
	 */
	struct UWBP_ColourPicker_C_OnColourPicked_Event_1_Params
	{
	public:
		struct FLinearColor                                        Colour;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ColourPicker.WBP_ColourPicker_C.OnCancelled_Event_1
	 */
	struct UWBP_ColourPicker_C_OnCancelled_Event_1_Params
	{	};

	/**
	 * Function WBP_ColourPicker.WBP_ColourPicker_C.ExecuteUbergraph_WBP_ColourPicker
	 */
	struct UWBP_ColourPicker_C_ExecuteUbergraph_WBP_ColourPicker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ColourPicker.WBP_ColourPicker_C.OnColourPicked__DelegateSignature
	 */
	struct UWBP_ColourPicker_C_OnColourPicked__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        Colour;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
