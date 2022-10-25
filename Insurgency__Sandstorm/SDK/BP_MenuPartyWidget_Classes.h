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
	 * WidgetBlueprintGeneratedClass BP_MenuPartyWidget.BP_MenuPartyWidget_C
	 * Size -> 0x01B4 (FullSize[0x048C] - InheritedSize[0x02D8])
	 */
	class UBP_MenuPartyWidget_C : public UMenuPartyWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     AvatarSwitcher;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSSwitcher_C*                                   BP_INSSwitcher;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalPlayerAvatar_C*                             BP_LocalPlayerAvatar;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar;                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_1;                                  // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_2;                                  // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_3;                                  // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_4;                                  // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_5;                                  // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_6;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_7;                                  // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberAvatar_C*                             BP_PartyMemberAvatar_C_1;                                // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberContextMenu_C*                        BP_PartyMemberContextMenu;                               // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             CreateBackground;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            CreateInviteSizeBox;                                     // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CreatePartyBtn;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CreatePartyImage;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconLockImage;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             InviteBackground;                                        // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              InviteLockImage;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             InvitePlusPart1;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             InvitePlusPart2;                                         // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     InviteSwitcher;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             InviteToPartyBtn;                                        // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            KeyActionOverlay;                                        // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     KeyAvailableSwitcher;                                    // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      OtherMembersBox;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      PartyMembersBox;                                         // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PartyStateSwitch;                                        // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      PersonalBox;                                             // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FINSPartyState                                      LastPartyState;                                          // 0x03D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ContextMenuWidth;                                        // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KQ3U[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ConfirmationText;                                        // 0x03F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CanPlayFocusSound;                                       // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPartyJoined;                                            // 0x0431(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasServicesLinkedCached;                                // 0x0432(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KKW4[0x5];                                   // 0x0433(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHoveredParty;                                          // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhoveredParty;                                        // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHoverPartyMember;                                      // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhoverPartyMember;                                    // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLeaveFromParty;                                        // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    LastMembersCount;                                        // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HasServicesLinked(bool* Return);
		void CreateParty();
		void OnServiceLoginComplete(bool bSuccessful, const class FName& InServiceName);
		void BP_MenuPartyWidget_AutoGenFunc2();
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void CreateMapDownloadingDialog();
		ESlateVisibility Get_IconLockImage_Visibility_1();
		void BP_MenuPartyWidget_AutoGenFunc1();
		void UpdateLicenseWidget();
		void OnConfirmedRestrictions();
		void UpdateRestrictionWidget(const class FText& InConfirmableText);
		void UpdateWaitingWidget();
		void BP_MenuPartyWidget_AutoGenFunc();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnPartyMemberSelected(bool bIsLocalPlayer, bool bIsLeader, const class FString& UserNetId, const class FString& PlayerName);
		void ChangeButtonsVisibilityForPlatform();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FLinearColor GetCreateButtonForegroundColor();
		struct FLinearColor GetCreateButtonBackgroundColor();
		struct FLinearColor GetInviteButtonForegroundColor();
		struct FLinearColor GetInviteButtonBackgroundColor();
		void ClearParty();
		void PopulatePartyFromState(const struct FINSPartyState& State);
		void OnPartyStateUpdate(struct FINSPartyState* State, struct FPartySettings* Settings);
		void OnPartyLeft();
		void OnPartyJoined(struct FINSPartyState* State);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_7_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_8_OnButtonFocusEvent__DelegateSignature();
		void OnLeaveParty();
		void OnPlayerPromoted(const class FString& UserNetId);
		void OnContextFocusLost();
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void UpdateWaitingDialogInfoBP();
		void UpdateRestrictionDialogInfoBP(const class FText& InConfirmableText);
		void OnPlayerKicked(const class FString& User_Net_Id);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void UpdateLicenseAgreementDialogBP();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnConsoleContextMenuClosed();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature();
		void DelayForFocusSound();
		void UpdateReturningDialogInfoBP();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature();
		void BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_12_OnUnhovered__DelegateSignature();
		void BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_13_OnLeaveParty__DelegateSignature();
		void BndEvt__LeavePartyBtn_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BP_INSSwitcher_K2Node_ComponentBoundEvent_10_OnPlatformSelected__DelegateSignature(const class FText& SelectedText);
		void OnPartyCreatedByUser();
		void OnLicenseCanceled();
		void OnLicenseConfirmed();
		void ExecuteUbergraph_BP_MenuPartyWidget(int32_t EntryPoint);
		void OnLeaveFromParty__DelegateSignature();
		void OnUnhoverPartyMember__DelegateSignature();
		void OnHoverPartyMember__DelegateSignature();
		void OnUnhoveredParty__DelegateSignature();
		void OnHoveredParty__DelegateSignature();
		void OnUnhovered__DelegateSignature();
		void OnHovered__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
