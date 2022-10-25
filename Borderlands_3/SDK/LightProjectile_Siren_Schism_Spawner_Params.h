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
	 * Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.CalcSchismFireTrajectory
	 */
	struct ULightProjectile_Siren_Schism_Spawner_C_CalcSchismFireTrajectory_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M52M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             res;                                                     // 0x0018(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.FireSchismProjectilesAtTargets
	 */
	struct ULightProjectile_Siren_Schism_Spawner_C_FireSchismProjectilesAtTargets_Params
	{
	public:
		float                                                      SchismDamage;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O6EV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ProjectileOwner;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R4U9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      Targets;                                                 // 0x0020(0x0010)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.ExplodeProjectile
	 */
	struct ULightProjectile_Siren_Schism_Spawner_C_ExplodeProjectile_Params
	{
	public:
		class UOakLightProjectile*                                 Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnExplode
	 */
	struct ULightProjectile_Siren_Schism_Spawner_C_OnExplode_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnLifetimeExpired
	 */
	struct ULightProjectile_Siren_Schism_Spawner_C_OnLifetimeExpired_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
