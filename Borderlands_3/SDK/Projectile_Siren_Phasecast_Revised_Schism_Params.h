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
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismDamage
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_GetSchismDamage_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MPG8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismProjectileClass
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_GetSchismProjectileClass_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.FireSchismProjectile
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_FireSchismProjectile_Params
	{
	public:
		class AActor*                                              EnemyTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.UserConstructionScript
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.DoDamageToEnemy
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_DoDamageToEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.TrySchism
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_TrySchism_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ResetSchism
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_ResetSchism_Params
	{	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism
	 */
	struct AProjectile_Siren_Phasecast_Revised_Schism_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
