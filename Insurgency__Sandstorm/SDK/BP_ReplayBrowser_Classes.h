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
	 * WidgetBlueprintGeneratedClass BP_ReplayBrowser.BP_ReplayBrowser_C
	 * Size -> 0x0039 (FullSize[0x0269] - InheritedSize[0x0230])
	 */
	class UBP_ReplayBrowser_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOutLoadingMessage;                                   // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_SpecialButton_C*                                 EnterReplayIdButton;                                     // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ReplayList_C*                                    PanelReplayList;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SpecialButton_C*                                 RefreshButton;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bEnumeratingReplays;                                     // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E1QH[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalReplaysFound;                                       // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bGlobalReplays;                                          // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetInitialFocus();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetFilters(bool bPersonal);
		class FText Get_StatusLoadingText_Text_1();
		bool Get_BtnRefreshRecentStreams_bIsEnabled_1();
		void RefreshList();
		void OnReplaysEnumerated_A45BCCCF45C73ECEA0E21695A412F751(TArray<struct FReplayBrowserInfo> Streams);
		void Construct();
		void BndEvt__BP_SpecialButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__BP_SpecialButton_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void LoadReplayList();
		void WatchReplayByID(const class FText& ConfirmText);
		void CanceledReplayByID();
		void ConfirmedReplayByID();
		void ExecuteUbergraph_BP_ReplayBrowser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
