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
	 * BlueprintGeneratedClass Challenge_Manufacturer_Hyperion_AmpKills.Challenge_Manufacturer_Hyperion_AmpKills_C
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UChallenge_Manufacturer_Hyperion_AmpKills_C : public UOakChallenge
	{
	public:
		struct FStatusEffectQuery                                  StatusToFind;                                            // 0x0260(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
