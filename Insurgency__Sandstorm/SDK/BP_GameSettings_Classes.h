#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C
	 * Size -> 0x01E8 (FullSize[0x0428] - InheritedSize[0x0240])
	 */
	class UBP_GameSettings_C : public UOptionsMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsHeading_C*                                ACCESSIBILITYHeading;                                    // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                BP_OptionsHeading_1;                                     // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                BP_OptionsHeading_2;                                     // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Settings_PageBase_C*                             BP_Settings_PageBase;                                    // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                DebugOptionsHeading;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DeveloperOptionsBox;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                HUDHeading;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionAllowIngameLessons;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionAllowVIP;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionAlwaysShowCompass;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionAlwaysShowCosmeticSelection;                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionAlwaysShowFiremode;                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_C*                              OptionBuddyColor;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionCameraAnimation;                                   // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionColorScheme;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionConnectionStatusLocation;                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionContextualCycleOpticsHint;                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionContextualKeyHints;                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionContextualVaultHints;                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionDeathCamera;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionDeveloperTag;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionEnableHUD;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_C*                              OptionEnemyTeamColor;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionFPSCounter;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_C*                              OptionFriendlyTeamColor;                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Language_C*                           OptionLanguages;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionLocationOverlay;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionNetStatOverlay;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_C*                              OptionNeutralColor;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionNVIDIAHighlights;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionObjectiveBriefings;                                // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionObjectiveIndicatorOpacity;                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_C*                              OptionPartyColor;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionProfanityFilter;                                   // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionRelativeTeamColors;                                // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionRespawnLabelPosition;                              // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionsBuddyOverridesCommanderColor;                     // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_C*                              OptionsCommanderObserverColor;                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsContainer;                                        // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_DropdownIndexed_C*                    OptionScoreboardBadge;                                   // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSpectatorControls;                                 // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSpectatorMinimap;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSpectatorPlayerVitals;                             // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSpectatorScores;                                   // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSpectatorXrayTrails;                               // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSpectatorXrayTrailsPlayerOnly;                     // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionTeammateIndicatorOpacity;                          // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionViewBob;                                           // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                PlayerOptionsHeading;                                    // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_315;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESlateVisibility                                           VisibilityVar;                                           // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CU8L[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomColorSchemeIndex;                                  // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectChangeLanguage;                                  // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              ReplaysSpectatingTextKey;                                // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                ReplaysSpectatingTextTableId;                            // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsShouldMarkDirty;                                      // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5MN9[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FScoreboardBadge>                            AvailableScoreboardBadges;                               // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UBP_OptionsRow_BaseClass_C*                          HoveredItemCache;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdatePlayerHeadingVisibility();
		void HideOptionsByFlags();
		void PopulateScoreboardBadges();
		void UpdateScoreboardBadgeOptionVisibility();
		void ChangeDescriptionOnPS4();
		void HideDebugOptionsOnConsole();
		void Update_Highlights_Option_Visibility();
		ESlateVisibility GetProfanityFilterVisibilityOnConsoles();
		ESlateVisibility GetCollapsedVisibilityOnConsoles();
		void HideReplaysTextOnConsole();
		void ScrollToFocusedWidget();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetUIFromColorScheme(const struct FColorScheme& ColorScheme);
		void ShowHoveredInfo(const class FText& HoveredTitle, const class FText& HoveredDescription);
		void OnCustomizeColor();
		void ApplyColorScheme(int32_t SchemeIndex);
		bool Get_BtnSaveChanges_bIsEnabled_1();
		void PopulateOptions();
		void OnTabSelected();
		void Construct();
		void OnGameUserSettingsUINeedsUpdate();
		void BlueprintResetToDefaults();
		void BndEvt__OptionColorScheme_K2Node_ComponentBoundEvent_6_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionFriendlyTeamColor_K2Node_ComponentBoundEvent_14_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod);
		void BndEvt__OptionEnemyTeamColor_K2Node_ComponentBoundEvent_17_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod);
		void BndEvt__OptionNeutralColor_K2Node_ComponentBoundEvent_18_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod);
		void BndEvt__OptionBuddyColor_K2Node_ComponentBoundEvent_3_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod);
		void BndEvt__OptionsCommanderObserverColor_K2Node_ComponentBoundEvent_83_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod);
		void BlueprintApplyChanges();
		void ApplyColors();
		void BlueprintRefreshSettings();
		void BndEvt__OptionSpectatorXrayTrails_K2Node_ComponentBoundEvent_90_OnOptionSelected__DelegateSignature(bool State);
		void BndEvt__OptionLanguages_K2Node_ComponentBoundEvent_100_OnOptionSelected__DelegateSignature(bool State);
		void OnOptionHovered(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void OnOptionModified(class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void OnEntitlementsUpdated();
		void BndEvt__OptionContextualKeyHints_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature(bool State);
		void OnSliderValueChanged(float Value);
		void BndEvt__OptionPartyColor_K2Node_ComponentBoundEvent_1_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod);
		void ExecuteUbergraph_BP_GameSettings(int32_t EntryPoint);
		void OnSelectChangeLanguage__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
