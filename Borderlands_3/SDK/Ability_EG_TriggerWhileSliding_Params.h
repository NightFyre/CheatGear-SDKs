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
	 * Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.CalculateAbilityState
	 */
	struct UAbility_EG_TriggerWhileSliding_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.OnRegistered
	 */
	struct UAbility_EG_TriggerWhileSliding_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.ExecuteUbergraph_Ability_EG_TriggerWhileSliding
	 */
	struct UAbility_EG_TriggerWhileSliding_C_ExecuteUbergraph_Ability_EG_TriggerWhileSliding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PCYA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
