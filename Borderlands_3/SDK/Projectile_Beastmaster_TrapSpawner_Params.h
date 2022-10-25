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
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.GetBarrierPlacementTransform
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_GetBarrierPlacementTransform_Params
	{
	public:
		struct FTransform                                          res;                                                     // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.UserConstructionScript
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.SpawnBarrier
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_SpawnBarrier_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnExplode
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnHitWorld
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OpenHitWorldGate
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_OpenHitWorldGate_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveBeginPlay
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.StartWobble
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_StartWobble_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.DidTrapSpawn
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_DidTrapSpawn_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveDestroyed
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner
	 */
	struct AProjectile_Beastmaster_TrapSpawner_C_ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VCQ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
