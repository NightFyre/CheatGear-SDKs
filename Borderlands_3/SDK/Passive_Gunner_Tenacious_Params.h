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
	 * Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnActivated
	 */
	struct UPassive_Gunner_Tenacious_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ShieldDepleted_TencaiousDefense
	 */
	struct UPassive_Gunner_Tenacious_C_ShieldDepleted_TencaiousDefense_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnDeactivated
	 */
	struct UPassive_Gunner_Tenacious_C_OnDeactivated_Params
	{	};

	/**
	 * Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnFilled_TencaciousDefense
	 */
	struct UPassive_Gunner_Tenacious_C_OnFilled_TencaciousDefense_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.SetTriggerStateByShieldAmount
	 */
	struct UPassive_Gunner_Tenacious_C_SetTriggerStateByShieldAmount_Params
	{	};

	/**
	 * Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ExecuteUbergraph_Passive_Gunner_Tenacious
	 */
	struct UPassive_Gunner_Tenacious_C_ExecuteUbergraph_Passive_Gunner_Tenacious_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AYDS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
