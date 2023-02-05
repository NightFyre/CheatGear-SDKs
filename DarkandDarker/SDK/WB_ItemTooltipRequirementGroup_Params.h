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
	 * Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.OnUpdateItemRequirementsFulfilledStatus
	 */
	struct UWB_ItemTooltipRequirementGroup_C_OnUpdateItemRequirementsFulfilledStatus_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FF6I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EItemRequirementType>                               UnmetRequirementArray;                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.SetItemRequirementData
	 */
	struct UWB_ItemTooltipRequirementGroup_C_SetItemRequirementData_Params
	{
	public:
		struct FDesignDataItemRequirement                          DesignDataItemRequirement;                               // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       HasAnyRequirement;                                       // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4K6I[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.AddRequirementWidget
	 */
	struct UWB_ItemTooltipRequirementGroup_C_AddRequirementWidget_Params
	{
	public:
		EItemRequirementType                                       RequirementType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KPD8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItemTooltipRequirementWidget*                       Widget;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
