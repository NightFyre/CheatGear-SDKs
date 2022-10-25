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
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.GetBarrierPlacementTransform
	 */
	struct AProjectile_Operative_BarrierSpawner_C_GetBarrierPlacementTransform_Params
	{
	public:
		struct FTransform                                          res;                                                     // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.UserConstructionScript
	 */
	struct AProjectile_Operative_BarrierSpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
	 */
	struct AProjectile_Operative_BarrierSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.SpawnBarrier
	 */
	struct AProjectile_Operative_BarrierSpawner_C_SpawnBarrier_Params
	{	};

	/**
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnExplode
	 */
	struct AProjectile_Operative_BarrierSpawner_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnHitWorld
	 */
	struct AProjectile_Operative_BarrierSpawner_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OpenHitWorldGate
	 */
	struct AProjectile_Operative_BarrierSpawner_C_OpenHitWorldGate_Params
	{	};

	/**
	 * Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.ExecuteUbergraph_Projectile_Operative_BarrierSpawner
	 */
	struct AProjectile_Operative_BarrierSpawner_C_ExecuteUbergraph_Projectile_Operative_BarrierSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E8WD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
