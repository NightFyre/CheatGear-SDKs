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
	 * BlueprintGeneratedClass Challenge_Enemy_Ger_SlagtoothBadass.Challenge_Enemy_Ger_SlagtoothBadass_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UChallenge_Enemy_Ger_SlagtoothBadass_C : public UChallenge_Enemy_Ger_C
	{
	public:
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0260(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
