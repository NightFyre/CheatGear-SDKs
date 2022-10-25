#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_Tooltip.UI_Tooltip_C.InitFromInventoryNode
	 */
	struct UUI_Tooltip_C_InitFromInventoryNode_Params
	{
	public:
		unsigned char                                              UnknownData_JZFJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Tooltip.UI_Tooltip_C.GetItemDurability
	 */
	struct UUI_Tooltip_C_GetItemDurability_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription
	 */
	struct UUI_Tooltip_C_InitFromCaptionAndDescription_Params
	{
	public:
		class FText                                                Caption;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Tooltip.UI_Tooltip_C.InitFromItem
	 */
	struct UUI_Tooltip_C_InitFromItem_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
