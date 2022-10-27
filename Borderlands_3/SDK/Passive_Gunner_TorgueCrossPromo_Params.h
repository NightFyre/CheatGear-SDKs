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
	 * Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnActivated
	 */
	struct UPassive_Gunner_TorgueCrossPromo_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnResumed
	 */
	struct UPassive_Gunner_TorgueCrossPromo_C_OnResumed_Params
	{	};

	/**
	 * Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnAbilityTimerEnded
	 */
	struct UPassive_Gunner_TorgueCrossPromo_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnGradeChanged
	 */
	struct UPassive_Gunner_TorgueCrossPromo_C_OnGradeChanged_Params
	{	};

	/**
	 * Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.DetermineNewChance
	 */
	struct UPassive_Gunner_TorgueCrossPromo_C_DetermineNewChance_Params
	{	};

	/**
	 * Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo
	 */
	struct UPassive_Gunner_TorgueCrossPromo_C_ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
