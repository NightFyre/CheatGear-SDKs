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
	 * BlueprintGeneratedClass LightProjectileData_BuffHeart_Trail.LightProjectileData_BuffHeart_Trail_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectileData_BuffHeart_Trail_C : public UOakLightProjectileData
	{
	public:
		void OnProxyImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
