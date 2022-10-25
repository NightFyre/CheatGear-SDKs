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
	 * WidgetBlueprintGeneratedClass BP_MapVote.BP_MapVote_C
	 * Size -> 0x0089 (FullSize[0x02E1] - InheritedSize[0x0258])
	 */
	class UBP_MapVote_C : public UMapVoteWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_MapVoteOption_C*                                 BP_MapVoteOption;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteOption_C*                                 BP_MapVoteOption_135;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteOption_C*                                 BP_MapVoteOption_287;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteOption_C*                                 BP_MapVoteOption_485;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteOption_C*                                 BP_MapVoteOption_C_2;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteOption_C*                                 BP_MapVoteOption_C_3;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteButton_C*                                 BtnOtherScenarios;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteButton_C*                                 BtnPlayAgain;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MapVoteButton_C*                                 BtnRandom;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   OptionPanel;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimeRemaining;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UBP_MapVoteOption_C*>                         OptionEntries;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		EMapVoteSelection                                          LastSelectedVoteButton;                                  // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EW3X[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AllVoteButtons[0x10];                                    // 0x02D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bWinReceived;                                            // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ConfigButtonOtherScenario();
		void PlayButtonIntroAnim();
		void SelectOption(EMapVoteSelection Selection);
		void GetWidgetForVoteSelection(EMapVoteSelection Selection, class UUserWidget** Widget);
		void GetVoteSelectionFromIndex(int32_t Index, EMapVoteSelection* Selection);
		void CreateButtonForScenario(const struct FMapVoteOption& Data, EMapVoteSelection Selection, class UBP_MapVoteOption_C** NewWidget);
		void UpdateTimeRemainingText();
		void Construct();
		void OnMapVoteStarted(TArray<struct FMapVoteOption> Maps, float EndTime, bool bInCanVoteRefresh);
		void OnVoteCountUpdated(TArray<struct FMapVoteCount> Data);
		void OnLocalOptionSelected(EMapVoteSelection Selection);
		void OnVoteWinnerChosen(EMapVoteSelection Selection);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void RestoreWidgetFocus();
		void ExecuteUbergraph_BP_MapVote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
