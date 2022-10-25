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
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetDesiredVerticalAlignment
	 */
	struct UWBP_OptionMenu_Options_C_GetDesiredVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         Alignment;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetDesiredHorizontalAlignment
	 */
	struct UWBP_OptionMenu_Options_C_GetDesiredHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       Alignment;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.HasSubMenus
	 */
	struct UWBP_OptionMenu_Options_C_HasSubMenus_Params
	{
	public:
		bool                                                       bSubMenuOptions;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetSubMenuOptions
	 */
	struct UWBP_OptionMenu_Options_C_GetSubMenuOptions_Params
	{
	public:
		TArray<struct FFSubMenuOption>                             SubOptions;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.StartSelectingKey
	 */
	struct UWBP_OptionMenu_Options_C_StartSelectingKey_Params
	{
	public:
		class UWBP_OptionsMenuItem_InputKeySelector_C*             IKS;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.CatchMouseWheelInput
	 */
	struct UWBP_OptionMenu_Options_C_CatchMouseWheelInput_Params
	{
	public:
		float                                                      NewScrollOffset;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetCurrentIKS
	 */
	struct UWBP_OptionMenu_Options_C_SetCurrentIKS_Params
	{
	public:
		class UWBP_OptionsMenuItem_InputKeySelector_C*             IKS;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshControlsOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_RefreshControlsOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Update Key Binding
	 */
	struct UWBP_OptionMenu_Options_C_Update_Key_Binding_Params
	{
	public:
		class UWBP_OptionsMenuItem_InputKeySelector_C*             IKS;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInputChord                                         NewInputChord;                                           // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PopulateAllKeyBindings
	 */
	struct UWBP_OptionMenu_Options_C_PopulateAllKeyBindings_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupControlsOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_SetupControlsOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetMaxSecondaryVolumeLevel
	 */
	struct UWBP_OptionMenu_Options_C_GetMaxSecondaryVolumeLevel_Params
	{
	public:
		float                                                      MaxVolLvl;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetBalancedSecondaryVolumeLevel
	 */
	struct UWBP_OptionMenu_Options_C_GetBalancedSecondaryVolumeLevel_Params
	{
	public:
		float                                                      VolumeLevelToBalance;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMatchMasterVolLvl;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQ8K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      VolLevelBalanced;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceSecondaryVolumeLevels
	 */
	struct UWBP_OptionMenu_Options_C_BalanceSecondaryVolumeLevels_Params
	{
	public:
		bool                                                       bMatchMasterVolLvl;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRefreshAudioUI;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_00OZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceMasterVolumeLevel
	 */
	struct UWBP_OptionMenu_Options_C_BalanceMasterVolumeLevel_Params
	{
	public:
		bool                                                       bRefreshAudioUI;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BDNJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceVolumeLevels
	 */
	struct UWBP_OptionMenu_Options_C_BalanceVolumeLevels_Params
	{
	public:
		bool                                                       bRefreshAudioUI;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshAudioOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_RefreshAudioOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.UpdateScreenResolutionState
	 */
	struct UWBP_OptionMenu_Options_C_UpdateScreenResolutionState_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetResolutionScaleBounds
	 */
	struct UWBP_OptionMenu_Options_C_SetResolutionScaleBounds_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.UpdateUnsavedStatus
	 */
	struct UWBP_OptionMenu_Options_C_UpdateUnsavedStatus_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RegisterClickEventsForContainer
	 */
	struct UWBP_OptionMenu_Options_C_RegisterClickEventsForContainer_Params
	{
	public:
		class UPanelWidget*                                        Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupOptionSelectionEvents
	 */
	struct UWBP_OptionMenu_Options_C_SetupOptionSelectionEvents_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshQualityOptions
	 */
	struct UWBP_OptionMenu_Options_C_RefreshQualityOptions_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshOverallQualityOption
	 */
	struct UWBP_OptionMenu_Options_C_RefreshOverallQualityOption_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetScreenResolutionSetting
	 */
	struct UWBP_OptionMenu_Options_C_SetScreenResolutionSetting_Params
	{
	public:
		class FString                                              ScreenResolution;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupVideoOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_SetupVideoOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PopulateScreenResolutionOption
	 */
	struct UWBP_OptionMenu_Options_C_PopulateScreenResolutionOption_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshVideoOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_RefreshVideoOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.IsDirty
	 */
	struct UWBP_OptionMenu_Options_C_IsDirty_Params
	{
	public:
		bool                                                       bDirty;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshGameplayOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_RefreshGameplayOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupGameplayOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_SetupGameplayOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupAllOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_SetupAllOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshAllOptionUI
	 */
	struct UWBP_OptionMenu_Options_C_RefreshAllOptionUI_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnNavOptionSelected
	 */
	struct UWBP_OptionMenu_Options_C_OnNavOptionSelected_Params
	{
	public:
		class UWBP_TextButton_C*                                   NavBtn;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetMenuIndex
	 */
	struct UWBP_OptionMenu_Options_C_SetMenuIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Destruct
	 */
	struct UWBP_OptionMenu_Options_C_Destruct_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__GameplayBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__GameplayBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VideoBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__VideoBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AudioBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__AudioBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ControlsBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__ControlsBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnOptionsUINeedsUpdate
	 */
	struct UWBP_OptionMenu_Options_C_OnOptionsUINeedsUpdate_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Construct
	 */
	struct UWBP_OptionMenu_Options_C_Construct_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DisplayModeOption_K2Node_ComponentBoundEvent_6_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__DisplayModeOption_K2Node_ComponentBoundEvent_6_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ScreenResolutionOption_K2Node_ComponentBoundEvent_7_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__ScreenResolutionOption_K2Node_ComponentBoundEvent_7_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RestoreDefaultsBtn_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__RestoreDefaultsBtn_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ApplyBtn_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__ApplyBtn_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PreConstruct
	 */
	struct UWBP_OptionMenu_Options_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VerticalSyncOption_K2Node_ComponentBoundEvent_10_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__VerticalSyncOption_K2Node_ComponentBoundEvent_10_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__OverallQualityOption_K2Node_ComponentBoundEvent_11_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__OverallQualityOption_K2Node_ComponentBoundEvent_11_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ViewDistanceOption_K2Node_ComponentBoundEvent_12_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__ViewDistanceOption_K2Node_ComponentBoundEvent_12_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AAOption_K2Node_ComponentBoundEvent_13_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__AAOption_K2Node_ComponentBoundEvent_13_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PPOption_K2Node_ComponentBoundEvent_14_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PPOption_K2Node_ComponentBoundEvent_14_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ShadowOption_K2Node_ComponentBoundEvent_15_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__ShadowOption_K2Node_ComponentBoundEvent_15_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__TextureOption_K2Node_ComponentBoundEvent_16_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__TextureOption_K2Node_ComponentBoundEvent_16_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__EffectsOption_K2Node_ComponentBoundEvent_17_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__EffectsOption_K2Node_ComponentBoundEvent_17_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FoliageOption_K2Node_ComponentBoundEvent_18_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__FoliageOption_K2Node_ComponentBoundEvent_18_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnArrowMenuSelectionChangedUser
	 */
	struct UWBP_OptionMenu_Options_C_OnArrowMenuSelectionChangedUser_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnCheckboxMenuCheckStateChanged
	 */
	struct UWBP_OptionMenu_Options_C_OnCheckboxMenuCheckStateChanged_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetActiveSubMenuByIndex
	 */
	struct UWBP_OptionMenu_Options_C_SetActiveSubMenuByIndex_Params
	{
	public:
		int32_t                                                    SubMenuIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnSliderMenuValueChanged
	 */
	struct UWBP_OptionMenu_Options_C_OnSliderMenuValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnToggleMenuToggleStateChanged
	 */
	struct UWBP_OptionMenu_Options_C_OnToggleMenuToggleStateChanged_Params
	{
	public:
		bool                                                       bToggledOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ResolutionScaleOption_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__ResolutionScaleOption_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SmoothFrameRateOption_K2Node_ComponentBoundEvent_20_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SmoothFrameRateOption_K2Node_ComponentBoundEvent_20_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FrameRateLimitOption_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__FrameRateLimitOption_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DiscardChangesBtn_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__DiscardChangesBtn_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__GlobalMouseSensitivityOption_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__GlobalMouseSensitivityOption_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__InvertMousePitchOption_K2Node_ComponentBoundEvent_23_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__InvertMousePitchOption_K2Node_ComponentBoundEvent_23_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SmoothMouseOption_K2Node_ComponentBoundEvent_24_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SmoothMouseOption_K2Node_ComponentBoundEvent_24_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DisplayGammaOption_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__DisplayGammaOption_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FOVOption_K2Node_ComponentBoundEvent_26_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__FOVOption_K2Node_ComponentBoundEvent_26_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AudioQualityOption_K2Node_ComponentBoundEvent_27_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__AudioQualityOption_K2Node_ComponentBoundEvent_27_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__HeadphoneModeOption_K2Node_ComponentBoundEvent_28_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__HeadphoneModeOption_K2Node_ComponentBoundEvent_28_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MasterVolOption_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MasterVolOption_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SFXVolOption_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SFXVolOption_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MusicVolOption_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MusicVolOption_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VOVolOption_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__VOVolOption_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VOIPVolOption_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__VOIPVolOption_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ShadingOption_K2Node_ComponentBoundEvent_33_OnSelectionChangedByUser__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__ShadingOption_K2Node_ComponentBoundEvent_33_OnSelectionChangedByUser__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItemValue;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AllowSoundInBgOption_K2Node_ComponentBoundEvent_34_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__AllowSoundInBgOption_K2Node_ComponentBoundEvent_34_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MotionBlurOption_K2Node_ComponentBoundEvent_35_CheckStateChangedBool__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MotionBlurOption_K2Node_ComponentBoundEvent_35_CheckStateChangedBool__DelegateSignature_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_47_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_47_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_48_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_48_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_49_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_49_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_50_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_50_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_51_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_51_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_52_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_52_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_58_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_58_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Use_IKS_K2Node_ComponentBoundEvent_59_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Use_IKS_K2Node_ComponentBoundEvent_59_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_60_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_60_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_61_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_61_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_62_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_62_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnIKSMenuKeySelected
	 */
	struct UWBP_OptionMenu_Options_C_OnIKSMenuKeySelected_Params
	{
	public:
		struct FInputChord                                         Key_Selected;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_63_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_63_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_65_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_65_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_66_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_66_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_67_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_67_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_68_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_68_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_69_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_69_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_70_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_70_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_71_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_71_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_72_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_72_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_73_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_73_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_74_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_74_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_75_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_75_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_76_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_76_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_77_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_77_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_78_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_78_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_79_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_79_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_80_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_80_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_81_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_81_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_82_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_82_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_83_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_83_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_84_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_84_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_85_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_85_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Use_IKS_K2Node_ComponentBoundEvent_86_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Use_IKS_K2Node_ComponentBoundEvent_86_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_87_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_87_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_88_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_88_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_89_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_89_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__KeyRemappingSBox_K2Node_ComponentBoundEvent_90_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__KeyRemappingSBox_K2Node_ComponentBoundEvent_90_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_64_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_64_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_91_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_91_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_92_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_92_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_93_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_93_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_94_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_94_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_95_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_95_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_96_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_96_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_97_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_97_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_98_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_98_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_99_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_99_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_100_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_100_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_101_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_101_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_102_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_102_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_103_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_103_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_104_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_104_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_105_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_105_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_106_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_106_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_107_OnKeySelected__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_107_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_108_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWBP_OptionMenu_Options_C_BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_108_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.ExecuteUbergraph_WBP_OptionMenu_Options
	 */
	struct UWBP_OptionMenu_Options_C_ExecuteUbergraph_WBP_OptionMenu_Options_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KIUI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
