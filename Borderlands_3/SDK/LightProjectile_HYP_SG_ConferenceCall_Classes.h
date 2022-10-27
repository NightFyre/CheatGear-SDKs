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
	 * BlueprintGeneratedClass LightProjectile_HYP_SG_ConferenceCall.LightProjectile_HYP_SG_ConferenceCall_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_HYP_SG_ConferenceCall_C : public ULightProjectile_Shotgun_C
	{
	public:
		void SpawnChild(class UOakLightProjectile* Projectile);
		void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
