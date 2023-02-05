#pragma once

/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * Function GA_ActivateItem.GA_ActivateItem_C.AbilityActivated
	 */
	struct UGA_ActivateItem_C_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_ActivateItem.GA_ActivateItem_C.ExecuteUbergraph_GA_ActivateItem
	 */
	struct UGA_ActivateItem_C_ExecuteUbergraph_GA_ActivateItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4OU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
