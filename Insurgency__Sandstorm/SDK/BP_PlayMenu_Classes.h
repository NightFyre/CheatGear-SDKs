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
	 * WidgetBlueprintGeneratedClass BP_PlayMenu.BP_PlayMenu_C
	 * Size -> 0x01F0 (FullSize[0x0478] - InheritedSize[0x0288])
	 */
	class UBP_PlayMenu_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOutPlaylistBrowserBG;                                // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeInPlaylistBrowserBG;                                 // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PlayMenu_PlaylistBG_C*                           BP_PlayMenu_PlaylistBG;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnRegionPrefGamepad;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CasualPlay;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MP_PlaylistTypeColumn_C*                         ColumnCommunity;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MP_PlaylistTypeColumn_C*                         ColumnCoop;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MP_PlaylistTypeColumn_C*                         ColumnVersus;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GearIcon;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     ModalBlur;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ModalContainer;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PanelMain;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PlayMenu_PlayerLevel_C*                          PlayerLevelIndicator;                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PlaylistBrowser_C*                               PlaylistBrowser;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   PlaylistTypeColumns;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RegionConfigButton;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RegionPrefsText;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_2;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOpenServerBrowser;                                     // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        ColorButtonHover;                                        // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorButton;                                             // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BreadcrumbsUpdated;                                      // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWidget*                                             LastFocusedTypeButton;                                   // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMatchPrefsOpen;                                         // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8OHG[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCustomGameCreate;                                      // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                RegionPreferencesText;                                   // 0x03A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RegionTextColor;                                         // 0x03C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnMenuPageSelected;                                      // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bPlaylistBrowserOpen;                                    // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QFOP[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             ActiveModalWidget;                                       // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UPlaylist*>                                   LastSearchedPlaylists;                                   // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SelectedScenarioName;                                    // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UBP_MP_PlaylistTypeColumn_C*                         LastColumnSelected;                                      // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSkippedTutorialForSession;                              // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MWWE[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSLocalPlayer*                                     INSLocalPlayer;                                          // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanUserPlayOnlineGame;                                   // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DDU5[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_GenericDialog_C*                                 WaitingDialogWidget;                                     // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 WaitingDialogWidgetUserPrivilege;                        // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnModalPopupOpened;                                      // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModalPopupClosed;                                      // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Create_Map_Downloading_Dialog();
		void OnLicenseConfirmed();
		void UpdateLicenseWidget();
		void HideCompetetiveOnConsole();
		void DisplayWaitingDialog();
		void OnClosedAccountRestrictionDialog();
		void DisplayAccountRestrictionDialog(EUserPrivilegeResult PrivilegeResult);
		ESlateVisibility GetCollapsedVisibilityOnConsole();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnMatchRegionsConfirmed();
		void SkipTrainingAndAdvance();
		void SwitchToTraining();
		void OpenModalPromptTutorial();
		void BeginMatchmakingInPlaylists(TArray<class UPlaylist*>* InputPin, bool bSkipTutorial);
		void HasActiveModal(bool* HasModal);
		void OpenModalRegionSelection(bool bContinueButton);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void CloseModal();
		void OpenModalPlaylistFeatures(class UPlaylist* Playlist, int32_t Index);
		void OnPlaylistBrowserHovered(class UPlaylist* Playlist);
		void ClosePlaylistBrowser();
		void OpenPlaylistType(EPlaylistType Type);
		void UpdateRegionPreferences();
		class FText GetRegionText(const class FName& InName);
		class FText Get_RegionList_Text();
		void UpdateBreadcrumbs();
		void GetInitialFocusTarget(class UWidget** Output);
		class FText Get_PlayerName_Text_1();
		void BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_6_OnFeatureSelected__DelegateSignature(class UPlaylist* Playlist, int32_t Index);
		void BndEvt__ScenarioPreferences_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature();
		void BndEvt__RegionConfigButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_9_OnFindGameRequested__DelegateSignature(TArray<class UPlaylist*>* Playlist);
		void BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_10_OnPlaylistHovered__DelegateSignature(class UPlaylist* Playlist);
		void OnPanelClosed();
		void DisplayRestrictionDialog(EUserPrivilegeResult PrivilageRestriction);
		void EventOnPlatformConnectionStatusChangedDelegate(bool bConnected);
		void BndEvt__ColumnVersus_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
		void BndEvt__BtnRegionPrefGamepad_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
		void BndEvt__ColumnCoop_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void UpdateLicenseAgreementDialogBP();
		void OnPanelOpened();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void CheckUpdate(bool bActive, bool bLocalReady);
		void BndEvt__BP_MP_PlaylistTypeColumn_C_2_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_PlayMenu(int32_t EntryPoint);
		void OnModalPopupClosed__DelegateSignature();
		void OnModalPopupOpened__DelegateSignature();
		void OnMenuPageSelected__DelegateSignature(EnumMainMenuPage PageName);
		void OnCustomGameCreate__DelegateSignature();
		void BreadcrumbsUpdated__DelegateSignature();
		void OnNavigateBack__DelegateSignature();
		void OnOpenServerBrowser__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
