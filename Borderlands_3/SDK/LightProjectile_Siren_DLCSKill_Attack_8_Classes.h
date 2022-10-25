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
	 * BlueprintGeneratedClass LightProjectile_Siren_DLCSKill_Attack_8.LightProjectile_Siren_DLCSKill_Attack_7_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Siren_DLCSKill_Attack_7_C : public UOakLightProjectileData
	{
	public:
		void EnableHoming(class UOakLightProjectile* Projectile);
		void TryEnableHoming(class UOakLightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
