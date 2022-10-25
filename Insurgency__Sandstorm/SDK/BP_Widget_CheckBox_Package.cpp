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
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.SetHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_CheckBox_C::SetHovered(bool bNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.SetHovered");
		
		UBP_Widget_CheckBox_C_SetHovered_Params params {};
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.UpdateVisualState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_CheckBox_C::UpdateVisualState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.UpdateVisualState");
		
		UBP_Widget_CheckBox_C_UpdateVisualState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.SetCheckboxState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECheckBoxState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSkipEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_CheckBox_C::SetCheckboxState(ECheckBoxState NewState, bool bSkipEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.SetCheckboxState");
		
		UBP_Widget_CheckBox_C_SetCheckboxState_Params params {};
		params.NewState = NewState;
		params.bSkipEvent = bSkipEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_CheckBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.PreConstruct");
		
		UBP_Widget_CheckBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_CheckBox_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UBP_Widget_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_Widget_CheckBox_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnAddedToFocusPath");
		
		UBP_Widget_CheckBox_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_CheckBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnMouseEnter");
		
		UBP_Widget_CheckBox_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_Widget_CheckBox_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnRemovedFromFocusPath");
		
		UBP_Widget_CheckBox_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_CheckBox_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnMouseLeave");
		
		UBP_Widget_CheckBox_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_CheckBox_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UBP_Widget_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnUserToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_CheckBox_C::OnUserToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnUserToggle");
		
		UBP_Widget_CheckBox_C_OnUserToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.ExecuteUbergraph_BP_Widget_CheckBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CheckBox_C::ExecuteUbergraph_BP_Widget_CheckBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.ExecuteUbergraph_BP_Widget_CheckBox");
		
		UBP_Widget_CheckBox_C_ExecuteUbergraph_BP_Widget_CheckBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CheckBox_C::OnHovered__DelegateSignature(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnHovered__DelegateSignature");
		
		UBP_Widget_CheckBox_C_OnHovered__DelegateSignature_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnToggle__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ECheckBoxState                                     Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CheckBox_C::OnToggle__DelegateSignature(const class FString& Key, ECheckBoxState Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnToggle__DelegateSignature");
		
		UBP_Widget_CheckBox_C_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_CheckBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_CheckBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_CheckBox.BP_Widget_CheckBox_C");
		return ptr;
	}

}


