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
	 * Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnInitialized
	 */
	struct UWB_ClassCurrentPerk_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassLevelNotifyBlueprint
	 */
	struct UWB_ClassCurrentPerk_C_OnFMsgWidgetClassLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassLevelNotify                          InMsg;                                                   // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint
	 */
	struct UWB_ClassCurrentPerk_C_OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify    InMsg;                                                   // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 */
	struct UWB_ClassCurrentPerk_C_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassSlotUnLockLevelNotify                InMsg;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.ExecuteUbergraph_WB_ClassCurrentPerk
	 */
	struct UWB_ClassCurrentPerk_C_ExecuteUbergraph_WB_ClassCurrentPerk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
