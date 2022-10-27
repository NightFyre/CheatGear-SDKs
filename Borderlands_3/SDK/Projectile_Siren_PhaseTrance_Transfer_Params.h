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
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnHomingTargetDied
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_OnHomingTargetDied_Params
	{
	public:
		class AActor*                                              Receiver;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Causer;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.AttachToNewHomingTarget
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_AttachToNewHomingTarget_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.DetachFromOldHomingTarget
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_DetachFromOldHomingTarget_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetNewHomingTarget
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_SetNewHomingTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.GetGraspDuration
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_GetGraspDuration_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J5N1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetTransferParticle
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_SetTransferParticle_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.PlayExplosionEffect
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_PlayExplosionEffect_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.UserConstructionScript
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ReceiveBeginPlay
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnExplode
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnShutdownGracefully
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_OnShutdownGracefully_Params
	{	};

	/**
	 * Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer
	 */
	struct AProjectile_Siren_PhaseTrance_Transfer_C_ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FGQI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
