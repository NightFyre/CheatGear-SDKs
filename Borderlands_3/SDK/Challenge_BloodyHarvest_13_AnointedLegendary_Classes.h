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
	 * BlueprintGeneratedClass Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UChallenge_BloodyHarvest_13_AnointedLegendary_C : public UBP_Challenge_BloodyHarvest_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		class AOakCharacter*                                       Player;                                                  // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UInventorySlotData*>                          InvSlots;                                                // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void CheckAllSlots(class AActor* EquippedActor, class UInventorySlotData* SlotData);
		void CheckInvSlotIsFromLeague(class UInventorySlotData* InvSlot, bool* IsBHAnointedGear);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
