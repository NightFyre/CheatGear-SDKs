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
	 * WidgetBlueprintGeneratedClass BP_InGameMenu.BP_InGameMenu_C
	 * Size -> 0x028C (FullSize[0x04C4] - InheritedSize[0x0238])
	 */
	class UBP_InGameMenu_C : public UInGameMenuWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowModalKitInfo;                                        // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeInBackgroundBlur;                                    // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              AttributeDifferenceIndicator;                            // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     Blur;                                                    // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenu_ClassSelect_C*                        BP_InGameMenu_ClassSelect;                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenu_CosmeticSelect_C*                     BP_InGameMenu_CosmeticSelect;                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenu_Game_C*                               BP_InGameMenu_Game;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenu_KitSelect_C*                          BP_InGameMenu_KitSelect;                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Settings_C*                             BP_MainMenu_Settings;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Tutorials_Lessons_C*                    BP_MainMenu_Tutorials_Lessons;                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuPartyWidget_C*                               BP_MenuPartyWidget;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuTabs_C*                                      BP_MenuTabs;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ScrollingTextWidget_C*                           BP_ScrollingTextWidget;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GametypeInfoButton_C*                            BtnWeightInfo;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 DialogLeaveGame;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            GameInfoContainer;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     GameSwitcher;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HeavyWeightContainer;                                    // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_4;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_76;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox;                                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_3;                                             // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     UpperLeftSwitcher;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        VoiceChat;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        WeightBar;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            WeightBarContainer;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_HoverInfo_C*                                     WeightHoverInfo;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    PendingMenuActions;                                      // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInGameMenuPage                                            CurrentPage;                                             // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XI2N[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MapNameText;                                             // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		EInGameMenuPage                                            InitialPage;                                             // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUsingController;                                        // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           TopTabsVisibility;                                       // 0x0352(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsGameOver;                                             // 0x0353(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasSpawned;                                             // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EIngameMenuEntryState                                      MenuEntryState;                                          // 0x0355(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverweightIndicatorVisibility;                           // 0x0356(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0U5U[0x1];                                   // 0x0357(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                WeightPercentText;                                       // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ESlateVisibility                                           OverweightVisibility;                                    // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WantsToQuit;                                             // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IntialKeyboardOpen;                                      // 0x0372(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasMenuHiddenOnKeyDown;                                  // 0x0373(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNeedToUpdate;                                           // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PGNH[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                FactionName;                                             // 0x0378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsTacticalMapVisible;                                   // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9PYC[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        FactionsWithCosmeticSelected;                            // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      InfoComparisonPercent;                                   // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VKJN[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         AttributeSameBrush;                                      // 0x03B0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         AttributeDifferenceBrush;                                // 0x0438(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      InfoProgressPercent;                                     // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateHoverDifferenceAngleAndTranslation();
		struct FSlateBrush Get_Attribute_Difference_Brush();
		ESlateVisibility GetAttributeDifferenceVisibility();
		void KitSelectShoppingListClosed();
		void KitSelectShoppingListOpened();
		void CreateSelectClassHintDialog();
		void OnConfirm();
		void RefreshHintsWidget();
		void GetWasMenuHiddenOnKeyDown(bool* WasMenuHiddenOnKeyDown);
		void SetWasMenuHiddenOnKeyDown(bool WasMenuHiddenOnKeyDown);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ShouldShowWeightBar(bool* bShouldShow);
		void SetMenuEntryState(EIngameMenuEntryState EntryState);
		void OnMatchStateUpdated(const class FName& NewMatchState);
		void CheckGameEndCloseWindow();
		void HasConfirmedLoadout(bool* HasConfirmed);
		void SetInitialPage(EInGameMenuPage InPage);
		void SetIsUsingController(bool UsingController, EeInputIconType InputIconType);
		void BindControllerDelegates();
		void ToggleMenu();
		void GoBack();
		ESlateVisibility GetGameInfoVisibility();
		void PopulateGameInfo();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OpenPage(EInGameMenuPage Page);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Construct();
		void OnPanelOpened(EIngameMenuType DesiredMenu, EIngameMenuEntryState FromState);
		void BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_7_OnTabSelected__DelegateSignature(int32_t Index);
		void BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_0_OnClassSelectionConfirm__DelegateSignature();
		void OnPendingMenuActionsChanged();
		void BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_15_OnSettingsSelected__DelegateSignature();
		void OnRoundReset();
		void BndEvt__BP_MainMenu_Settings_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_1_OnLessonsSelected__DelegateSignature();
		void Destruct();
		void BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_4_OnGoToSelectClass__DelegateSignature();
		void BndEvt__BP_MainMenu_Tutorials_Lessons_K2Node_ComponentBoundEvent_69_OnNavigateBack__DelegateSignature();
		void BndEvt__BP_MainMenu_Tutorials_Lessons_K2Node_ComponentBoundEvent_30_OnNavigateIngame__DelegateSignature();
		void BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_3_OnNavigateBack__DelegateSignature();
		void BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_5_OnNavigateBack__DelegateSignature();
		void BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_6_OnUpdateWeight__DelegateSignature(float WeightValueToShow, float EquippedWeight);
		void BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_8_OnGoToSelectLoadout__DelegateSignature();
		void BndEvt__BtnWeightInfo_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature(EConfirmableEvent ButtonEvent);
		void BndEvt__BtnWeightInfo_K2Node_ComponentBoundEvent_13_OnUnHover__DelegateSignature(EConfirmableEvent ButtonEvent);
		void BndEvt__DialogLeaveGame_K2Node_ComponentBoundEvent_9_OnConfirmed__DelegateSignature();
		void BndEvt__DialogLeaveGame_K2Node_ComponentBoundEvent_10_OnCanceled__DelegateSignature();
		void BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_11_OnLeaveGame__DelegateSignature(bool WantsToQuit);
		void BndEvt__BP_InGameMenu_CosmeticSelect_K2Node_ComponentBoundEvent_13_OnConfirmCosmeticPreset__DelegateSignature();
		void BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_14_OnTeamChanged__DelegateSignature();
		void OnHidePanel();
		void Update();
		void CloseLeaveGameDialog(bool bNewVisibility);
		void OnRoundOver(const struct FPlayerRoundOverData& UIData);
		void BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_17_OnToggleTacticalMap__DelegateSignature(bool bVisible);
		void BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_7_OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature();
		void BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_19_OnClassBack__DelegateSignature();
		void ExecuteUbergraph_BP_InGameMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
