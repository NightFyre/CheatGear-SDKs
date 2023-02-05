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
	 * Function WB_PerkEquipable.WB_PerkEquipable_C.Construct
	 */
	struct UWB_PerkEquipable_C_Construct_Params
	{	};

	/**
	 * Function WB_PerkEquipable.WB_PerkEquipable_C.VisibilityChanged
	 */
	struct UWB_PerkEquipable_C_VisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PerkEquipable.WB_PerkEquipable_C.ExecuteUbergraph_WB_PerkEquipable
	 */
	struct UWB_PerkEquipable_C_ExecuteUbergraph_WB_PerkEquipable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5ISQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
