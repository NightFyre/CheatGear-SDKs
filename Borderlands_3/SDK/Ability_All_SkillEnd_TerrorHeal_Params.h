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
	 * Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.AnointTriggerEffect
	 */
	struct UAbility_All_SkillEnd_TerrorHeal_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.OnActivated
	 */
	struct UAbility_All_SkillEnd_TerrorHeal_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.SkillCoolingDown
	 */
	struct UAbility_All_SkillEnd_TerrorHeal_C_SkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal
	 */
	struct UAbility_All_SkillEnd_TerrorHeal_C_ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
