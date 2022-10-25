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
	 * WidgetBlueprintGeneratedClass BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C
	 * Size -> 0x0088 (FullSize[0x02B8] - InheritedSize[0x0230])
	 */
	class UBP_Widget_CallVoteMenu_C : public UPlayerVoteWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_GenericDialog_C*                                 BP_GenericDialog;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CallVoteOptionsBox;                                      // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        IssueListBox;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     OptionsComboBox;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsLayoutBox;                                        // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionsText;                                             // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PageSwitcher;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PlayerListBox;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FVotableIssue>                               VoteIssues;                                              // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    SelectedIssueIndex;                                      // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I4PB[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PlayerList[0x10];                                        // 0x0290(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class FString>                                      AvailableOptions;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UUserWidget*                                         InGameMenu;                                              // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GainFocus();
		void GetSelectedOption(class FString* SelectedOption);
		void PopulateOptions();
		void GetSelectedVoteIssueClass(class UClass** VoteClass);
		void AddPlayer(class AINSPlayerState* Player);
		void PopulatePlayers(bool bSameTeamOnly);
		void CallVote(class APlayerState* TargetPlayer, const class FString& Option);
		void Construct();
		void OnIssueClicked(const class FString& ContextValue, int32_t IssueIndex, bool bSelected);
		void OnPlayerButtonClicked(const class FString& ContextValue, int32_t PlayerIndex, bool bSelected);
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCloseButtonPressed__DelegateSignature();
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnCanceled__DelegateSignature();
		void OnInitialized();
		void RestoreWidgetFocus();
		void ExecuteUbergraph_BP_Widget_CallVoteMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
