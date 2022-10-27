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
	 * BlueprintGeneratedClass LightProjectile_Sidewinder_Sticky.LightProjectile_Sidewinder_Sticky_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Sidewinder_Sticky_C : public UOakLightProjectileData
	{
	public:
		void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		void OnBegin(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
