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
	 * Function Proj_Grenade.Proj_Grenade_C.AIProjectile_CanBeStolen
	 */
	struct AProj_Grenade_C_AIProjectile_CanBeStolen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.AIProjectileDetonate
	 */
	struct AProj_Grenade_C_AIProjectileDetonate_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.AIProjectileArm
	 */
	struct AProj_Grenade_C_AIProjectileArm_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.AIProjectileDisarm
	 */
	struct AProj_Grenade_C_AIProjectileDisarm_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.TriggerGrenadeDodge
	 */
	struct AProj_Grenade_C_TriggerGrenadeDodge_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.UserConstructionScript
	 */
	struct AProj_Grenade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.ReceiveBeginPlay
	 */
	struct AProj_Grenade_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.OnBounce
	 */
	struct AProj_Grenade_C_OnBounce_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Arm
	 */
	struct AProj_Grenade_C_AIProjectile_Arm_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Detonate
	 */
	struct AProj_Grenade_C_AIProjectile_Detonate_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Disarm
	 */
	struct AProj_Grenade_C_AIProjectile_Disarm_Params
	{	};

	/**
	 * Function Proj_Grenade.Proj_Grenade_C.ExecuteUbergraph_Proj_Grenade
	 */
	struct AProj_Grenade_C_ExecuteUbergraph_Proj_Grenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JDKX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
