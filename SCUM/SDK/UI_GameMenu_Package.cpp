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
	 * 		Name   -> Function UI_GameMenu.UI_GameMenu_C.GetText_1
	 * 		Flags  -> ()
	 */
	class FText UUI_GameMenu_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.GetText_1");
		
		UUI_GameMenu_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameMenu.UI_GameMenu_C.Get Visibility 0
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameMenu_C::Get_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Get Visibility 0");
		
		UUI_GameMenu_C_Get_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UUI_GameMenu_C::Get_CommitSuicide_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_bIsEnabled_1");
		
		UUI_GameMenu_C_Get_CommitSuicide_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameMenu_C::Get_CommitSuicide_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility");
		
		UUI_GameMenu_C_Get_CommitSuicide_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout
	 * 		Flags  -> ()
	 */
	void UUI_GameMenu_C::SaveHUDLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout");
		
		UUI_GameMenu_C_SaveHUDLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameMenu.UI_GameMenu_C");
		return ptr;
	}

}


