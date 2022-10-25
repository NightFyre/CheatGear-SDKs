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
	 * Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.EquipInventorySlotItem
	 */
	struct UWBP_InventoryBar_PouchEntry_C_EquipInventorySlotItem_Params
	{
	public:
		bool                                                       bMainhand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediate;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.SetInventorySlotItem
	 */
	struct UWBP_InventoryBar_PouchEntry_C_SetInventorySlotItem_Params
	{
	public:
		class AGBItem*                                             InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.ExecuteUbergraph_WBP_InventoryBar_PouchEntry
	 */
	struct UWBP_InventoryBar_PouchEntry_C_ExecuteUbergraph_WBP_InventoryBar_PouchEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W6RE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
