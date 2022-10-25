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
	 * Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.OnBegin
	 */
	struct UA_Pet_DefenseSkill_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.Notify_SkillUse
	 */
	struct UA_Pet_DefenseSkill_C_Notify_SkillUse_Params
	{	};

	/**
	 * Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.ExecuteUbergraph_A_Pet_DefenseSkill
	 */
	struct UA_Pet_DefenseSkill_C_ExecuteUbergraph_A_Pet_DefenseSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
