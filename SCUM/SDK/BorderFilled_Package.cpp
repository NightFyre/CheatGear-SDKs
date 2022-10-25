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
	 * 		Name   -> Function BorderFilled.BorderFilled_C.UpdateBorderFilled
	 * 		Flags  -> ()
	 */
	void UBorderFilled_C::UpdateBorderFilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBorderFilled");
		
		UBorderFilled_C_UpdateBorderFilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.SetBottomMarginOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldBottomMarginBeOn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBorderFilled_C::SetBottomMarginOn(bool shouldBottomMarginBeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBottomMarginOn");
		
		UBorderFilled_C_SetBottomMarginOn_Params params {};
		params.shouldBottomMarginBeOn = shouldBottomMarginBeOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Margin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              marginGap                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBorderFilled_C::SetPaddingOnBackgroundImage(float Margin, float marginGap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage");
		
		UBorderFilled_C_SetPaddingOnBackgroundImage_Params params {};
		params.Margin = Margin;
		params.marginGap = marginGap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBorderFilled_C::SetColorOnBackgroundImage(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage");
		
		UBorderFilled_C_SetColorOnBackgroundImage_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                backgroundColorToSet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBorderFilled_C::SetBackgroundColor(const struct FLinearColor& backgroundColorToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBackgroundColor");
		
		UBorderFilled_C_SetBackgroundColor_Params params {};
		params.backgroundColorToSet = backgroundColorToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.UpdateBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewBackgroundColor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBorderFilled_C::UpdateBackgroundColor(const struct FLinearColor& NewBackgroundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBackgroundColor");
		
		UBorderFilled_C_UpdateBackgroundColor_Params params {};
		params.NewBackgroundColor = NewBackgroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.SetBorderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                borderColorToSet                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBorderFilled_C::SetBorderColor(const struct FLinearColor& borderColorToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBorderColor");
		
		UBorderFilled_C_SetBorderColor_Params params {};
		params.borderColorToSet = borderColorToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.Construct
	 * 		Flags  -> ()
	 */
	void UBorderFilled_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.Construct");
		
		UBorderFilled_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UBorderFilled_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.OnSynchronizeProperties");
		
		UBorderFilled_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBorderFilled_C::ExecuteUbergraph_BorderFilled(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled");
		
		UBorderFilled_C_ExecuteUbergraph_BorderFilled_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBorderFilled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBorderFilled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BorderFilled.BorderFilled_C");
		return ptr;
	}

}


