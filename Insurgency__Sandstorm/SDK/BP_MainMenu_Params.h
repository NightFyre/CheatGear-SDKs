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
	 * Function BP_MainMenu.BP_MainMenu_C.ShowFooterBackground
	 */
	struct UBP_MainMenu_C_ShowFooterBackground_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.Update User ID
	 */
	struct UBP_MainMenu_C_Update_User_ID_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.AdjustElementsZOrderForModalPopup
	 */
	struct UBP_MainMenu_C_AdjustElementsZOrderForModalPopup_Params
	{
	public:
		bool                                                       bDecreaseZOrder;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1DM4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.SetPlatformSpecificVisual
	 */
	struct UBP_MainMenu_C_SetPlatformSpecificVisual_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnCanceledLicenseDialog
	 */
	struct UBP_MainMenu_C_OnCanceledLicenseDialog_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnConfirmedLicenseDialog
	 */
	struct UBP_MainMenu_C_OnConfirmedLicenseDialog_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.CreateLicenseAgreementDialog
	 */
	struct UBP_MainMenu_C_CreateLicenseAgreementDialog_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.PopItemClaimNotification
	 */
	struct UBP_MainMenu_C_PopItemClaimNotification_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.GetVisibilityOfLanguage
	 */
	struct UBP_MainMenu_C_GetVisibilityOfLanguage_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.Received New Item Claims
	 */
	struct UBP_MainMenu_C_Received_New_Item_Claims_Params
	{
	public:
		struct FOnlineItemClaimResult                              Result;                                                  // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnKeyUp
	 */
	struct UBP_MainMenu_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.CheckAccountStatus
	 */
	struct UBP_MainMenu_C_CheckAccountStatus_Params
	{
	public:
		struct FGetAccountStatusResult                             AccountStatus;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnAccountStatusUpdated
	 */
	struct UBP_MainMenu_C_OnAccountStatusUpdated_Params
	{
	public:
		struct FGetAccountStatusResult                             AccountStatus;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.GetPageWidget
	 */
	struct UBP_MainMenu_C_GetPageWidget_Params
	{
	public:
		EnumMainMenuPage                                           Page;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIO4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMainMenuPanelWidget*                                Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.GetCurrentPageWidget
	 */
	struct UBP_MainMenu_C_GetCurrentPageWidget_Params
	{
	public:
		class UMainMenuPanelWidget*                                Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.SetBackgroundOverlayEnabled
	 */
	struct UBP_MainMenu_C_SetBackgroundOverlayEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.UpdateBreadcrumbText
	 */
	struct UBP_MainMenu_C_UpdateBreadcrumbText_Params
	{
	public:
		TArray<class FText>                                        Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnFocusReceived
	 */
	struct UBP_MainMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BindGetMatchmakingVisibility
	 */
	struct UBP_MainMenu_C_BindGetMatchmakingVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.Get_BackButtonVisibility
	 */
	struct UBP_MainMenu_C_Get_BackButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.AttemptNavigateBack
	 */
	struct UBP_MainMenu_C_AttemptNavigateBack_Params
	{
	public:
		bool                                                       bDidNavigate;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnKeyDown
	 */
	struct UBP_MainMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.SelectPage
	 */
	struct UBP_MainMenu_C_SelectPage_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_936V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.Get_LabelVersion_Text_1
	 */
	struct UBP_MainMenu_C_Get_LabelVersion_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnGetStatusComplete_A69B5F8A48B9FA426E1555949E6B9883
	 */
	struct UBP_MainMenu_C_OnGetStatusComplete_A69B5F8A48B9FA426E1555949E6B9883_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MQAE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGetAccountStatusResult                             Result;                                                  // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnMotdReceived_A06CBA62496FD587F136789216BA2A89
	 */
	struct UBP_MainMenu_C_OnMotdReceived_A06CBA62496FD587F136789216BA2A89_Params
	{
	public:
		struct FMotdData                                           Motd;                                                    // 0x0000(0x0168)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnGetStatusComplete_A69B5F8A48B9FA426E15559437DA345E
	 */
	struct UBP_MainMenu_C_OnGetStatusComplete_A69B5F8A48B9FA426E15559437DA345E_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MNH9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGetAccountStatusResult                             Result;                                                  // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.PreConstruct
	 */
	struct UBP_MainMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyQuitDialog_K2Node_ComponentBoundEvent_74_OnCancelPressed__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyQuitDialog_K2Node_ComponentBoundEvent_74_OnCancelPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_31_OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_31_OnContinue__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_6_OnCustomGameCreate__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_6_OnCustomGameCreate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_7_OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_7_OnContinue__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_8_OnBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_8_OnBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCredits_K2Node_ComponentBoundEvent_9_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyCredits_K2Node_ComponentBoundEvent_9_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_11_OnMenuPageSelected__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_11_OnMenuPageSelected__DelegateSignature_Params
	{
	public:
		EnumMainMenuPage                                           PageName;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyAnnouncementPanel_K2Node_ComponentBoundEvent_10_OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyAnnouncementPanel_K2Node_ComponentBoundEvent_10_OnContinue__DelegateSignature_Params
	{
	public:
		bool                                                       bFromNewsAnnouncement;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M4MB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeOnScreen;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bClickedLink;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyModMenu_K2Node_ComponentBoundEvent_12_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyModMenu_K2Node_ComponentBoundEvent_12_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.Prompt For Language
	 */
	struct UBP_MainMenu_C_Prompt_For_Language_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyLanguage_K2Node_ComponentBoundEvent_15_OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyLanguage_K2Node_ComponentBoundEvent_15_OnContinue__DelegateSignature_Params
	{
	public:
		bool                                                       IsNewCulture;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyOnlineStore_K2Node_ComponentBoundEvent_4_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyOnlineStore_K2Node_ComponentBoundEvent_4_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_14_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_14_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_16_OnConfirmCreditVersion__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_16_OnConfirmCreditVersion__DelegateSignature_Params
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyTutorials_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyTutorials_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_18_OnUnhovered__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_18_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCharacter_K2Node_ComponentBoundEvent_41_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyCharacter_K2Node_ComponentBoundEvent_41_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnUsingControllerUpdate
	 */
	struct UBP_MainMenu_C_OnUsingControllerUpdate_Params
	{
	public:
		bool                                                       UsingController;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            NewIconType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_19_OnModalPopupOpened__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_19_OnModalPopupOpened__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_20_OnModalPopupClosed__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_20_OnModalPopupClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_4_BreadcrumbsUpdated__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_4_BreadcrumbsUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyPostMatch_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyPostMatch_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.InitMenu
	 */
	struct UBP_MainMenu_C_InitMenu_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyProfile_K2Node_ComponentBoundEvent_103_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyProfile_K2Node_ComponentBoundEvent_103_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySettings_K2Node_ComponentBoundEvent_85_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodySettings_K2Node_ComponentBoundEvent_85_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyLocalGame_K2Node_ComponentBoundEvent_76_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyLocalGame_K2Node_ComponentBoundEvent_76_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnActiveClaimSetFocus
	 */
	struct UBP_MainMenu_C_OnActiveClaimSetFocus_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyServerBrowser_K2Node_ComponentBoundEvent_70_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyServerBrowser_K2Node_ComponentBoundEvent_70_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_65_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_65_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.Destruct
	 */
	struct UBP_MainMenu_C_Destruct_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySingleplayerTemp_K2Node_ComponentBoundEvent_64_OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodySingleplayerTemp_K2Node_ComponentBoundEvent_64_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_21_OnHoveredParty__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_21_OnHoveredParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_22_OnUnhoveredParty__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_22_OnUnhoveredParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_23_OnHoverPartyMember__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_23_OnHoverPartyMember__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_24_OnUnhoverPartyMember__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_24_OnUnhoverPartyMember__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_25_OnLeaveFromParty__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_25_OnLeaveFromParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_105_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_105_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_3_OnOpenServerBrowser__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_3_OnOpenServerBrowser__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MainMenu_Main_K2Node_ComponentBoundEvent_1_OnMenuPageSelected__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BP_MainMenu_Main_K2Node_ComponentBoundEvent_1_OnMenuPageSelected__DelegateSignature_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.Construct
	 */
	struct UBP_MainMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySettings_K2Node_ComponentBoundEvent_25_OnShowLanguageSelect__DelegateSignature
	 */
	struct UBP_MainMenu_C_BndEvt__BodySettings_K2Node_ComponentBoundEvent_25_OnShowLanguageSelect__DelegateSignature_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnPartyLicenseToggled
	 */
	struct UBP_MainMenu_C_OnPartyLicenseToggled_Params
	{
	public:
		bool                                                       bHasOpened;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnToggleMpLicense
	 */
	struct UBP_MainMenu_C_OnToggleMpLicense_Params
	{
	public:
		bool                                                       bHasOpened;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnPlatformConnectionStatusChanged
	 */
	struct UBP_MainMenu_C_OnPlatformConnectionStatusChanged_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
	 */
	struct UBP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A7PS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
