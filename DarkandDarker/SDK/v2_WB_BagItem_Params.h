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
	 * Function v2_WB_BagItem.v2_WB_BagItem_C.Get Item Size Box Visibility On Dragging
	 */
	struct Uv2_WB_BagItem_C_GetItemSizeBoxVisibilityOnDragging_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_BagItem.v2_WB_BagItem_C.Get Select Marker Visibility
	 */
	struct Uv2_WB_BagItem_C_GetSelectMarkerVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_BagItem.v2_WB_BagItem_C.Get Count Text Color
	 */
	struct Uv2_WB_BagItem_C_GetCountTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_BagItem.v2_WB_BagItem_C.Get Item Image Opacity
	 */
	struct Uv2_WB_BagItem_C_GetItemImageOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_BagItem.v2_WB_BagItem_C.Get Count Text
	 */
	struct Uv2_WB_BagItem_C_GetCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_BagItem.v2_WB_BagItem_C.Get Count Visibility
	 */
	struct Uv2_WB_BagItem_C_GetCountVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
