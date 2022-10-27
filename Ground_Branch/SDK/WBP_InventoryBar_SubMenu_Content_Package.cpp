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
	 * 		Name   -> Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.AddItemEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_SubMenu_Content_C::AddItemEntry(class UUserWidget* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.AddItemEntry");
		
		UWBP_InventoryBar_SubMenu_Content_C_AddItemEntry_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.Cycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRestricted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_SubMenu_Content_C::Cycle(bool bNext, bool bRestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.Cycle");
		
		UWBP_InventoryBar_SubMenu_Content_C_Cycle_Params params {};
		params.bNext = bNext;
		params.bRestricted = bRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.SelectIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_SubMenu_Content_C::SelectIndex(int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.SelectIndex");
		
		UWBP_InventoryBar_SubMenu_Content_C_SelectIndex_Params params {};
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.EquipSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMainhand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_SubMenu_Content_C::EquipSelectedItem(bool bMainhand, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.EquipSelectedItem");
		
		UWBP_InventoryBar_SubMenu_Content_C_EquipSelectedItem_Params params {};
		params.bMainhand = bMainhand;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.ExecuteUbergraph_WBP_InventoryBar_SubMenu_Content
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_SubMenu_Content_C::ExecuteUbergraph_WBP_InventoryBar_SubMenu_Content(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.ExecuteUbergraph_WBP_InventoryBar_SubMenu_Content");
		
		UWBP_InventoryBar_SubMenu_Content_C_ExecuteUbergraph_WBP_InventoryBar_SubMenu_Content_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.OnCycleCat__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_SubMenu_Content_C::OnCycleCat__DelegateSignature(bool bNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.OnCycleCat__DelegateSignature");
		
		UWBP_InventoryBar_SubMenu_Content_C_OnCycleCat__DelegateSignature_Params params {};
		params.bNext = bNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryBar_SubMenu_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryBar_SubMenu_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C");
		return ptr;
	}

}


