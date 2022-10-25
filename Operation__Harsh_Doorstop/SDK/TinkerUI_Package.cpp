/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00808010
	 * 		Name   -> Function TinkerUI.TBButton.StopDoubleClickPropagation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTBButton::StopDoubleClickPropagation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerUI.TBButton.StopDoubleClickPropagation");
		
		UTBButton_StopDoubleClickPropagation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00807E70
	 * 		Name   -> Function TinkerUI.TBButton.SetIsInteractionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsInteractionEnabled                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBButton::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerUI.TBButton.SetIsInteractionEnabled");
		
		UTBButton_SetIsInteractionEnabled_Params params {};
		params.bInIsInteractionEnabled = bInIsInteractionEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00807DE0
	 * 		Name   -> Function TinkerUI.TBButton.SetIsFocusable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsFocusable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBButton::SetIsFocusable(bool bInIsFocusable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerUI.TBButton.SetIsFocusable");
		
		UTBButton_SetIsFocusable_Params params {};
		params.bInIsFocusable = bInIsFocusable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00807DB0
	 * 		Name   -> Function TinkerUI.TBButton.IsInteractionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBButton::IsInteractionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerUI.TBButton.IsInteractionEnabled");
		
		UTBButton_IsInteractionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00807D80
	 * 		Name   -> Function TinkerUI.TBButton.GetIsFocusable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBButton::GetIsFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerUI.TBButton.GetIsFocusable");
		
		UTBButton_GetIsFocusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerUI.TBButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBListView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBListView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerUI.TBListView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00807F90
	 * 		Name   -> Function TinkerUI.TBSlider.SetSliderFgBarColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBSlider::SetSliderFgBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerUI.TBSlider.SetSliderFgBarColor");
		
		UTBSlider_SetSliderFgBarColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00807F00
	 * 		Name   -> Function TinkerUI.TBSlider.SetMouseUsesStep
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBSlider::SetMouseUsesStep(bool bInValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerUI.TBSlider.SetMouseUsesStep");
		
		UTBSlider_SetMouseUsesStep_Params params {};
		params.bInValue = bInValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerUI.TBSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBSliderWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBSliderWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerUI.TBSliderWidgetStyle");
		return ptr;
	}

}


