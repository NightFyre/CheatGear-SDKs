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
	 * BlueprintGeneratedClass LightProjectile_TheSeventhSense_Implosion.LightProjectile_TheSeventhSense_Implosion_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_TheSeventhSense_Implosion_C : public UOakLightProjectileData
	{
	public:
		void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
		void EnableHoming(class ULightProjectile* Projectile);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
