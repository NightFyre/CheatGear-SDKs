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
	 * BlueprintGeneratedClass LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C
	 * Size -> 0x0030 (FullSize[0x0370] - InheritedSize[0x0340])
	 */
	class ULightProjectile_CalledShot_DurationReturn_C : public UOakLightProjectileData
	{
	public:
		struct FDataTableValueHandle                               DroneDuration;                                           // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               NumberOfRockets;                                         // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnExplode(class ULightProjectile* Projectile);
		void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
		void EnableProjectileHoming(class UOakLightProjectile* LightProjectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
