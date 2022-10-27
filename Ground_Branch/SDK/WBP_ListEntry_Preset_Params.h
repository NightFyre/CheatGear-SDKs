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
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_Preset_C_BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.Construct
	 */
	struct UWBP_ListEntry_Preset_C_Construct_Params
	{	};

	/**
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.SetCurrentlySelected
	 */
	struct UWBP_ListEntry_Preset_C_SetCurrentlySelected_Params
	{	};

	/**
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.BndEvt__Button_192_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ListEntry_Preset_C_BndEvt__Button_192_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.OnOkClicked_Event_1
	 */
	struct UWBP_ListEntry_Preset_C_OnOkClicked_Event_1_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.ExecuteUbergraph_WBP_ListEntry_Preset
	 */
	struct UWBP_ListEntry_Preset_C_ExecuteUbergraph_WBP_ListEntry_Preset_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.OnPresetDeleted__DelegateSignature
	 */
	struct UWBP_ListEntry_Preset_C_OnPresetDeleted__DelegateSignature_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListEntry_Preset.WBP_ListEntry_Preset_C.OnPresetSelected__DelegateSignature
	 */
	struct UWBP_ListEntry_Preset_C_OnPresetSelected__DelegateSignature_Params
	{
	public:
		class FString                                              DisplayString;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UVaRestJsonObject*                                   JsonObj;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
