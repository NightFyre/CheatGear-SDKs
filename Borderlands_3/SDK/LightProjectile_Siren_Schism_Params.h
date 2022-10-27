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
	 * Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.OnDamage
	 */
	struct ULightProjectile_Siren_Schism_C_OnDamage_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       bCritical;                                               // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.OnLifetimeExpired
	 */
	struct ULightProjectile_Siren_Schism_C_OnLifetimeExpired_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.TryEnableProjectileHoming
	 */
	struct ULightProjectile_Siren_Schism_C_TryEnableProjectileHoming_Params
	{
	public:
		class UOakLightProjectile*                                 Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.EnableProjectileHoming
	 */
	struct ULightProjectile_Siren_Schism_C_EnableProjectileHoming_Params
	{
	public:
		class UOakLightProjectile*                                 Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
