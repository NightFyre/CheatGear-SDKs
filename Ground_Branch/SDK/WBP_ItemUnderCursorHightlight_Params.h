#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_ItemUnderCursorHightlight.WBP_ItemUnderCursorHightlight_C.UpdateItem
	 */
	struct UWBP_ItemUnderCursorHightlight_C_UpdateItem_Params
	{
	public:
		class AGBItem*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemUnderCursorHightlight.WBP_ItemUnderCursorHightlight_C.ExecuteUbergraph_WBP_ItemUnderCursorHightlight
	 */
	struct UWBP_ItemUnderCursorHightlight_C_ExecuteUbergraph_WBP_ItemUnderCursorHightlight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
