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
	 * Function UI_ItemInventory2.UI_ItemInventory2_C.Blink
	 */
	struct UUI_ItemInventory2_C_Blink_Params
	{	};

	/**
	 * Function UI_ItemInventory2.UI_ItemInventory2_C.InitBlueprint
	 */
	struct UUI_ItemInventory2_C_InitBlueprint_Params
	{	};

	/**
	 * Function UI_ItemInventory2.UI_ItemInventory2_C.Tick
	 */
	struct UUI_ItemInventory2_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2
	 */
	struct UUI_ItemInventory2_C_ExecuteUbergraph_UI_ItemInventory2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V8SI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
