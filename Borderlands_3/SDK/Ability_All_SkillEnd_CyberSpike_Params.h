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
	 * Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.AnointTriggerEffect
	 */
	struct UAbility_All_SkillEnd_CyberSpike_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.SpawnSkillProjectile
	 */
	struct UAbility_All_SkillEnd_CyberSpike_C_SpawnSkillProjectile_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike
	 */
	struct UAbility_All_SkillEnd_CyberSpike_C_ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9BGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
