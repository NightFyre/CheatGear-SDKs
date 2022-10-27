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
	 * Function BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C.EquipInventorySlotItem
	 */
	struct UBPI_InventorySlotItemEntry_C_EquipInventorySlotItem_Params
	{
	public:
		bool                                                       bMainhand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediate;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C.SetInventorySlotItem
	 */
	struct UBPI_InventorySlotItemEntry_C_SetInventorySlotItem_Params
	{
	public:
		class AGBItem*                                             InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
