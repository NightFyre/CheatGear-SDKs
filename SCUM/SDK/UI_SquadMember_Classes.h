#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_SquadMember.UI_SquadMember_C
	 * Size -> 0x006A (FullSize[0x02CA] - InheritedSize[0x0260])
	 */
	class UUI_SquadMember_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      CommandBox;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DemoteButton;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      FamePointBox;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FameText;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FPText;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HoverButton;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             KickButton;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MakeLeaderButton;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PromoteButton;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RankIcon;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FDbIntegerId                                        UserProfileId;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		EConZSquadMemberRank                                       Rank;                                                    // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBeManagedByPlayer;                                    // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateOptions();
		void SetInfo(const struct FDbIntegerId& UserProfileId, const class FString& Name, EConZSquadMemberRank Rank, float FamePoints, bool online);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void PromoteConfirmed();
		void PromoteCanceled();
		void DemoteConfirmed();
		void DemoteCanceled();
		void KickConfirmed();
		void KickCanceled();
		void MakeLeaderConfirmed();
		void MakeLeaderCanceled();
		void BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_SquadMember(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
