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
	 * WidgetBlueprintGeneratedClass BP_MainMenu.BP_MainMenu_C
	 * Size -> 0x0240 (FullSize[0x0480] - InheritedSize[0x0240])
	 */
	class UBP_MainMenu_C : public UMainMenuWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOutBgOverlay;                                        // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeInBgOverlay;                                         // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBackgroundBlur*                                     BackgroundBlur_135;                                      // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_AnnouncementPanel_C*                    BodyAnnouncementPanel;                                   // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BodyBorder;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        BodyCanvasPanel;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Character_C*                            BodyCharacter;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Credits_DataDriven_C*                   BodyCredits;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_CreditSelect_C*                         BodyCreditSelect;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_CustomGameCreation_C*                            BodyCustomGameCreation;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_LanguagePanel_C*                        BodyLanguage;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_LocalGame_C*                            BodyLocalGame;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Main_C*                                 BodyMain;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_ModMenu_C*                              BodyModMenu;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PlayMenu_C*                                      BodyMultiplayer;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_OnlineStore_C*                          BodyOnlineStore;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_PostMatch_C*                            BodyPostMatch;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Profile_C*                              BodyProfile;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenuQuitDialog_C*                            BodyQuitDialog;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_RecapPanel_C*                           BodyRecapPanel;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_ServerBrowser_C*                        BodyServerBrowser;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Settings_C*                             BodySettings;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MainMenu_Tutorials_C*                            BodyTutorials;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     BodyWidgetSwitcher;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LateJoinPrompt_C*                                BP_LateJoinPrompt;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchmakingProgress_C*                           BP_MatchmakingProgress;                                  // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuBreadcrumbs_C*                               BP_MenuBreadcrumbs;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuPartyWidget_C*                               BP_MenuPartyWidget;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OSSStatus_C*                                     BP_OSSStatus;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_ModDownloadProgress_C*                    BP_Widget_ModDownloadProgress;                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnBackGamepad;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             CTEOverlay;                                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             FooterBackground;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_BlackScreen;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelVersion;                                            // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MenuBgOverlay;                                           // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyTintImage;                                          // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PartyTintOverlay;                                        // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_2;                                              // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_3;                                              // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_109;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_209;                                            // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_UserID;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EnumMainMenuPage                                           CurrentPage;                                             // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_10TG[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMainMenuPanelWidget*                                LastOpenPanel;                                           // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBgOverlayEnabled;                                       // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CVAY[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_CollectibleDialog_C*                             ActiveClaimDialog;                                       // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FOnlineItemClaimResponse>                    PendingClaimNotifications;                               // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsOnLanguageSelectScreen;                               // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasCreatLicenseDialog;                                  // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUHJ[0x6];                                   // 0x03E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_DialogLicense_C*                                 LicenseDialog;                                           // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class FText>                           DisplayedVersionNumber;                                  // 0x03F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsPartyWidgetHovered;                                   // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsLateJoinPromptInteractionEnabled;                     // 0x0441(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPartyButtonInteractionEnabled;                        // 0x0442(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q4J7[0x5];                                   // 0x0443(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentUserID;                                           // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bHasRemovedLicense;                                      // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JT2D[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     WidgetWithoutFooterImage;                                // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FName                                                RTPC_VO_AttenuationEnabled;                              // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RTPC_Local;                                              // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShowFooterBackground();
		void Update_User_ID();
		void AdjustElementsZOrderForModalPopup(bool bDecreaseZOrder);
		void SetPlatformSpecificVisual();
		void OnCanceledLicenseDialog();
		void OnConfirmedLicenseDialog();
		void CreateLicenseAgreementDialog();
		void PopItemClaimNotification();
		ESlateVisibility GetVisibilityOfLanguage();
		void Received_New_Item_Claims(struct FOnlineItemClaimResult* Result);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CheckAccountStatus(const struct FGetAccountStatusResult& AccountStatus);
		void OnAccountStatusUpdated(struct FGetAccountStatusResult* AccountStatus);
		void GetPageWidget(EnumMainMenuPage Page, class UMainMenuPanelWidget** Widget);
		void GetCurrentPageWidget(class UMainMenuPanelWidget** Widget);
		void SetBackgroundOverlayEnabled(bool bEnabled);
		void UpdateBreadcrumbText(TArray<class FText>* Text);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		ESlateVisibility BindGetMatchmakingVisibility();
		ESlateVisibility Get_BackButtonVisibility();
		void AttemptNavigateBack(bool* bDidNavigate);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SelectPage(EnumMainMenuPage NewPage);
		class FText Get_LabelVersion_Text_1();
		void OnGetStatusComplete_A69B5F8A48B9FA426E1555949E6B9883(bool bSuccess, const struct FGetAccountStatusResult& Result);
		void OnMotdReceived_A06CBA62496FD587F136789216BA2A89(const struct FMotdData& Motd);
		void OnGetStatusComplete_A69B5F8A48B9FA426E15559437DA345E(bool bSuccess, const struct FGetAccountStatusResult& Result);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__BodyQuitDialog_K2Node_ComponentBoundEvent_74_OnCancelPressed__DelegateSignature();
		void BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_31_OnContinue__DelegateSignature();
		void BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature();
		void BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_6_OnCustomGameCreate__DelegateSignature();
		void BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_7_OnContinue__DelegateSignature();
		void BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_8_OnBack__DelegateSignature();
		void BndEvt__BodyCredits_K2Node_ComponentBoundEvent_9_OnNavigateBack__DelegateSignature();
		void BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_11_OnMenuPageSelected__DelegateSignature(EnumMainMenuPage PageName);
		void BndEvt__BodyAnnouncementPanel_K2Node_ComponentBoundEvent_10_OnContinue__DelegateSignature(bool bFromNewsAnnouncement, float TimeOnScreen, bool bClickedLink);
		void BndEvt__BodyModMenu_K2Node_ComponentBoundEvent_12_OnNavigateBack__DelegateSignature();
		void Prompt_For_Language();
		void BndEvt__BodyLanguage_K2Node_ComponentBoundEvent_15_OnContinue__DelegateSignature(bool IsNewCulture);
		void BndEvt__BodyOnlineStore_K2Node_ComponentBoundEvent_4_OnNavigateBack__DelegateSignature();
		void BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_14_OnNavigateBack__DelegateSignature();
		void BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_16_OnConfirmCreditVersion__DelegateSignature(const class FString& Version);
		void BndEvt__BodyTutorials_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature();
		void BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature();
		void BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_18_OnUnhovered__DelegateSignature();
		void BndEvt__BodyCharacter_K2Node_ComponentBoundEvent_41_OnNavigateBack__DelegateSignature();
		void OnUsingControllerUpdate(bool UsingController, EeInputIconType NewIconType);
		void BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_19_OnModalPopupOpened__DelegateSignature();
		void BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_20_OnModalPopupClosed__DelegateSignature();
		void BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_4_BreadcrumbsUpdated__DelegateSignature();
		void BndEvt__BodyPostMatch_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature();
		void InitMenu();
		void BndEvt__BodyProfile_K2Node_ComponentBoundEvent_103_OnNavigateBack__DelegateSignature();
		void BndEvt__BodySettings_K2Node_ComponentBoundEvent_85_OnNavigateBack__DelegateSignature();
		void BndEvt__BodyLocalGame_K2Node_ComponentBoundEvent_76_OnNavigateBack__DelegateSignature();
		void OnActiveClaimSetFocus();
		void BndEvt__BodyServerBrowser_K2Node_ComponentBoundEvent_70_OnNavigateBack__DelegateSignature();
		void BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_65_OnNavigateBack__DelegateSignature();
		void Destruct();
		void BndEvt__BodySingleplayerTemp_K2Node_ComponentBoundEvent_64_OnNavigateBack__DelegateSignature();
		void BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_21_OnHoveredParty__DelegateSignature();
		void BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_22_OnUnhoveredParty__DelegateSignature();
		void BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_23_OnHoverPartyMember__DelegateSignature();
		void BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_24_OnUnhoverPartyMember__DelegateSignature();
		void BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_25_OnLeaveFromParty__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_105_OnPressed__DelegateSignature();
		void BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_3_OnOpenServerBrowser__DelegateSignature();
		void BndEvt__BP_MainMenu_Main_K2Node_ComponentBoundEvent_1_OnMenuPageSelected__DelegateSignature(EnumMainMenuPage NewPage);
		void Construct();
		void BndEvt__BodySettings_K2Node_ComponentBoundEvent_25_OnShowLanguageSelect__DelegateSignature(bool bShown);
		void OnPartyLicenseToggled(bool bHasOpened);
		void OnToggleMpLicense(bool bHasOpened);
		void OnPlatformConnectionStatusChanged(bool bConnected);
		void ExecuteUbergraph_BP_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
