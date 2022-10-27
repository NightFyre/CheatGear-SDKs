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
	 * BlueprintGeneratedClass Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UChallenge_VaultReward_TrueGuardian_C : public UChallenge_VaultReward_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient

	public:
		void CompletedAllPlotMissions();
		void SetBinds(class UChallengesComponent* ChallengeComponent);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void ExecuteUbergraph_Challenge_VaultReward_TrueGuardian(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
