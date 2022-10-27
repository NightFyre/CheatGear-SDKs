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
	 * Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.OnActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_18_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.DLCSkill18_OnActionSkillActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_18_C_DLCSkill18_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_19
	 */
	struct UPassive_Beastmaster_DLCSkill_18_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_19_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IIG4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
