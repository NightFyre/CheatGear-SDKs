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
	 * BlueprintGeneratedClass LightProjectile_Stonethrow.LightProjectile_Stonethrow_C
	 * Size -> 0x00B8 (FullSize[0x0548] - InheritedSize[0x0490])
	 */
	class ULightProjectile_Stonethrow_C : public UOakJAKLightProjectileData
	{
	public:
		struct FEnvQueryParams                                     EnvQuery;                                                // 0x0490(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
