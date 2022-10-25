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
	 * BlueprintGeneratedClass BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UBP_Challenge_ValentinesDayEvent_Tier4_C : public UBP_Challenge_ValentinesDayEvent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDialogTimeSlotReference                            ChallengeCompleteDialog;                                 // 0x0268(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void PlayCompletionAudio(class AGbxPlayerController* InputPin, bool* PlayedAudio);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
