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
	 * BlueprintGeneratedClass LightProjectile_Remnant.LightProjectile_Remnant_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Remnant_C : public UOakLightProjectileData
	{
	public:
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
		void EnableProjectileHoming(class UOakLightProjectile* LightProjectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
