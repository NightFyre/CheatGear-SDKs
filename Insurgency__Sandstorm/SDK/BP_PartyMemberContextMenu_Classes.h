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
	 * WidgetBlueprintGeneratedClass BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C
	 * Size -> 0x00D8 (FullSize[0x0308] - InheritedSize[0x0230])
	 */
	class UBP_PartyMemberContextMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PartyMemberContextMenuButton_C*                  BtnKickPlayer;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberContextMenuButton_C*                  BtnLeaveParty;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberContextMenuButton_C*                  BtnPromoteToLeader;                                      // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberContextMenuButton_C*                  BtnShowProfile;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberContextMenuButton_C*                  BtnShowProfile_2;                                        // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ContextMenuArrowBox;                                     // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ExtendedClickImage;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_143;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Name;                                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     OptionSwitcher;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OtherPlayerLeader;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OtherPlayerNotLeader;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PersonalOptions;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            WidgetSizeBox;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLeaveFocusPath;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLeaveParty;                                            // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPromotePlayer;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              UserNetId;                                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnKickPlayer;                                            // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFocused;                                               // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ChangeButtonVisibility();
		ESlateVisibility Get_ContextMenuArrowBox_Visibility_1();
		void SetDetails(bool IsLocal, const class FString& PlayerName, const class FString& InUserNetId);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void BndEvt__Btn_LeaveParty_K2Node_ComponentBoundEvent_15_OnCicked__DelegateSignature();
		void BndEvt__Btn_PromoteToLeader_K2Node_ComponentBoundEvent_16_OnCicked__DelegateSignature();
		void BndEvt__Btn_KickPlayer_K2Node_ComponentBoundEvent_14_OnCicked__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void Construct();
		void BndEvt__BtnShowProfile_K2Node_ComponentBoundEvent_0_OnCicked__DelegateSignature();
		void BndEvt__BtnShowProfile_1_K2Node_ComponentBoundEvent_1_OnCicked__DelegateSignature();
		void ExecuteUbergraph_BP_PartyMemberContextMenu(int32_t EntryPoint);
		void OnFocused__DelegateSignature();
		void OnKickPlayer__DelegateSignature(const class FString& User_Net_Id);
		void OnPromotePlayer__DelegateSignature(const class FString& UserNetId);
		void OnLeaveParty__DelegateSignature();
		void OnLeaveFocusPath__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
