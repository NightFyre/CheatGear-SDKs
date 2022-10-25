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
	 * BlueprintGeneratedClass LightProjectile_COV_HW_HotDrop.LightProjectile_COV_HW_HotDrop_C
	 * Size -> 0x0008 (FullSize[0x0348] - InheritedSize[0x0340])
	 */
	class ULightProjectile_COV_HW_HotDrop_C : public ULightProjectile_Heavy_C
	{
	public:
		class USplatData*                                          SplatData;                                               // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		void OnExplode(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
