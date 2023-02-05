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
	 * Function WB_GameTooltipS.WB_GameTooltipS_C.OnSetData
	 */
	struct UWB_GameTooltipS_C_OnSetData_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         TextColor;                                               // 0x0018(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_GameTooltipS.WB_GameTooltipS_C.ExecuteUbergraph_WB_GameTooltipS
	 */
	struct UWB_GameTooltipS_C_ExecuteUbergraph_WB_GameTooltipS_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CRY8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
