#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_GameSettings.BP_GameSettings_C.UpdatePlayerHeadingVisibility
	 */
	struct UBP_GameSettings_C_UpdatePlayerHeadingVisibility_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.HideOptionsByFlags
	 */
	struct UBP_GameSettings_C_HideOptionsByFlags_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.PopulateScoreboardBadges
	 */
	struct UBP_GameSettings_C_PopulateScoreboardBadges_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.UpdateScoreboardBadgeOptionVisibility
	 */
	struct UBP_GameSettings_C_UpdateScoreboardBadgeOptionVisibility_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.ChangeDescriptionOnPS4
	 */
	struct UBP_GameSettings_C_ChangeDescriptionOnPS4_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.HideDebugOptionsOnConsole
	 */
	struct UBP_GameSettings_C_HideDebugOptionsOnConsole_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.Update Highlights Option Visibility
	 */
	struct UBP_GameSettings_C_Update_Highlights_Option_Visibility_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.GetProfanityFilterVisibilityOnConsoles
	 */
	struct UBP_GameSettings_C_GetProfanityFilterVisibilityOnConsoles_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.GetCollapsedVisibilityOnConsoles
	 */
	struct UBP_GameSettings_C_GetCollapsedVisibilityOnConsoles_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.HideReplaysTextOnConsole
	 */
	struct UBP_GameSettings_C_HideReplaysTextOnConsole_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.ScrollToFocusedWidget
	 */
	struct UBP_GameSettings_C_ScrollToFocusedWidget_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnFocusReceived
	 */
	struct UBP_GameSettings_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.SetUIFromColorScheme
	 */
	struct UBP_GameSettings_C_SetUIFromColorScheme_Params
	{
	public:
		struct FColorScheme                                        ColorScheme;                                             // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.ShowHoveredInfo
	 */
	struct UBP_GameSettings_C_ShowHoveredInfo_Params
	{
	public:
		class FText                                                HoveredTitle;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HoveredDescription;                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnCustomizeColor
	 */
	struct UBP_GameSettings_C_OnCustomizeColor_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.ApplyColorScheme
	 */
	struct UBP_GameSettings_C_ApplyColorScheme_Params
	{
	public:
		int32_t                                                    SchemeIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 */
	struct UBP_GameSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IXX5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.PopulateOptions
	 */
	struct UBP_GameSettings_C_PopulateOptions_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnTabSelected
	 */
	struct UBP_GameSettings_C_OnTabSelected_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.Construct
	 */
	struct UBP_GameSettings_C_Construct_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnGameUserSettingsUINeedsUpdate
	 */
	struct UBP_GameSettings_C_OnGameUserSettingsUINeedsUpdate_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BlueprintResetToDefaults
	 */
	struct UBP_GameSettings_C_BlueprintResetToDefaults_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionColorScheme_K2Node_ComponentBoundEvent_6_OnOptionSelected__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionColorScheme_K2Node_ComponentBoundEvent_6_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LB4U[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionFriendlyTeamColor_K2Node_ComponentBoundEvent_14_OnValueCommitted__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionFriendlyTeamColor_K2Node_ComponentBoundEvent_14_OnValueCommitted__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionEnemyTeamColor_K2Node_ComponentBoundEvent_17_OnValueCommitted__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionEnemyTeamColor_K2Node_ComponentBoundEvent_17_OnValueCommitted__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionNeutralColor_K2Node_ComponentBoundEvent_18_OnValueCommitted__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionNeutralColor_K2Node_ComponentBoundEvent_18_OnValueCommitted__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionBuddyColor_K2Node_ComponentBoundEvent_3_OnValueCommitted__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionBuddyColor_K2Node_ComponentBoundEvent_3_OnValueCommitted__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionsCommanderObserverColor_K2Node_ComponentBoundEvent_83_OnValueCommitted__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionsCommanderObserverColor_K2Node_ComponentBoundEvent_83_OnValueCommitted__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BlueprintApplyChanges
	 */
	struct UBP_GameSettings_C_BlueprintApplyChanges_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.ApplyColors
	 */
	struct UBP_GameSettings_C_ApplyColors_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BlueprintRefreshSettings
	 */
	struct UBP_GameSettings_C_BlueprintRefreshSettings_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionSpectatorXrayTrails_K2Node_ComponentBoundEvent_90_OnOptionSelected__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionSpectatorXrayTrails_K2Node_ComponentBoundEvent_90_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionLanguages_K2Node_ComponentBoundEvent_100_OnOptionSelected__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionLanguages_K2Node_ComponentBoundEvent_100_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnOptionHovered
	 */
	struct UBP_GameSettings_C_OnOptionHovered_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnOptionModified
	 */
	struct UBP_GameSettings_C_OnOptionModified_Params
	{
	public:
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnEntitlementsUpdated
	 */
	struct UBP_GameSettings_C_OnEntitlementsUpdated_Params
	{	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionContextualKeyHints_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionContextualKeyHints_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnSliderValueChanged
	 */
	struct UBP_GameSettings_C_OnSliderValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionPartyColor_K2Node_ComponentBoundEvent_1_OnValueCommitted__DelegateSignature
	 */
	struct UBP_GameSettings_C_BndEvt__OptionPartyColor_K2Node_ComponentBoundEvent_1_OnValueCommitted__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.ExecuteUbergraph_BP_GameSettings
	 */
	struct UBP_GameSettings_C_ExecuteUbergraph_BP_GameSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OXCW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameSettings.BP_GameSettings_C.OnSelectChangeLanguage__DelegateSignature
	 */
	struct UBP_GameSettings_C_OnSelectChangeLanguage__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
