﻿#pragma once

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
	 * Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.OnLifetimeExpired
	 */
	struct ULightProjectile_TOR_SG_Balrog_C_OnLifetimeExpired_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.Boom
	 */
	struct ULightProjectile_TOR_SG_Balrog_C_Boom_Params
	{
	public:
		class UOakLightProjectile*                                 Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
