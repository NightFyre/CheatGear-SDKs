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
	 * Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething
	 */
	struct UUI_InspectedItem_C_SetIsToolForSomething_Params
	{
	public:
		bool                                                       IsTool;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem
	 */
	struct UUI_InspectedItem_C_ExecuteUbergraph_UI_InspectedItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
