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
	 * 		Name   -> Function UI_QuickAccessBar.UI_QuickAccessBar_C.GetQuickAccessBarVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_QuickAccessBar_C::GetQuickAccessBarVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuickAccessBar.UI_QuickAccessBar_C.GetQuickAccessBarVisibility");
		
		UUI_QuickAccessBar_C_GetQuickAccessBarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuickAccessBar.UI_QuickAccessBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_QuickAccessBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuickAccessBar.UI_QuickAccessBar_C.Construct");
		
		UUI_QuickAccessBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuickAccessBar.UI_QuickAccessBar_C.ExecuteUbergraph_UI_QuickAccessBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_QuickAccessBar_C::ExecuteUbergraph_UI_QuickAccessBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuickAccessBar.UI_QuickAccessBar_C.ExecuteUbergraph_UI_QuickAccessBar");
		
		UUI_QuickAccessBar_C_ExecuteUbergraph_UI_QuickAccessBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_QuickAccessBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_QuickAccessBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QuickAccessBar.UI_QuickAccessBar_C");
		return ptr;
	}

}


