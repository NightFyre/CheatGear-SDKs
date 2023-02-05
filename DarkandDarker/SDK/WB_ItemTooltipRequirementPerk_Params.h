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
	 * Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.InitializeList
	 */
	struct UWB_ItemTooltipRequirementPerk_C_InitializeList_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H5AY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.Construct
	 */
	struct UWB_ItemTooltipRequirementPerk_C_Construct_Params
	{	};

	/**
	 * Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.OnChangedRequirementStatus
	 */
	struct UWB_ItemTooltipRequirementPerk_C_OnChangedRequirementStatus_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.ExecuteUbergraph_WB_ItemTooltipRequirementPerk
	 */
	struct UWB_ItemTooltipRequirementPerk_C_ExecuteUbergraph_WB_ItemTooltipRequirementPerk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
