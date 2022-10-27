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
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.GetVisibilityForLoadAndSaveElements
	 */
	struct UWBP_Button_Preset_C_GetVisibilityForLoadAndSaveElements_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.IsValidKitAssetList
	 */
	struct UWBP_Button_Preset_C_IsValidKitAssetList_Params
	{
	public:
		class FName                                                InLoadoutName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsValid;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RW3D[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.GetItemTypeButton
	 */
	struct UWBP_Button_Preset_C_GetItemTypeButton_Params
	{
	public:
		class FString                                              TypeAsString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWBP_Button_Item_C*                                  OutButtonitem;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.GetDisplayNamePresetColorAndOpacity
	 */
	struct UWBP_Button_Preset_C_GetDisplayNamePresetColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.GetButtonPresetToolTipWidget
	 */
	struct UWBP_Button_Preset_C_GetButtonPresetToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.GenerateJsonDataEntry
	 */
	struct UWBP_Button_Preset_C_GenerateJsonDataEntry_Params
	{
	public:
		class UVaRestJsonObject*                                   OutDataEntry;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.AddItemData
	 */
	struct UWBP_Button_Preset_C_AddItemData_Params
	{
	public:
		class UVaRestJsonObject*                                   InJsonObj;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOutDataAdded;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B2PK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.GetPresetDisplayName
	 */
	struct UWBP_Button_Preset_C_GetPresetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.PreConstruct
	 */
	struct UWBP_Button_Preset_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Button_Preset_C_BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetSelected_Event_1
	 */
	struct UWBP_Button_Preset_C_OnPresetSelected_Event_1_Params
	{
	public:
		class FString                                              DisplayString;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UVaRestJsonObject*                                   JsonObj;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.Construct
	 */
	struct UWBP_Button_Preset_C_Construct_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.OnSaveClicked_Event_1
	 */
	struct UWBP_Button_Preset_C_OnSaveClicked_Event_1_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.BindSaveButton
	 */
	struct UWBP_Button_Preset_C_BindSaveButton_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.OnOkClicked_Event_1
	 */
	struct UWBP_Button_Preset_C_OnOkClicked_Event_1_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.PostUpdate_Event_1
	 */
	struct UWBP_Button_Preset_C_PostUpdate_Event_1_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetDeleted_Event_1
	 */
	struct UWBP_Button_Preset_C_OnPresetDeleted_Event_1_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.Setup
	 */
	struct UWBP_Button_Preset_C_Setup_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.SavePreset
	 */
	struct UWBP_Button_Preset_C_SavePreset_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.OnConfirmOkClicked_Event_1
	 */
	struct UWBP_Button_Preset_C_OnConfirmOkClicked_Event_1_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.OnCancelClicked_Event_2
	 */
	struct UWBP_Button_Preset_C_OnCancelClicked_Event_2_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.SavePrompt
	 */
	struct UWBP_Button_Preset_C_SavePrompt_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.HideSelectionArea
	 */
	struct UWBP_Button_Preset_C_HideSelectionArea_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.ShowRestrictedAssets
	 */
	struct UWBP_Button_Preset_C_ShowRestrictedAssets_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.ClearPresetList
	 */
	struct UWBP_Button_Preset_C_ClearPresetList_Params
	{	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.ExecuteUbergraph_WBP_Button_Preset
	 */
	struct UWBP_Button_Preset_C_ExecuteUbergraph_WBP_Button_Preset_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Preset.WBP_Button_Preset_C.OnPresetPressed__DelegateSignature
	 */
	struct UWBP_Button_Preset_C_OnPresetPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
