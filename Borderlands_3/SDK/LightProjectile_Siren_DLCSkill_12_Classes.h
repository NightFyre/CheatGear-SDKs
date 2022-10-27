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
	 * BlueprintGeneratedClass LightProjectile_Siren_DLCSkill_12.LightProjectile_Siren_DLCSkill_11_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Siren_DLCSkill_11_C : public UOakLightProjectileData
	{
	public:
		void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
		void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
		void EnableProjectileHoming(class UOakLightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
