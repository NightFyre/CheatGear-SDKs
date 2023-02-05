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
	 * Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnInitialized
	 */
	struct UWB_ClassCurrentSkill_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassLevelNotifyBlueprint
	 */
	struct UWB_ClassCurrentSkill_C_OnFMsgWidgetClassLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassLevelNotify                          InMsg;                                                   // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint
	 */
	struct UWB_ClassCurrentSkill_C_OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify   InMsg;                                                   // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 */
	struct UWB_ClassCurrentSkill_C_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassSlotUnLockLevelNotify                InMsg;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.ExecuteUbergraph_WB_ClassCurrentSkill
	 */
	struct UWB_ClassCurrentSkill_C_ExecuteUbergraph_WB_ClassCurrentSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
