/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Profile_Preset_Default_Button_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnFocusReceived");
		
		UBP_Profile_Preset_Default_Button_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.Get_PresetText_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_Profile_Preset_Default_Button_C::Get_PresetText_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.Get_PresetText_ColorAndOpacity_1");
		
		UBP_Profile_Preset_Default_Button_C_Get_PresetText_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.GetBackground_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Preset_Default_Button_C::GetBackground_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.GetBackground_1");
		
		UBP_Profile_Preset_Default_Button_C_GetBackground_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Profile_Preset_Default_Button_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.PreConstruct");
		
		UBP_Profile_Preset_Default_Button_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.Construct");
		
		UBP_Profile_Preset_Default_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Default_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Default_Button_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Default_Button_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Profile_Preset_Default_Button_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnMouseEnter");
		
		UBP_Profile_Preset_Default_Button_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_Profile_Preset_Default_Button_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnAddedToFocusPath");
		
		UBP_Profile_Preset_Default_Button_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_Profile_Preset_Default_Button_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnRemovedFromFocusPath");
		
		UBP_Profile_Preset_Default_Button_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.ExecuteUbergraph_BP_Profile_Preset_Default_Button
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Preset_Default_Button_C::ExecuteUbergraph_BP_Profile_Preset_Default_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.ExecuteUbergraph_BP_Profile_Preset_Default_Button");
		
		UBP_Profile_Preset_Default_Button_C_ExecuteUbergraph_BP_Profile_Preset_Default_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnAddNewButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::OnAddNewButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnAddNewButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Default_Button_C_OnAddNewButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnDefaultButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::OnDefaultButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnDefaultButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Default_Button_C_OnDefaultButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnUnhovered__DelegateSignature");
		
		UBP_Profile_Preset_Default_Button_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Default_Button_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C.OnHovered__DelegateSignature");
		
		UBP_Profile_Preset_Default_Button_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Profile_Preset_Default_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Profile_Preset_Default_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Profile_Preset_Default_Button.BP_Profile_Preset_Default_Button_C");
		return ptr;
	}

}


