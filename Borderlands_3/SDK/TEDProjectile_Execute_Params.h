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
	 * Function TEDProjectile_Execute.TEDProjectile_Execute_C.UserConstructionScript
	 */
	struct ATEDProjectile_Execute_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TEDProjectile_Execute.TEDProjectile_Execute_C.ReceiveBeginPlay
	 */
	struct ATEDProjectile_Execute_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnBounce
	 */
	struct ATEDProjectile_Execute_C_OnBounce_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnHitEnemy
	 */
	struct ATEDProjectile_Execute_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TEDProjectile_Execute.TEDProjectile_Execute_C.ExecuteUbergraph_TEDProjectile_Execute
	 */
	struct ATEDProjectile_Execute_C_ExecuteUbergraph_TEDProjectile_Execute_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
