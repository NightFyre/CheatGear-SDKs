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
	 * 		Name   -> Function WBP_ItemUnderCursorHightlight.WBP_ItemUnderCursorHightlight_C.UpdateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemUnderCursorHightlight_C::UpdateItem(class AGBItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemUnderCursorHightlight.WBP_ItemUnderCursorHightlight_C.UpdateItem");
		
		UWBP_ItemUnderCursorHightlight_C_UpdateItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemUnderCursorHightlight.WBP_ItemUnderCursorHightlight_C.ExecuteUbergraph_WBP_ItemUnderCursorHightlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemUnderCursorHightlight_C::ExecuteUbergraph_WBP_ItemUnderCursorHightlight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemUnderCursorHightlight.WBP_ItemUnderCursorHightlight_C.ExecuteUbergraph_WBP_ItemUnderCursorHightlight");
		
		UWBP_ItemUnderCursorHightlight_C_ExecuteUbergraph_WBP_ItemUnderCursorHightlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemUnderCursorHightlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemUnderCursorHightlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemUnderCursorHightlight.WBP_ItemUnderCursorHightlight_C");
		return ptr;
	}

}


