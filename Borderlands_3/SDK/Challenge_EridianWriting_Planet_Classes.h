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
	 * BlueprintGeneratedClass Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UChallenge_EridianWriting_Planet_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDialogTimeSlotReference                            SlabDialogActivation;                                    // 0x0268(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDialogTimeSlotReference                            SlabDialogComplete;                                      // 0x02A8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void OnChallengeActivated();
		void ExecuteUbergraph_Challenge_EridianWriting_Planet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
