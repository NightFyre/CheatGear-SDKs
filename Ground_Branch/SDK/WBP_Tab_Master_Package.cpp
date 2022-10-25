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
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.IsValidClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ChildWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Tab_Master_C::IsValidClass(class UWidget* ChildWidget, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.IsValidClass");
		
		UWBP_Tab_Master_C_IsValidClass_Params params {};
		params.ChildWidget = ChildWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.GetTabTextFontShadowColour
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWBP_Tab_Master_C::GetTabTextFontShadowColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.GetTabTextFontShadowColour");
		
		UWBP_Tab_Master_C_GetTabTextFontShadowColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.GetTabTextFontColour
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWBP_Tab_Master_C::GetTabTextFontColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.GetTabTextFontColour");
		
		UWBP_Tab_Master_C_GetTabTextFontColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Tab_Master_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.SetSelected");
		
		UWBP_Tab_Master_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.InternalOnSelected
	 * 		Flags  -> ()
	 */
	void UWBP_Tab_Master_C::InternalOnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.InternalOnSelected");
		
		UWBP_Tab_Master_C_InternalOnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.InternalStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Tab_Master_C::InternalStateChanged(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.InternalStateChanged");
		
		UWBP_Tab_Master_C_InternalStateChanged_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.InternalSetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Tab_Master_C::InternalSetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.InternalSetSelected");
		
		UWBP_Tab_Master_C_InternalSetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.SetInitiallySelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SelectionDelay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Tab_Master_C::SetInitiallySelected(float SelectionDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.SetInitiallySelected");
		
		UWBP_Tab_Master_C_SetInitiallySelected_Params params {};
		params.SelectionDelay = SelectionDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Tab_Master.WBP_Tab_Master_C.ExecuteUbergraph_WBP_Tab_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Tab_Master_C::ExecuteUbergraph_WBP_Tab_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Tab_Master.WBP_Tab_Master_C.ExecuteUbergraph_WBP_Tab_Master");
		
		UWBP_Tab_Master_C_ExecuteUbergraph_WBP_Tab_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Tab_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Tab_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Tab_Master.WBP_Tab_Master_C");
		return ptr;
	}

}


