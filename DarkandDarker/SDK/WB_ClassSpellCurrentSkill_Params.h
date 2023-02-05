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
	 * Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnInitialized
	 */
	struct UWB_ClassSpellCurrentSkill_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnFMsgWidgetClassLevelNotifyBlueprint
	 */
	struct UWB_ClassSpellCurrentSkill_C_OnFMsgWidgetClassLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassLevelNotify                          InMsg;                                                   // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 */
	struct UWB_ClassSpellCurrentSkill_C_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassSlotUnLockLevelNotify                InMsg;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.ExecuteUbergraph_WB_ClassSpellCurrentSkill
	 */
	struct UWB_ClassSpellCurrentSkill_C_ExecuteUbergraph_WB_ClassSpellCurrentSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TB04[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
