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
	 * BlueprintGeneratedClass LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_CM_Ixora2_SRN_L01_C : public UOakLightProjectileData
	{
	public:
		void OnExplode(class ULightProjectile* Projectile);
		void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
		void EnableProjectileHoming(class UOakLightProjectile* LightProjectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
