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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Main.BP_MainMenu_Main_C
	 * Size -> 0x0168 (FullSize[0x03F0] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_Main_C : public UMainMenuPanelWidgetWithStore
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SlideInBottomRight;                                      // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BottomRightMenu;                                         // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     BottomRightSwitcher;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FeedbackForm_C*                                  BP_FeedbackForm;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BP_KeyActionButton;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenuPlayerCount_C*                           BP_MainMenuPlayerCount;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MessageOfTheDay_C*                               BP_MessageOfTheDay;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ReplayBrowser_C*                                 BP_ReplayBrowser;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnAccountPicker;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnCredits;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnCustomize;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnLinkAccount;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnLocalGame;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnMods;                                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnMultiplayer;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnProfile;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnQuit;                                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnSettings;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnStore;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnSubmitFeedback;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuOptionRow_C*                                 BtnTutorials;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      CompRankBox;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PlayMenu_CompRank_C*                             CompRankIndicator;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Logo;                                                    // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuBanner_C*                                    MenuBanner;                                              // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MenuOptions;                                             // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PlayMenu_PlayerLevel_C*                          PlayerLevelIndicator;                                    // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      RankBox;                                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RightContainer;                                          // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMenuPageSelected;                                      // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    BottomRightWidgetIndex;                                  // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J7JF[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SelectedMenuOptionText;                                  // 0x03A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PlayerNameText;                                          // 0x03C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ESlateVisibility                                           PlayerNameVisibility;                                    // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EEWE[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             FocusedMenuOptionCache;                                  // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ServiceToLink;                                           // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESlateVisibility SetVisibilityCreditOnConsole();
		void GetMenuOptionToFocus(class UWidget** Widget);
		void HidePlayerCounterOnConsole();
		void HidePlayerStatisticsOnConsole();
		void HideCompetitiveRankOnConsole();
		void HideSubmitFeedbackButtonOnConsole();
		ESlateVisibility GetReplaysButtonVisibilityOnConsole();
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void CheckShouldShowHistoryHighlightsNotification();
		void InvalidateMenuOptions(const class FText& NewHover);
		void RestoreMainFocus();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OpenFeedbackMenu();
		ESlateVisibility Get_BottomRightMenu_Visibility_1();
		void GetFirstMenuOptionVisible(class UWidget** Row);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		ESlateVisibility GetVisibilityCollapsedOnConsole();
		void OnPageSelected(EnumMainMenuPage NewPage);
		void Construct();
		void BndEvt__BtnSingleplayer_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature();
		void BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature();
		void BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature();
		void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature();
		void BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void OnPanelOpened();
		void OnPanelClosed();
		void BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_61_OnPressed__DelegateSignature();
		void BndEvt__BtnProfile_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature();
		void BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature();
		void BndEvt__BtnCharacter_K2Node_ComponentBoundEvent_47_OnPressed__DelegateSignature();
		void BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(const class FText& HoverText);
		void BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(const class FText& HoverText);
		void BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature(const class FText& HoverText);
		void BndEvt__BtnProfile_K2Node_ComponentBoundEvent_48_OnHovered__DelegateSignature(const class FText& HoverText);
		void BndEvt__BtnSettings_K2Node_ComponentBoundEvent_91_OnHovered__DelegateSignature(const class FText& HoverText);
		void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature(const class FText& HoverText);
		void BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
		void BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
		void BndEvt__BtnCredits_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature(const class FText& HoverText);
		void BndEvt__BtnMods_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature();
		void OnModdingTermsConsent();
		void BndEvt__BP_MenuOptionRow_C_0_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature();
		void OnModdingTermsCanceled();
		void BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void BndEvt__BtnAccountPicker_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
		void OnButtonAddedToFocusPath(class UWidget* MenuOption);
		void BndEvt__BtnLinkAccount_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature();
		void OnServiceLoginComplete(bool bSuccessful, const class FName& InServiceName);
		void BndEvt__BtnStore_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature();
		void UpdateStoreNotification(bool bInHasNewItems, bool bInHasSales);
		void ExecuteUbergraph_BP_MainMenu_Main(int32_t EntryPoint);
		void OnMenuPageSelected__DelegateSignature(EnumMainMenuPage NewPage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
