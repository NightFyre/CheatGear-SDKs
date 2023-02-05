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
	 * Function WB_ItemTooltipRequirement.WB_ItemTooltipRequirement_C.Construct
	 */
	struct UWB_ItemTooltipRequirement_C_Construct_Params
	{	};

	/**
	 * Function WB_ItemTooltipRequirement.WB_ItemTooltipRequirement_C.OnChangedRequirementStatus
	 */
	struct UWB_ItemTooltipRequirement_C_OnChangedRequirementStatus_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipRequirement.WB_ItemTooltipRequirement_C.ExecuteUbergraph_WB_ItemTooltipRequirement
	 */
	struct UWB_ItemTooltipRequirement_C_ExecuteUbergraph_WB_ItemTooltipRequirement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
