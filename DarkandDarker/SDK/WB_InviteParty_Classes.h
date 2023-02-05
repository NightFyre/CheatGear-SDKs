#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_InviteParty.WB_InviteParty_C
	 * Size -> 0x0098 (FullSize[0x0570] - InheritedSize[0x04D8])
	 */
	class UWB_InviteParty_C : public UInvitePartyWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          BlockCount;                                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          BlockedCount;                                            // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Back;                                                // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CurrentPage;                                             // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DungeonCount;                                            // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DungeonCount_2;                                          // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DungeonCount_3;                                          // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    FindUserTextBox;                                         // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LobbyCount;                                              // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MaxPage;                                                 // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyPrivacyButtonHover;                                 // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyPrivacyButtonPress;                                 // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_Arrow_C*                               WB_CommonBtn_Arrow_L;                                    // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_Arrow_C*                               WB_CommonBtn_Arrow_R;                                    // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_XS_C*                                  WB_CommonBtn_FindId;                                     // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonPopup_S_C*                                 WB_CommonPopup_S;                                        // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingLeft_S_C*                                 WB_TabWingLeft_S;                                        // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingRight_S_C*                                WB_TabWingRight_S;                                       // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnMessageReceived_5F95D89141882C5444AE5CA7267AB723(class UMsgBaseNode* ProxyObject);
		void OnPageNumber(int32_t CurrentPage, int32_t MaxPage);
		void OnLocateNumber(int32_t LobbyCount, int32_t DungeonCount, int32_t BlockCount);
		void Construct();
		void EventFMsgWidgetPopupMessageResponse(const struct FMsgWidgetPopupMessageResponse& Msg);
		void BackButtonClicked();
		void BndEvt__WB_InviteParty_FindUserTextBox_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_4_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility Invisibility);
		void BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_62_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility Invisibility);
		void UserListLeftButtonClicked();
		void UserListRightButtonClicked();
		void UserListFindIdClicked();
		void BndEvt__WB_InviteParty_InvitePartySlotTileView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void TryRequestInviteParty(class UInvitePartyUserSlotWidgetData* InInvitePartyUserSlotWidgetData);
		void ExecuteUbergraph_WB_InviteParty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
