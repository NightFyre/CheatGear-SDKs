﻿#pragma once

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
	 * BlueprintGeneratedClass LightProjectile_HYP_SG_Reflux.LightProjectile_HYP_SG_Reflux_C
	 * Size -> 0x00B8 (FullSize[0x03F8] - InheritedSize[0x0340])
	 */
	class ULightProjectile_HYP_SG_Reflux_C : public ULightProjectile_Shotgun_C
	{
	public:
		struct FEnvQueryParams                                     Query;                                                   // 0x0340(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
