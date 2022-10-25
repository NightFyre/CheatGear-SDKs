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
	 * BlueprintGeneratedClass LightProjectile_Lightspeed.LightProjectile_Lightspeed_C
	 * Size -> 0x00B8 (FullSize[0x03F8] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Lightspeed_C : public UOakLightProjectileData
	{
	public:
		struct FEnvQueryParams                                     EnvQuery;                                                // 0x0340(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnBegin(class ULightProjectile* Projectile);
		void OnRicochet(class ULightProjectile* Projectile, const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
