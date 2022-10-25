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
	 * WidgetBlueprintGeneratedClass BP_MatchHistoryRow.BP_MatchHistoryRow_C
	 * Size -> 0x0188 (FullSize[0x03B8] - InheritedSize[0x0230])
	 */
	class UBP_MatchHistoryRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_MatchHistoryRowAction_C*                         BtnReplayCopyId;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowAction_C*                         BtnReplayExpired;                                        // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowAction_C*                         BtnReplayUnavailable;                                    // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowAction_C*                         BtnReplayWatch;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MatchID;                                                 // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SelectedSwitcher;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatDate;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatDuration;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatKAD;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatMap;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatMode;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatObjectives;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatPlayedAs;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatPrefClass;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatPrefWeap;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MatchHistoryRowStat_C*                           StatScore;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSummaryDate;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSummaryDuration;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSummaryGamemode;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSummaryLvl;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSummaryPlayedAs;                                      // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FMatchHistoryEntry                                  RowData;                                                 // 0x02E0(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      PlayedAs;                                                // 0x0390(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                PlayedAsText;                                            // 0x03A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetPreferredWeapon();
		void SetSelectedState(bool bSelected);
		void Build_Played_as_Text(TArray<class FString>* PlayedAsTeams, class FText* Text);
		void Initialize();
		void BP_OnEntryReleased();
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BndEvt__BtnReplayCopyId_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(int32_t TabIndex);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void Construct();
		void BndEvt__BtnReplayWatch_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(int32_t TabIndex);
		void ExecuteUbergraph_BP_MatchHistoryRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
