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
	 * BlueprintGeneratedClass Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UChallenge_Manufacturer_Vladof_Rockets_C : public UOakChallenge
	{
	public:
		void CheckRocketUnderbarrel(class AOakWeapon* Weapon, bool* CorrectUnderbarrel);
		void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
