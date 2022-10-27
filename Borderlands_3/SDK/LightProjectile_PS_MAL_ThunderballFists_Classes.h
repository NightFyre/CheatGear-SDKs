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
	 * BlueprintGeneratedClass LightProjectile_PS_MAL_ThunderballFists.LightProjectile_PS_MAL_ThunderballFists_C
	 * Size -> 0x0004 (FullSize[0x0344] - InheritedSize[0x0340])
	 */
	class ULightProjectile_PS_MAL_ThunderballFists_C : public UOakLightProjectileData
	{
	public:
		float                                                      Radius;                                                  // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
