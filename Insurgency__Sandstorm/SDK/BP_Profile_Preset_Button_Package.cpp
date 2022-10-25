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
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Profile_Preset_Button_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnKeyDown");
		
		UBP_Profile_Preset_Button_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Profile_Preset_Button_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnFocusReceived");
		
		UBP_Profile_Preset_Button_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_Border_6_BrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Preset_Button_C::Get_Border_6_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_Border_6_BrushColor_1");
		
		UBP_Profile_Preset_Button_C_Get_Border_6_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_selectedmarker_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_selectedmarker_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_selectedmarker_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_selectedmarker_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnHoverChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::OnHoverChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnHoverChanged");
		
		UBP_Profile_Preset_Button_C_OnHoverChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_EditButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_EditButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_EditButton_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_EditButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.SetEditing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEditing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Profile_Preset_Button_C::SetEditing(bool IsEditing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.SetEditing");
		
		UBP_Profile_Preset_Button_C_SetEditing_Params params {};
		params.IsEditing = IsEditing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_RemoveButton_Visibility_2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_RemoveButton_Visibility_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_RemoveButton_Visibility_2");
		
		UBP_Profile_Preset_Button_C_Get_RemoveButton_Visibility_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_SaveButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_SaveButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_SaveButton_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_SaveButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_RemoveButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_RemoveButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_RemoveButton_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_RemoveButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_EditableButtonTextBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_EditableButtonTextBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_EditableButtonTextBox_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_EditableButtonTextBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_PresetButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_PresetButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_PresetButton_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_PresetButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetVisibility_1");
		
		UBP_Profile_Preset_Button_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_SaveIconImage_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_SaveIconImage_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_SaveIconImage_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_SaveIconImage_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_EditIcon_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::Get_EditIcon_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Get_EditIcon_Visibility_1");
		
		UBP_Profile_Preset_Button_C_Get_EditIcon_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.VisibleIfNotEditing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::VisibleIfNotEditing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.VisibleIfNotEditing");
		
		UBP_Profile_Preset_Button_C_VisibleIfNotEditing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.VisibleIfEditing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::VisibleIfEditing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.VisibleIfEditing");
		
		UBP_Profile_Preset_Button_C_VisibleIfEditing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetBackground_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Preset_Button_C::GetBackground_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetBackground_1");
		
		UBP_Profile_Preset_Button_C_GetBackground_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Preset_Button_C::GetBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetBackgroundColor");
		
		UBP_Profile_Preset_Button_C_GetBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Profile_Preset_Button_C::SetSelected(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.SetSelected");
		
		UBP_Profile_Preset_Button_C_SetSelected_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetRedBorderVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Preset_Button_C::GetRedBorderVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetRedBorderVisibility");
		
		UBP_Profile_Preset_Button_C_GetRedBorderVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_Profile_Preset_Button_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.GetTextColor");
		
		UBP_Profile_Preset_Button_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditIcon_K2Node_ComponentBoundEvent_149_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__EditIcon_K2Node_ComponentBoundEvent_149_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditIcon_K2Node_ComponentBoundEvent_149_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__EditIcon_K2Node_ComponentBoundEvent_149_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Profile_Preset_Button_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.PreConstruct");
		
		UBP_Profile_Preset_Button_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_451_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_451_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_451_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_451_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_477_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_477_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_477_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_477_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_707_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_707_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_707_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_707_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1208_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1208_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1208_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1208_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1233_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1233_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1233_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1233_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_1792_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__EditButton_K2Node_ComponentBoundEvent_1792_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_1792_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_1792_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1817_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1817_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1817_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1817_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_1841_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_1841_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_1841_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_1841_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_1871_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__EditButton_K2Node_ComponentBoundEvent_1871_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_1871_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_1871_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Profile_Preset_Button_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnMouseEnter");
		
		UBP_Profile_Preset_Button_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.Construct");
		
		UBP_Profile_Preset_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__EditButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__EditButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.ExecuteUbergraph_BP_Profile_Preset_Button
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Preset_Button_C::ExecuteUbergraph_BP_Profile_Preset_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.ExecuteUbergraph_BP_Profile_Preset_Button");
		
		UBP_Profile_Preset_Button_C_ExecuteUbergraph_BP_Profile_Preset_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnAddNewButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::OnAddNewButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnAddNewButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnAddNewButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnDefaultButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::OnDefaultButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnDefaultButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnDefaultButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnCancelButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Profile_Preset_Button_C::OnCancelButtonClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnCancelButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnCancelButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnRemoveButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Profile_Preset_Button_C::OnRemoveButtonClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnRemoveButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnRemoveButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnEditButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Profile_Preset_Button_C::OnEditButtonClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnEditButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnEditButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnSaveButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PresetDesignation                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Profile_Preset_Button_C::OnSaveButtonClicked__DelegateSignature(const class FText& PresetName, const class FText& PresetDesignation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnSaveButtonClicked__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnSaveButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		params.PresetDesignation = PresetDesignation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnPresetClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Profile_Preset_Button_C::OnPresetClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnPresetClicked__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnPresetClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Preset_Button_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnUnhovered__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     ItemRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Preset_Button_C::OnHovered__DelegateSignature(class UWidget* ItemRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Preset_Button.BP_Profile_Preset_Button_C.OnHovered__DelegateSignature");
		
		UBP_Profile_Preset_Button_C_OnHovered__DelegateSignature_Params params {};
		params.ItemRef = ItemRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Profile_Preset_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Profile_Preset_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Profile_Preset_Button.BP_Profile_Preset_Button_C");
		return ptr;
	}

}


