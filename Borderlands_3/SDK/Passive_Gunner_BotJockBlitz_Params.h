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
	 * Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.CalculateAbilityState
	 */
	struct UPassive_Gunner_BotJockBlitz_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnDeactivated
	 */
	struct UPassive_Gunner_BotJockBlitz_C_OnDeactivated_Params
	{	};

	/**
	 * Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnPaused
	 */
	struct UPassive_Gunner_BotJockBlitz_C_OnPaused_Params
	{	};

	/**
	 * Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnResumed
	 */
	struct UPassive_Gunner_BotJockBlitz_C_OnResumed_Params
	{	};

	/**
	 * Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnActivated
	 */
	struct UPassive_Gunner_BotJockBlitz_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.ExecuteUbergraph_Passive_Gunner_BotJockBlitz
	 */
	struct UPassive_Gunner_BotJockBlitz_C_ExecuteUbergraph_Passive_Gunner_BotJockBlitz_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BVKM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
