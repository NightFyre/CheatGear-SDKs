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
	 * BlueprintGeneratedClass LightProj_Railgun_Mod2.LightProj_Railgun_Mod2_C
	 * Size -> 0x00B8 (FullSize[0x03F8] - InheritedSize[0x0340])
	 */
	class ULightProj_Railgun_Mod2_C : public ULightProj_Railgun_Default_C
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
