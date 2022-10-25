/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryPanelThirdIteration_C::ReinitializeForPrisoner(class APrisoner* Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner");
		
		UUI_InventoryPanelThirdIteration_C_ReinitializeForPrisoner_Params params {};
		params.Prisoner = Prisoner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryPanelThirdIteration_C::ScrollToEquippedItem(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem");
		
		UUI_InventoryPanelThirdIteration_C_ScrollToEquippedItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryPanelThirdIteration_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave");
		
		UUI_InventoryPanelThirdIteration_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.SetDisplayedCharacterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryPanelThirdIteration_C::SetDisplayedCharacterName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.SetDisplayedCharacterName");
		
		UUI_InventoryPanelThirdIteration_C_SetDisplayedCharacterName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryPanelThirdIteration_C::ExecuteUbergraph_UI_InventoryPanelThirdIteration(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration");
		
		UUI_InventoryPanelThirdIteration_C_ExecuteUbergraph_UI_InventoryPanelThirdIteration_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InventoryPanelThirdIteration_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InventoryPanelThirdIteration_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C");
		return ptr;
	}

}


