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
	 * BlueprintGeneratedClass Damage_PetSkag_GreatHornedKnockup.Damage_PetSkag_GreatHornedKnockup_C
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UDamage_PetSkag_GreatHornedKnockup_C : public UOakDamageData
	{
	public:
		struct FGameplayTagContainer                               UnDesiredTags;                                           // 0x0310(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
