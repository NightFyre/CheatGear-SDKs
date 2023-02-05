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
	 * Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.OnVisibilityChangedEvent
	 */
	struct UWB_ClassSpellEquippedGroup_C_OnVisibilityChangedEvent_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.Construct
	 */
	struct UWB_ClassSpellEquippedGroup_C_Construct_Params
	{	};

	/**
	 * Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.ExecuteUbergraph_WB_ClassSpellEquippedGroup
	 */
	struct UWB_ClassSpellEquippedGroup_C_ExecuteUbergraph_WB_ClassSpellEquippedGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
