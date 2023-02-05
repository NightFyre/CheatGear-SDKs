/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_MenuOptionSlot_Slider_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.Construct");
		
		UWB_MenuOptionSlot_Slider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderValue
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionSlot_Slider_C::UpdateSliderValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderValue");
		
		UWB_MenuOptionSlot_Slider_C_UpdateSliderValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValue
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWB_MenuOptionSlot_Slider_C::GetCurrentOptionValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValue");
		
		UWB_MenuOptionSlot_Slider_C_GetCurrentOptionValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValueByPercent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWB_MenuOptionSlot_Slider_C::GetCurrentOptionValueByPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValueByPercent");
		
		UWB_MenuOptionSlot_Slider_C_GetCurrentOptionValueByPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnChangeSliderValue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionSlot_Slider_C::OnChangeSliderValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnChangeSliderValue");
		
		UWB_MenuOptionSlot_Slider_C_OnChangeSliderValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderMinMaxValue
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWB_MenuOptionSlot_Slider_C::UpdateSliderMinMaxValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderMinMaxValue");
		
		UWB_MenuOptionSlot_Slider_C_UpdateSliderMinMaxValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnTextCommited
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionSlot_Slider_C::OnTextCommited(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnTextCommited");
		
		UWB_MenuOptionSlot_Slider_C_OnTextCommited_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.ExecuteUbergraph_WB_MenuOptionSlot_Slider
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionSlot_Slider_C::ExecuteUbergraph_WB_MenuOptionSlot_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.ExecuteUbergraph_WB_MenuOptionSlot_Slider");
		
		UWB_MenuOptionSlot_Slider_C_ExecuteUbergraph_WB_MenuOptionSlot_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MenuOptionSlot_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MenuOptionSlot_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C");
		return ptr;
	}

}


