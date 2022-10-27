#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass DLC2_Challenge_Crew.DLC2_Challenge_Crew_C
	 * Size -> 0x00D8 (FullSize[0x0338] - InheritedSize[0x0260])
	 */
	class UDLC2_Challenge_Crew_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDialogTimeSlotReference                            CrewActivationDialog;                                    // 0x0268(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDialogTimeSlotReference                            CrewCompletionDialog;                                    // 0x02A8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDialogTimeSlotReference                            CrewIntroDialog;                                         // 0x02E8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		class UGameStatData*                                       CrewIntroStat;                                           // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_CrewChallengeTypes_DLC2                               Enum_CrewChallenge_DLC2;                                 // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GA0T[0x3];                                   // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivationStartDelay;                                    // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShowInvalidOwnerMessage();
		void PlayActivationAudio();
		void ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer);
		void PlayCompletionAudio(class AGbxPlayerController* InputPin, bool* PlayedAudio);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void OnChallengeActivated();
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_DLC2_Challenge_Crew(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
