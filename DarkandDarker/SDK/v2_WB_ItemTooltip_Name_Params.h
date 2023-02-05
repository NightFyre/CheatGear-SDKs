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
	 * Function v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C.GetSoulHeartOwnerNameTextBlockColorAndOpacity
	 */
	struct Uv2_WB_ItemTooltip_Name_C_GetSoulHeartOwnerNameTextBlockColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C.GetSoulHeartTextBlockVisibility
	 */
	struct Uv2_WB_ItemTooltip_Name_C_GetSoulHeartTextBlockVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
