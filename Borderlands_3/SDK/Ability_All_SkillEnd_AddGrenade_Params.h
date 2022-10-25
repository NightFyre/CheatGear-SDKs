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
	 * Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.OnActivated
	 */
	struct UAbility_All_SkillEnd_AddGrenade_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.SkillCoolingDown
	 */
	struct UAbility_All_SkillEnd_AddGrenade_C_SkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.ExecuteUbergraph_Ability_All_SkillEnd_AddGrenade
	 */
	struct UAbility_All_SkillEnd_AddGrenade_C_ExecuteUbergraph_Ability_All_SkillEnd_AddGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QYS9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
