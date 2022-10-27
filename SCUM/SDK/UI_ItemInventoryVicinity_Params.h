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
	 * Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick
	 */
	struct UUI_ItemInventoryVicinity_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprint
	 */
	struct UUI_ItemInventoryVicinity_C_InitBlueprint_Params
	{	};

	/**
	 * Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprintFromItem
	 */
	struct UUI_ItemInventoryVicinity_C_InitBlueprintFromItem_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink
	 */
	struct UUI_ItemInventoryVicinity_C_Blink_Params
	{	};

	/**
	 * Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity
	 */
	struct UUI_ItemInventoryVicinity_C_ExecuteUbergraph_UI_ItemInventoryVicinity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
