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
	 * Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.InitializeList
	 */
	struct UWB_ItemTooltipRequirementClass_C_InitializeList_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHFP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.Construct
	 */
	struct UWB_ItemTooltipRequirementClass_C_Construct_Params
	{	};

	/**
	 * Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.OnChangedRequirementStatus
	 */
	struct UWB_ItemTooltipRequirementClass_C_OnChangedRequirementStatus_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.ExecuteUbergraph_WB_ItemTooltipRequirementClass
	 */
	struct UWB_ItemTooltipRequirementClass_C_ExecuteUbergraph_WB_ItemTooltipRequirementClass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
