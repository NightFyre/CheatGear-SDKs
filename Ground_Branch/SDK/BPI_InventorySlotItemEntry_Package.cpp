/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C.EquipInventorySlotItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMainhand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_InventorySlotItemEntry_C::EquipInventorySlotItem(bool bMainhand, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C.EquipInventorySlotItem");
		
		UBPI_InventorySlotItemEntry_C_EquipInventorySlotItem_Params params {};
		params.bMainhand = bMainhand;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C.SetInventorySlotItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InventorySlotItemEntry_C::SetInventorySlotItem(class AGBItem* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C.SetInventorySlotItem");
		
		UBPI_InventorySlotItemEntry_C_SetInventorySlotItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_InventorySlotItemEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_InventorySlotItemEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InventorySlotItemEntry.BPI_InventorySlotItemEntry_C");
		return ptr;
	}

}


