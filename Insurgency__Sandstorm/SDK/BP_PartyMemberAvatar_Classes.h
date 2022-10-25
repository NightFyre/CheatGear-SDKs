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
	 * WidgetBlueprintGeneratedClass BP_PartyMemberAvatar.BP_PartyMemberAvatar_C
	 * Size -> 0x00D0 (FullSize[0x0340] - InheritedSize[0x0270])
	 */
	class UBP_PartyMemberAvatar_C : public UPlayerDetailsWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMenuAnchor*                                         Anchor;                                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              AvatarImg;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ConsoleContextMenuArrowBox;                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_540;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            IsLeaderOverlay;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PartyMemberBtn;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SelectionOverlay;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsLeader;                                                // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLocalPlayer;                                           // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RIYW[0x6];                                   // 0x02C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyMemberSelected;                                   // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRemoveFromFocusPath;                                   // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMaterialInterface*                                  SircularThrobberMat;                                     // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PlatformIdEditorTest;                                    // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPartyMemberLeave;                                      // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              curPlatformId;                                           // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHoverPartyMember;                                      // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhoverPartyMember;                                    // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnRequestData();
		void OnKickPartyMember(const class FString& User_Net_Id);
		void GetUserNetID(class FString* ID);
		void SetDefaultAvatar();
		void SetData(bool IsLeader, bool IsLocal, const class FString& PlatfomId, int32_t Index);
		class UWidget* On_Anchor_GetMenuContent_1();
		void DisplayPopupMenu();
		void OnPromotePlayer(const class FString& InUserNetId);
		void OnLeaveParty();
		void OnPopupLeftFocusPath();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnNameUpdated(const class FString& Name);
		void OnTextureUpdated(class UTexture2D* Texture);
		void Construct();
		void OnConnectionStatusChanged(bool bConnected);
		void OnConsoleContextMenuClosed();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void UsingController(bool UsingController, EeInputIconType NewIconType);
		void BndEvt__PartyMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BP_PartyMemberAvatar(int32_t EntryPoint);
		void OnUnhoverPartyMember__DelegateSignature();
		void OnHoverPartyMember__DelegateSignature();
		void OnPartyMemberLeave__DelegateSignature();
		void OnRemoveFromFocusPath__DelegateSignature();
		void OnPartyMemberSelected__DelegateSignature(bool bIsLocalPlayer, bool bIsLeader, const class FString& UserNetId, const class FString& PlayerName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
