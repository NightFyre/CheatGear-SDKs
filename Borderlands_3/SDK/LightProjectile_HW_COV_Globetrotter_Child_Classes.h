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
	 * BlueprintGeneratedClass LightProjectile_HW_COV_Globetrotter_Child.LightProjectile_HW_COV_Globetrotter_Child_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_HW_COV_Globetrotter_Child_C : public UOakLightProjectileData
	{
	public:
		void OnRicochet(class ULightProjectile* Projectile, const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
