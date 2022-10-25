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
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.InitFromInventoryNode
	 * 		Flags  -> ()
	 */
	void UUI_Tooltip_C::InitFromInventoryNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromInventoryNode");
		
		UUI_Tooltip_C_InitFromInventoryNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.GetItemDurability
	 * 		Flags  -> ()
	 */
	float UUI_Tooltip_C::GetItemDurability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.GetItemDurability");
		
		UUI_Tooltip_C_GetItemDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Caption                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Tooltip_C::InitFromCaptionAndDescription(const class FText& Caption, const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription");
		
		UUI_Tooltip_C_InitFromCaptionAndDescription_Params params {};
		params.Caption = Caption;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Tooltip.UI_Tooltip_C.InitFromItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Tooltip_C::InitFromItem(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromItem");
		
		UUI_Tooltip_C_InitFromItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Tooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Tooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Tooltip.UI_Tooltip_C");
		return ptr;
	}

}


