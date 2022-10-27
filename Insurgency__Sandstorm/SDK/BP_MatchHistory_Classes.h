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
	 * WidgetBlueprintGeneratedClass BP_MatchHistory.BP_MatchHistory_C
	 * Size -> 0x00B0 (FullSize[0x02E0] - InheritedSize[0x0230])
	 */
	class UBP_MatchHistory_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ReplayFadeIn;                                            // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LoadedTransition;                                        // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_Widget_LoadingIcon_Large_C*                      BP_Widget_LoadingIcon_Large;                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SpecialButton_C*                                 EnterReplayIdButton;                                     // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           ListView_54;                                             // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             LoadingProfile;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             NoMatchesFound;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtReplayExpiry;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UMatchHistoryRowData_C*>                      GeneratedData;                                           // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bHistoryRequested;                                       // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHistoryPopulated;                                       // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RA7G[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UObject*, class UUserWidget*>                   ItemToEntryMap;                                          // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnLoadedTransitionAnimationFinished();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnMatchHistoryLoaded(const struct FMatchHistory& NewHistory);
		void LoadHistory();
		void BndEvt__ListView_53_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void BndEvt__EnterReplayIdButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void WatchReplayByID(const class FText& ConfirmText);
		void CanceledReplayByID();
		void ConfirmedReplayByID();
		void Construct();
		void BndEvt__ListView_53_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void BndEvt__ListView_53_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void ExecuteUbergraph_BP_MatchHistory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
