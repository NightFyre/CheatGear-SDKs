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
	 * Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.OnActivated
	 */
	struct UPassive_Gunner_DLCSkill_2_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillCoolingDown
	 */
	struct UPassive_Gunner_DLCSkill_2_C_DLCSkill2_OnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillReady
	 */
	struct UPassive_Gunner_DLCSkill_2_C_DLCSkill2_OnActionSkillReady_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_3
	 */
	struct UPassive_Gunner_DLCSkill_2_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_58UY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
