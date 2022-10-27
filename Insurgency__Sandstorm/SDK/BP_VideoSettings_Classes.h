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
	 * WidgetBlueprintGeneratedClass BP_VideoSettings.BP_VideoSettings_C
	 * Size -> 0x01A0 (FullSize[0x03F8] - InheritedSize[0x0258])
	 */
	class UBP_VideoSettings_C : public UVideoMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsHeading_C*                                BP_OptionsHeading;                                       // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                BP_OptionsHeading_1;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                BP_OptionsHeading_2;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                BP_OptionsHeading_3;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Settings_PageBase_C*                             BP_Settings_PageBase;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionAntiAliasing;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionEffectsQuality;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionPostProcessing;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_QualityPresets_C*                     OptionQualityPresets;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsBox;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionsFoliageQuality;                                   // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionsFrameLimiter;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionsFrameRateSmoothing;                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamma;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionShadowQuality;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsSuperSampling;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionsVideoMode;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionsVideoVSync;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionTextureQuality;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionVideoFOV;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionVideoRes;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionViewDistanceQuality;                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableTextBox*                           WarningBody;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      WarningField;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESlateVisibility                                           VisibilityVar;                                           // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ID3X[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBP_VideoOverrideOption>                     AdvancedOverrideOptions;                                 // 0x0328(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       Has_Created_Overrides;                                   // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85KP[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UBP_OptionsRow_Dropdown_C*, struct FBP_VideoOverrideOption> AdvancedOverrideElements;                                // 0x0340(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		class UUserWidget*                                         ConfirmationInstigator;                                  // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUpdating;                                              // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDirty;                                                 // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JGDI[0x6];                                   // 0x039A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FOverrideSetting>                 SpecialOptions;                                          // 0x03A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_OptionsRow_BaseClass_C*                          HoveredItemCache;                                        // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HideVideoSettingsOnConsole();
		void OnChangedOptionVideoFOV(float NewVideoFOV);
		void ScrollToFocusedWidget();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void ApplySpecialOptions(bool Apply_Original);
		void SetWarning(const class FText& Body, bool Visible);
		void DetectHighResolution(int32_t Width, int32_t Height, bool* Is_High_Resolution);
		void GetOverrideValue(class UBP_OptionsRow_Dropdown_C* Override_Option_Element, class FName* Value, bool* Modified);
		void ResetOverrideOptions(bool Process_All);
		void ShowHoveredInfo(const class FText& HoveredTitle, const class FText& HoveredDescription);
		void ResetAllSpecialOptions();
		void MarkSpecialOptionDirty(const class FName& Entry, int32_t Value, class UUserWidget* Widget);
		void ResetSpecialOption(const class FName& Entry, int32_t Value, class UUserWidget* Widget, bool Mark_as_Modified);
		void HasDirtyOverrideOptions(bool* Is_Dirty);
		void UpdateWidgetTint(class UUserWidget* Widget, bool Has_Been_Marked_As_Dirty, bool Has_Been_Modified);
		void MarkSettingsAsDirty();
		void ShowConfirmationDialog(class UUserWidget* Instigator);
		void OnCancelChanges();
		void OnConfirmChanges();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OverrideOptionChanged(const class FName& ID, const class FText& Text, ESelectInfo Select_Info, const class FName& Console_Variable);
		void PopulateAdvancedVideoOptions();
		void PopulateScalability();
		bool Get_BtnSaveChanges_bIsEnabled_1();
		void PopulateOptions();
		void PopulateResolutions();
		void OnTabSelected();
		void Construct();
		void OnGameUserSettingsUINeedsUpdate_Event_1();
		void BndEvt__OptionVideoRes_K2Node_ComponentBoundEvent_770_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionsVideoMode_K2Node_ComponentBoundEvent_396_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionsVideoVSync_K2Node_ComponentBoundEvent_523_OnOptionSelected__DelegateSignature(bool State);
		void BndEvt__OptionAntiAliasing_K2Node_ComponentBoundEvent_1802_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionPostProcessing_K2Node_ComponentBoundEvent_1904_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionShadowQuality_K2Node_ComponentBoundEvent_2028_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionTextureQuality_K2Node_ComponentBoundEvent_2259_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionEffectsQuality_K2Node_ComponentBoundEvent_2260_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__BP_OptionsRow_Dropdown_4_K2Node_ComponentBoundEvent_2286_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BlueprintApplyChanges();
		void BlueprintResetToDefaults();
		void BndEvt__OptionsFrameRateSmoothing_K2Node_ComponentBoundEvent_16_OnOptionSelected__DelegateSignature(bool State);
		void BndEvt__OptionQualityPresets_K2Node_ComponentBoundEvent_132_OnQualityPresetChanged__DelegateSignature(int32_t Preset);
		void BndEvt__OptionsGamma_K2Node_ComponentBoundEvent_0_OnValueCommitted__DelegateSignature(float NewValue, ETextCommit CommitMethod);
		void OnAdvancedOptionHovered(const class FText& HoveredTitle, const class FText& HoveredDescription, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void BndEvt__OptionsFrameLimiter_K2Node_ComponentBoundEvent_28_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BlueprintRefreshSettings();
		void BndEvt__OptionViewDistanceQuality_K2Node_ComponentBoundEvent_31_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionsSuperSampling_K2Node_ComponentBoundEvent_36_OnValueCommitted__DelegateSignature(float NewValue, ETextCommit CommitMethod);
		void OnOptionHovered(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void OnSliderValueChanged(float Value);
		void ExecuteUbergraph_BP_VideoSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
