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
	 * BlueprintGeneratedClass LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_TOR_PS_Voice_Sticky_2_C : public ULightProjectile_TOR_GyroJet_Master_C
	{
	public:
		void OnExplode(class ULightProjectile* Projectile);
		void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
