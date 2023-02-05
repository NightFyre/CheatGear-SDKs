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
	 * Function WB_ContainerSlot.WB_ContainerSlot_C.OnSetNewItem
	 */
	struct UWB_ContainerSlot_C_OnSetNewItem_Params
	{
	public:
		bool                                                       bFullfilledAll;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ContainerSlot.WB_ContainerSlot_C.OnRemoveItem
	 */
	struct UWB_ContainerSlot_C_OnRemoveItem_Params
	{	};

	/**
	 * Function WB_ContainerSlot.WB_ContainerSlot_C.OnLeaveItemWidget
	 */
	struct UWB_ContainerSlot_C_OnLeaveItemWidget_Params
	{	};

	/**
	 * Function WB_ContainerSlot.WB_ContainerSlot_C.OnOverlapItemWidget
	 */
	struct UWB_ContainerSlot_C_OnOverlapItemWidget_Params
	{
	public:
		bool                                                       bCanSetItem;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ContainerSlot.WB_ContainerSlot_C.ExecuteUbergraph_WB_ContainerSlot
	 */
	struct UWB_ContainerSlot_C_ExecuteUbergraph_WB_ContainerSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
