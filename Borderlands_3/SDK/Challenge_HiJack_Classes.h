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
	 * BlueprintGeneratedClass Challenge_HiJack.Challenge_HiJack_C
	 * Size -> 0x0048 (FullSize[0x0380] - InheritedSize[0x0338])
	 */
	class UChallenge_HiJack_C : public UChallenge_Crew_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) Transient, DuplicateTransient
		struct FDialogTimeSlotReference                            HijackEnterVehicleDialog;                                // 0x0340(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void ExecuteUbergraph_Challenge_HiJack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
