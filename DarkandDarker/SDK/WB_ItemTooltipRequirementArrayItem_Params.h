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
	 * Function WB_ItemTooltipRequirementArrayItem.WB_ItemTooltipRequirementArrayItem_C.BP_OnEntryReleased
	 */
	struct UWB_ItemTooltipRequirementArrayItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WB_ItemTooltipRequirementArrayItem.WB_ItemTooltipRequirementArrayItem_C.BP_OnItemExpansionChanged
	 */
	struct UWB_ItemTooltipRequirementArrayItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipRequirementArrayItem.WB_ItemTooltipRequirementArrayItem_C.BP_OnItemSelectionChanged
	 */
	struct UWB_ItemTooltipRequirementArrayItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipRequirementArrayItem.WB_ItemTooltipRequirementArrayItem_C.PreConstruct
	 */
	struct UWB_ItemTooltipRequirementArrayItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipRequirementArrayItem.WB_ItemTooltipRequirementArrayItem_C.Construct
	 */
	struct UWB_ItemTooltipRequirementArrayItem_C_Construct_Params
	{	};

	/**
	 * Function WB_ItemTooltipRequirementArrayItem.WB_ItemTooltipRequirementArrayItem_C.OnListItemObjectSet
	 */
	struct UWB_ItemTooltipRequirementArrayItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipRequirementArrayItem.WB_ItemTooltipRequirementArrayItem_C.ExecuteUbergraph_WB_ItemTooltipRequirementArrayItem
	 */
	struct UWB_ItemTooltipRequirementArrayItem_C_ExecuteUbergraph_WB_ItemTooltipRequirementArrayItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
