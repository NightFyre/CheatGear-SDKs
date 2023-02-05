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
	 * Function WB_SkillEquipable.WB_SkillEquipable_C.Construct
	 */
	struct UWB_SkillEquipable_C_Construct_Params
	{	};

	/**
	 * Function WB_SkillEquipable.WB_SkillEquipable_C.VisibilityChanged
	 */
	struct UWB_SkillEquipable_C_VisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_SkillEquipable.WB_SkillEquipable_C.ExecuteUbergraph_WB_SkillEquipable
	 */
	struct UWB_SkillEquipable_C_ExecuteUbergraph_WB_SkillEquipable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D793[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
