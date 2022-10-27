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
	 * 		Name   -> Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.EquipInventorySlotItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMainhand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_PouchEntry_C::EquipInventorySlotItem(bool bMainhand, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.EquipInventorySlotItem");
		
		UWBP_InventoryBar_PouchEntry_C_EquipInventorySlotItem_Params params {};
		params.bMainhand = bMainhand;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.SetInventorySlotItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_PouchEntry_C::SetInventorySlotItem(class AGBItem* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.SetInventorySlotItem");
		
		UWBP_InventoryBar_PouchEntry_C_SetInventorySlotItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.ExecuteUbergraph_WBP_InventoryBar_PouchEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_PouchEntry_C::ExecuteUbergraph_WBP_InventoryBar_PouchEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C.ExecuteUbergraph_WBP_InventoryBar_PouchEntry");
		
		UWBP_InventoryBar_PouchEntry_C_ExecuteUbergraph_WBP_InventoryBar_PouchEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryBar_PouchEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryBar_PouchEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryBar_PouchEntry.WBP_InventoryBar_PouchEntry_C");
		return ptr;
	}

}


