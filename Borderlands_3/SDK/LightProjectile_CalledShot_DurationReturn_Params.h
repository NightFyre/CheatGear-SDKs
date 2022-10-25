#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.OnExplode
	 */
	struct ULightProjectile_CalledShot_DurationReturn_C_OnExplode_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.TryEnableProjectileHoming
	 */
	struct ULightProjectile_CalledShot_DurationReturn_C_TryEnableProjectileHoming_Params
	{
	public:
		class UOakLightProjectile*                                 Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.EnableProjectileHoming
	 */
	struct ULightProjectile_CalledShot_DurationReturn_C_EnableProjectileHoming_Params
	{
	public:
		class UOakLightProjectile*                                 LightProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
