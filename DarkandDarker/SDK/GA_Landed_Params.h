#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function GA_Landed.GA_Landed_C.OnFinish_1D94117B47876F23FCCE87B3AE08DF1B
	 */
	struct UGA_Landed_C_OnFinish_1D94117B47876F23FCCE87B3AE08DF1B_Params
	{	};

	/**
	 * Function GA_Landed.GA_Landed_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_Landed_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Landed.GA_Landed_C.ExecuteUbergraph_GA_Landed
	 */
	struct UGA_Landed_C_ExecuteUbergraph_GA_Landed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
