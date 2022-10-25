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
	 * Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.MozeKilledEvent
	 */
	struct UPassiveSkill_Gunnerner_Grizzled_C_MozeKilledEvent_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnActivated
	 */
	struct UPassiveSkill_Gunnerner_Grizzled_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerStarted
	 */
	struct UPassiveSkill_Gunnerner_Grizzled_C_OnAbilityTimerStarted_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerEnded
	 */
	struct UPassiveSkill_Gunnerner_Grizzled_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled
	 */
	struct UPassiveSkill_Gunnerner_Grizzled_C_ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
