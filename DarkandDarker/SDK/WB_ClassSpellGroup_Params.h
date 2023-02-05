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
	 * Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.OnVisibilityChangedEvent
	 */
	struct UWB_ClassSpellGroup_C_OnVisibilityChangedEvent_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.Construct
	 */
	struct UWB_ClassSpellGroup_C_Construct_Params
	{	};

	/**
	 * Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.ExecuteUbergraph_WB_ClassSpellGroup
	 */
	struct UWB_ClassSpellGroup_C_ExecuteUbergraph_WB_ClassSpellGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
