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
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState
	 * 		Flags  -> ()
	 */
	void UUI_CraftingAvailableItem_C::UpdateSelectionAndOptionalState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState");
		
		UUI_CraftingAvailableItem_C_UpdateSelectionAndOptionalState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UUI_CraftingAvailableItem_C::GetbIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1");
		
		UUI_CraftingAvailableItem_C_GetbIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingAvailableItem_C::Init(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init");
		
		UUI_CraftingAvailableItem_C_Init_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingAvailableItem_C::SetIsSelected(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected");
		
		UUI_CraftingAvailableItem_C_SetIsSelected_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isOptional                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingAvailableItem_C::SetIsOptional(bool isOptional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional");
		
		UUI_CraftingAvailableItem_C_SetIsOptional_Params params {};
		params.isOptional = isOptional;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOptionalState                                     State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingAvailableItem_C::SetOptionalState(EOptionalState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState");
		
		UUI_CraftingAvailableItem_C_SetOptionalState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CraftingAvailableItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct");
		
		UUI_CraftingAvailableItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingAvailableItem_C::ExecuteUbergraph_UI_CraftingAvailableItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem");
		
		UUI_CraftingAvailableItem_C_ExecuteUbergraph_UI_CraftingAvailableItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingAvailableItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingAvailableItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingAvailableItem.UI_CraftingAvailableItem_C");
		return ptr;
	}

}


