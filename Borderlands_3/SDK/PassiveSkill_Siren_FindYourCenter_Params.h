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
	 * Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActivated
	 */
	struct UPassiveSkill_Siren_FindYourCenter_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActionSkillActivated
	 */
	struct UPassiveSkill_Siren_FindYourCenter_C_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter
	 */
	struct UPassiveSkill_Siren_FindYourCenter_C_ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RF3T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
