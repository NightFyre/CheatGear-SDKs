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
	 * BlueprintGeneratedClass Challenge_DLC2_Hunt_Stat.Challenge_DLC2_Hunt_Stat_C
	 * Size -> 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
	 */
	class UChallenge_DLC2_Hunt_Stat_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDataTableRowHandle                                 HuntMailRow;                                             // 0x0268(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FDialogTimeSlotReference                            CrewCompletionDialog;                                    // 0x0278(0x0040) Edit, BlueprintVisible

	public:
		void PlayCompletionVO(class AGbxPlayerController* PlayerController, const struct FDialogTimeSlotReference& TimeSlot, bool* Played);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void ExecuteUbergraph_Challenge_DLC2_Hunt_Stat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
