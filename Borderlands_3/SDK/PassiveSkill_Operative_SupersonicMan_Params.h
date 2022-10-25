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
	 * Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OnActivated
	 */
	struct UPassiveSkill_Operative_SupersonicMan_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillActivated
	 */
	struct UPassiveSkill_Operative_SupersonicMan_C_OOO_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillCoolingDown
	 */
	struct UPassiveSkill_Operative_SupersonicMan_C_OOO_OnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan
	 */
	struct UPassiveSkill_Operative_SupersonicMan_C_ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HMAW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
