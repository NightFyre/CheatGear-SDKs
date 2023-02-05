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
	 * Function GA_Walk.GA_Walk_C.EventReceived_482BF8EA45A716B472BF488779217213
	 */
	struct UGA_Walk_C_EventReceived_482BF8EA45A716B472BF488779217213_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Walk.GA_Walk_C.K2_ActivateAbility
	 */
	struct UGA_Walk_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Walk.GA_Walk_C.ExecuteUbergraph_GA_Walk
	 */
	struct UGA_Walk_C_ExecuteUbergraph_GA_Walk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
