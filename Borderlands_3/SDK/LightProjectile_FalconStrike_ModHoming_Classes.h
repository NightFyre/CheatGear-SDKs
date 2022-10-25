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
	 * BlueprintGeneratedClass LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_FalconStrike_ModHoming_C : public ULightProjectile_FalconStrike_C
	{
	public:
		void OnExplode(class ULightProjectile* Projectile);
		void HomeToTarget03(class UOakLightProjectile* Projectile);
		void HomeToTarget02(class UOakLightProjectile* Projectile);
		void HomeToTarget(class UOakLightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
