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
	 * Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.AnointTriggerEffect
	 */
	struct UAbility_All_SkillEnd_HealingPool_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.SpawnSplat
	 */
	struct UAbility_All_SkillEnd_HealingPool_C_SpawnSplat_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.ExecuteUbergraph_Ability_All_SkillEnd_HealingPool
	 */
	struct UAbility_All_SkillEnd_HealingPool_C_ExecuteUbergraph_Ability_All_SkillEnd_HealingPool_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5FHJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
