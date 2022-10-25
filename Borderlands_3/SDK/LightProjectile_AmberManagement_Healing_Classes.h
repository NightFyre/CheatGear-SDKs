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
	 * BlueprintGeneratedClass LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_AmberManagement_Healing_C : public UOakLightProjectileData
	{
	public:
		void TryEnableHoming(class UOakLightProjectile* LightProjectile);
		void EnableProjectileHoming(class UOakLightProjectile* LightProjectile);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
