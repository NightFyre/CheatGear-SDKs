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
	 * Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnVideoSettingChanged
	 */
	struct UWB_VideoOptionSlot_C_OnVideoSettingChanged_Params
	{
	public:
		int32_t                                                    QualitySetting;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnInitialized
	 */
	struct UWB_VideoOptionSlot_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnQualityLevel
	 */
	struct UWB_VideoOptionSlot_C_OnQualityLevel_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.ExecuteUbergraph_WB_VideoOptionSlot
	 */
	struct UWB_VideoOptionSlot_C_ExecuteUbergraph_WB_VideoOptionSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
