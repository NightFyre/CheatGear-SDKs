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
	 * Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.OnStartActionAbility
	 */
	struct UActionSkill_RakkAttack_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.ExecuteUbergraph_ActionSkill_RakkAttack
	 */
	struct UActionSkill_RakkAttack_C_ExecuteUbergraph_ActionSkill_RakkAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CCOT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
