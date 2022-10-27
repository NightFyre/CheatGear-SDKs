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
	 * Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.OnActivated
	 */
	struct UPassive_Gunner_Deadlines_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_OnCausedDeath
	 */
	struct UPassive_Gunner_Deadlines_C_Deadlines_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_ActionSkillActivated
	 */
	struct UPassive_Gunner_Deadlines_C_Deadlines_ActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.ExecuteUbergraph_Passive_Gunner_Deadlines
	 */
	struct UPassive_Gunner_Deadlines_C_ExecuteUbergraph_Passive_Gunner_Deadlines_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OITR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
