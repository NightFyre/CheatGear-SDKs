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
	 * BlueprintGeneratedClass LightProjectile_MAL_SG_Recursion.LightProjectile_MAL_SG_Recursion_C
	 * Size -> 0x00C8 (FullSize[0x0408] - InheritedSize[0x0340])
	 */
	class ULightProjectile_MAL_SG_Recursion_C : public UOakLightProjectileData
	{
	public:
		struct FEnvQueryParams                                     Query;                                                   // 0x0340(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              NumRecursions;                                           // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R9I0[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LightProjData;                                           // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopHoming(class ULightProjectile* Projectile);
		void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
