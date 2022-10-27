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
	 * 		Name   -> Function UI_CircularMenu.UI_CircularMenu_C.CenterMouseToWidget
	 * 		Flags  -> ()
	 */
	void UUI_CircularMenu_C::CenterMouseToWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CircularMenu.UI_CircularMenu_C.CenterMouseToWidget");
		
		UUI_CircularMenu_C_CenterMouseToWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CircularMenu.UI_CircularMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CircularMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CircularMenu.UI_CircularMenu_C.Construct");
		
		UUI_CircularMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CircularMenu.UI_CircularMenu_C.OnWidgetVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CircularMenu_C::OnWidgetVisibilityChanged(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CircularMenu.UI_CircularMenu_C.OnWidgetVisibilityChanged");
		
		UUI_CircularMenu_C_OnWidgetVisibilityChanged_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CircularMenu.UI_CircularMenu_C.ExecuteUbergraph_UI_CircularMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CircularMenu_C::ExecuteUbergraph_UI_CircularMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CircularMenu.UI_CircularMenu_C.ExecuteUbergraph_UI_CircularMenu");
		
		UUI_CircularMenu_C_ExecuteUbergraph_UI_CircularMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CircularMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CircularMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CircularMenu.UI_CircularMenu_C");
		return ptr;
	}

}


