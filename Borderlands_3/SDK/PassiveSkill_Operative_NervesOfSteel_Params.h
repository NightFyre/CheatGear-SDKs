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
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.CalculateAbilityState
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnActivated
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolFilled
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolFilled_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolNotFilled
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolNotFilled_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnAbilityTimerEnded
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnResumed
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_OnResumed_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnPaused
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_OnPaused_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel
	 */
	struct UPassiveSkill_Operative_NervesOfSteel_C_ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_93UO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
