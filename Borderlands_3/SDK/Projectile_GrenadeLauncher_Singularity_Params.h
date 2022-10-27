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
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.DoGrenadeSingularityMovement
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_DoGrenadeSingularityMovement_Params
	{	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.AttemptGrenadeSingularity
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_AttemptGrenadeSingularity_Params
	{	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.InitGrenadeLauncher
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_InitGrenadeLauncher_Params
	{	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.UserConstructionScript
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ReceiveBeginPlay
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnExplode
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitDamagableObject
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitWorld
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity
	 */
	struct AProjectile_GrenadeLauncher_Singularity_C_ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
