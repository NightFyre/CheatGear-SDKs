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
	 * BlueprintGeneratedClass PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C
	 * Size -> 0x0000 (FullSize[0x01E8] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_WIthNova_C : public UOakPassiveAbility_Siren
	{
	public:
		void GetNovaExplosion(class UClass* DamageType, class UExplosionData** ExplosionData);
		void GetNovaDamage(float* res);
		void DoStandaloneNova(const struct FVector& InLocation, class UClass* InElement, bool Knockback);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
