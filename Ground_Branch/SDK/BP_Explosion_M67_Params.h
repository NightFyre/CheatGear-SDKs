#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Explosion_M67.BP_Explosion_M67_C.DamageCharacter
	 */
	struct ABP_Explosion_M67_C_DamageCharacter_Params
	{
	public:
		class AGBCharacter*                                        InGBCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Explosion_M67.BP_Explosion_M67_C.ReceiveBeginPlay
	 */
	struct ABP_Explosion_M67_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Explosion_M67.BP_Explosion_M67_C.CauseRadialDamage
	 */
	struct ABP_Explosion_M67_C_CauseRadialDamage_Params
	{	};

	/**
	 * Function BP_Explosion_M67.BP_Explosion_M67_C.SpawnFX
	 */
	struct ABP_Explosion_M67_C_SpawnFX_Params
	{	};

	/**
	 * Function BP_Explosion_M67.BP_Explosion_M67_C.DamageActor
	 */
	struct ABP_Explosion_M67_C_DamageActor_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Explosion_M67.BP_Explosion_M67_C.ExecuteUbergraph_BP_Explosion_M67
	 */
	struct ABP_Explosion_M67_C_ExecuteUbergraph_BP_Explosion_M67_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
