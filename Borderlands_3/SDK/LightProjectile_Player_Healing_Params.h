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
	 * Function LightProjectile_Player_Healing.LightProjectile_Player_Healing_C.TryEnableHoming
	 */
	struct ULightProjectile_Player_Healing_C_TryEnableHoming_Params
	{
	public:
		class UOakLightProjectile*                                 LightProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Player_Healing.LightProjectile_Player_Healing_C.EnableProjectileHoming
	 */
	struct ULightProjectile_Player_Healing_C_EnableProjectileHoming_Params
	{
	public:
		class UOakLightProjectile*                                 LightProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Player_Healing.LightProjectile_Player_Healing_C.OnLifetimeExpired
	 */
	struct ULightProjectile_Player_Healing_C_OnLifetimeExpired_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
