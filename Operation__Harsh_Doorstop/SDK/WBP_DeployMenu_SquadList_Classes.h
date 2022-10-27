#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C
	 * Size -> 0x00E0 (FullSize[0x0340] - InheritedSize[0x0260])
	 */
	class UWBP_DeployMenu_SquadList_C : public UDeployMenu_SquadListBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_2;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            DummyOption;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DummyOptionBtn;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_6;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_SQOption_C*                                     JoinLeaveSQOption;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             JoinLeaveSQOptionBtn;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          JoinLeaveSQOptionText;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_SQOption_C*                                     LockUnlockSQOption;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LockUnlockSQOptionBtn;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LockUnlockSQOptionText;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      SQOptionsHBox;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SquadMemberCountText;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SquadMembersList;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SquadNameText;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ToggleListVisibilityBtn;                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ToggleListVisibilityImg;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bExpanded;                                               // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y20P[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SquadTextFormat;                                         // 0x02F0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       bExpandListInDesigner;                                   // 0x0308(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EGMG[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumFakeSquadMemberItems;                                 // 0x030C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             SquadMemberItemPadding;                                  // 0x0310(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCollapsedByUser;                                        // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UGKM[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_DeployMenu_PlatoonSquadList_C*                  ParentContainerWidget;                                   // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FMargin                                             OptionPadding;                                           // 0x0330(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void IsSquadValid(bool* bValidSQ);
		void OnPaint(struct FPaintContext* Context);
		void SetSquadLockedState(bool bNewLocked);
		void UnlockSquad();
		void LockSquad();
		void KickSquadMember(class AHDPlayerState* MemberPSToKick);
		void WasListCollapsedByUser(bool* bCollapsedByUser);
		void UpdateLockUnlockBtnState();
		void HasAnySquadMembers(bool* bValidMembersPresent);
		void SetupSQOptions();
		void IsOwningPlayerInMemberWidgetList(bool* bOwnsMemberWidget);
		void TestPrereqsForAllMembers();
		void TestSquadAndMemberPrereqs();
		void TestSQPrereqs();
		void IsOwningPlayerRegisteredSquadLeader(bool* bSquadLeader);
		void IsOwningPlayerRegisteredSquadMember(bool bIgnorePendingRemoval, bool* bRegisteredMember);
		void UpdateJoinLeaveBtnState();
		void UpdateSquadMemberCountText();
		void CollapseListIfEmpty(bool bCollapseParentIfEmpty);
		void SetSquadNameText(const class FText& NewSquadName);
		void RemoveSquadMemberItemWidgetFromList(class USquadMemberInfo* RemovedMemberData);
		void AddNewSquadMemberItemWidget(class USquadMemberInfo* MemberData);
		void CollapseList(bool bCollapseParent);
		void ExpandList(bool bExpandParent);
		void BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void GenerateSquadMember(class USquadMemberInfo* MemberData);
		void DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData);
		void BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void SquadMembersListExpanded();
		void SquadMembersListCollapsed();
		void OnSquadSet();
		void OnSquadNameUpdated(const class FText& NewSquadName, const class FText& PreviousSquadName);
		void OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void OnSquadLockStateUpdated(bool bNewLockedState);
		void ExecuteUbergraph_WBP_DeployMenu_SquadList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
