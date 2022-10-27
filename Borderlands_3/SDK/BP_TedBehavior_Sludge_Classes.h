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
	 * BlueprintGeneratedClass BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBP_TedBehavior_Sludge_C : public UTedioreBehavior
	{
	public:
		void K2_OnProjectileImpact(class ATedioreProjectile* Projectile, const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
