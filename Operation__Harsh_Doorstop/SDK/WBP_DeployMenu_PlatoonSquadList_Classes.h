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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C
	 * Size -> 0x0088 (FullSize[0x02D8] - InheritedSize[0x0250])
	 */
	class UWBP_DeployMenu_PlatoonSquadList_C : public UDeployMenu_PlatoonSquadListBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             CreateSquadBtn;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_11;                                                // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlatoonNameText;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SquadCountText;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SquadsList;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ToggleListVisibilityBtn;                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ToggleListVisibilityImg;                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bExpanded;                                               // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NI77[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PlatoonTextFormat;                                       // 0x0298(0x0018) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       bExpandListInDesigner;                                   // 0x02B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RYME[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumFakeSquadItems;                                       // 0x02B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             SquadItemPadding;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCollapsedByUser;                                        // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_445K[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_DeployMenu_SquadSelectionPanel_C*               ParentContainerWidget;                                   // 0x02D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void IsPlatoonValid(bool* bValidPLTN);
		void WasListCollapsedByUser(bool* bCollapsedByUser);
		void HasAnySquads(bool* bValidSquadsPresent);
		void SetPlatoonNameText(const class FText& NewPlatoonName);
		void UpdateCreateBtnAvailability();
		void UpdateSquadCountText();
		void CollapseListIfEmpty();
		void CollapseList();
		void ExpandList();
		void RemoveSquadItemWidgetFromList(class USquadListEntry* RemovedSquadData, int32_t RemoveIdx);
		void AddNewSquadItemWidget(class USquadListEntry* SquadData, class UWBP_DeployMenu_SquadList_C** SquadItemWidget);
		void GenerateSquad(class USquadListEntry* SquadData);
		void DeconstructSquad(class USquadListEntry* RemovedSquadData, int32_t RemovedSquadIdx);
		void BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void SquadsListExpanded();
		void SquadsListCollapsed();
		void BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnPlatoonSet();
		void ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
