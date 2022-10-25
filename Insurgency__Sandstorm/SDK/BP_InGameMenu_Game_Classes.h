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
	 * WidgetBlueprintGeneratedClass BP_InGameMenu_Game.BP_InGameMenu_Game_C
	 * Size -> 0x0180 (FullSize[0x0408] - InheritedSize[0x0288])
	 */
	class UBP_InGameMenu_Game_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BP_KeyActionButton;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Loading_ModeRule_C*                              BP_Loading_ModeRule;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Loading_ModeRule_C*                              BP_Loading_ModeRule_1;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Loading_ModeRule_C*                              BP_Loading_ModeRule_3;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_NVIDIAHighlightsTab_C*                           BP_NVIDIAHighlightsTab_126;                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_RandomHint_C*                             BP_Widget_RandomHint;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnBack;                                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenuOptionRow_C*                           BtnCallVote;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenuOptionRow_C*                           BtnExitToDesktop;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenuOptionRow_C*                           BtnLeaveGame;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenuOptionRow_C*                           BtnLessons;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenuOptionRow_C*                           BtnResumeGame;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenuOptionRow_C*                           BtnSettings;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenuOptionRow_C*                           BtnSubmitFeedback;                                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        GameRulesList;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          GameVersionText;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Logo;                                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MenuOptions;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MutatorContainer;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MutatorListBox;                                          // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SectionDescriptionDescriptiono;                          // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TypeGamemodeTextBox;                                     // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSettingsSelected;                                      // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                SelectedMenuOptionText;                                  // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsReplayPlayback;                                       // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bFeedbackPanelOpen;                                      // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HODG[0x6];                                   // 0x037A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLessonsSelected;                                       // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCallVoteSelected;                                      // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGoToSelectClass;                                       // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EIngameMenuEntryState                                      MenuEntryState;                                          // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NLGO[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGoToSelectLoadout;                                     // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLeaveGame;                                             // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        RuleTimer;                                               // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bMenuHiddenOnKeyDown;                                    // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T3ZK[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         BP_CallVoteMenuWidget;                                   // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             FocusedMenuOptionCache;                                  // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTryResumeGameBeforeLoadoutConfirmed;                   // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetMenuOptionToFocus(class UWidget** Widget);
		void RemoveCallVoteMenuWidget();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility Get_BtnCallVote_Visibility_1();
		ESlateVisibility GetVisibilityCollapsedOnConsole();
		void PopulateMutatorList();
		void UpdateCallVoteVisibility();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility GetHighlightsVisibility();
		void GoBack();
		void InvalidateOldMenuOption(const class FText& Option);
		ESlateVisibility Get_BtnSettings_Visibility_1();
		void PopulateScenarioRules(bool* Success);
		ESlateVisibility Get_BottomRightMenu_Visibility_1();
		void SelectOption();
		void UnselectOptions();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void NavigateOptions(bool bUp);
		void GetFirstMenuOptionVisible(class UWidget** Row);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void Construct();
		void BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature();
		void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature();
		void BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_123_OnPressed__DelegateSignature();
		void BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_237_OnPressed__DelegateSignature();
		void OnPanelOpened();
		void OnRoundReset();
		void BndEvt__BtnLessons_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature();
		void BndEvt__BtnCallVote_K2Node_ComponentBoundEvent_413_OnPressed__DelegateSignature();
		void BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref);
		void BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref);
		void BndEvt__BtnSettings_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref);
		void BndEvt__BtnExitToDesktop_K2Node_ComponentBoundEvent_43_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref);
		void CheckRules();
		void BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void BndEvt__BtnBack_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
		void EventOnButtonAddedToFocusPath(const class FText& HoverText, class UWidget* Ref);
		void ExecuteUbergraph_BP_InGameMenu_Game(int32_t EntryPoint);
		void OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature();
		void OnLeaveGame__DelegateSignature(bool WantsToQuit);
		void OnGoToSelectLoadout__DelegateSignature();
		void OnGoToSelectClass__DelegateSignature();
		void OnCallVoteSelected__DelegateSignature();
		void OnLessonsSelected__DelegateSignature();
		void OnSettingsSelected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
