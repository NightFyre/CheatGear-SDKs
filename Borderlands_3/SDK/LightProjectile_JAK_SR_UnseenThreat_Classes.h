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
	 * BlueprintGeneratedClass LightProjectile_JAK_SR_UnseenThreat.LightProjectile_JAK_SR_UnseenThreat_C
	 * Size -> 0x00B8 (FullSize[0x0548] - InheritedSize[0x0490])
	 */
	class ULightProjectile_JAK_SR_UnseenThreat_C : public ULightProjectile_JAK_C
	{
	public:
		struct FEnvQueryParams                                     Query;                                                   // 0x0490(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
