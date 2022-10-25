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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Settings.BP_MainMenu_Settings_C
	 * Size -> 0x00B8 (FullSize[0x0340] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_Settings_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNamedSlot*                                          AdditionalButtonsSlot;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     BackgroundBlur_79;                                       // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_AudioSettings_C*                                 BP_AudioSettings;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_BindSettings_C*                                  BP_BindSettings;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ControlSettings_C*                               BP_ControlSettings;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GameSettings_C*                                  BP_GameSettings;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LanguageSelect_C*                                BP_LanguageSelect;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuTabs_C*                                      BP_MenuTabs;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_VideoSettings_C*                                 BP_VideoSettings;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               ButtonApplyChanges;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               ButtonReset;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PanelSwitcher;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_5;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsUsingGamepad;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOnLanguageMenu;                                       // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowGenericDialogWidget;                                // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YPV6[0x5];                                   // 0x031B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUserWidget*>                                 DialogWidgets;                                           // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnShowLanguageSelect;                                    // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnShowGenericDialogWidget();
		void RemoveGenericDialogWidget();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility GetVisibiltyLanguage();
		void CheckGamepadChange();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		bool OnRequestNavigateBack();
		void RefreshOptionsTabs();
		void ConfirmNavigateBack();
		void CheckForUnsavedChanges(bool* bUnsavedChanges);
		void AnyPageHasUnappliedChanges(bool* bHasChanges);
		void CancelUnsavedChanges();
		void DiscardUnsavedChanges();
		void ApplyUnsavedChanges();
		void CurrentPageHasUnappliedChanges(bool* bHasChanges);
		void CheckForApplyChangesVisibility();
		void GetCurrentMenuPage(class UOptionsMenu** Menu);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnPageSelected();
		void Construct();
		void BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature(int32_t Index);
		void BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_67_OnPressed__DelegateSignature();
		void BndEvt__ButtonReset_K2Node_ComponentBoundEvent_71_OnPressed__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void ResetToDefaultsConfirmed();
		void OnPanelOpened();
		void OnResetCanceled();
		void Show_Language_Select();
		void BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature(bool IsNewCulture);
		void ExecuteUbergraph_BP_MainMenu_Settings(int32_t EntryPoint);
		void OnShowLanguageSelect__DelegateSignature(bool bShown);
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
