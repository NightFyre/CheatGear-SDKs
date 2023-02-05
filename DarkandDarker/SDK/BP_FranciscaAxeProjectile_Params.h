#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.UserConstructionScript
	 */
	struct ABP_FranciscaAxeProjectile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ProjectileHit
	 */
	struct ABP_FranciscaAxeProjectile_C_ProjectileHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       bIsAttached;                                             // 0x00E8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2E2K[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ActorPrevTickTransform;                                  // 0x00F0(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ReceiveBeginPlay
	 */
	struct ABP_FranciscaAxeProjectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ExecuteUbergraph_BP_FranciscaAxeProjectile
	 */
	struct ABP_FranciscaAxeProjectile_C_ExecuteUbergraph_BP_FranciscaAxeProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CQK1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
