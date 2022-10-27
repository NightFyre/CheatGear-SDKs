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
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_CosmeticPresetButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnKeyDown");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_InGameMenu_CosmeticPresetButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnFocusReceived");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_selectedmarker_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_selectedmarker_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_selectedmarker_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_selectedmarker_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnHoverChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnHoverChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnHoverChanged");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnHoverChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_EditButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditButton_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_EditButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.SetEditing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEditing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::SetEditing(bool IsEditing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.SetEditing");
		
		UBP_InGameMenu_CosmeticPresetButton_C_SetEditing_Params params {};
		params.IsEditing = IsEditing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_RemoveButton_Visibility_2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_RemoveButton_Visibility_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_RemoveButton_Visibility_2");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_RemoveButton_Visibility_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_SaveButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_SaveButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_SaveButton_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_SaveButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_RemoveButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_RemoveButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_RemoveButton_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_RemoveButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditableButtonTextBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_EditableButtonTextBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditableButtonTextBox_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_EditableButtonTextBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_PresetButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_PresetButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_PresetButton_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_PresetButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetVisibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_SaveIconImage_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_SaveIconImage_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_SaveIconImage_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_SaveIconImage_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditIcon_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::Get_EditIcon_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditIcon_Visibility_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Get_EditIcon_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.VisibleIfNotEditing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::VisibleIfNotEditing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.VisibleIfNotEditing");
		
		UBP_InGameMenu_CosmeticPresetButton_C_VisibleIfNotEditing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.VisibleIfEditing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::VisibleIfEditing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.VisibleIfEditing");
		
		UBP_InGameMenu_CosmeticPresetButton_C_VisibleIfEditing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetBackground_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_InGameMenu_CosmeticPresetButton_C::GetBackground_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetBackground_1");
		
		UBP_InGameMenu_CosmeticPresetButton_C_GetBackground_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_InGameMenu_CosmeticPresetButton_C::GetBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetBackgroundColor");
		
		UBP_InGameMenu_CosmeticPresetButton_C_GetBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::SetSelected(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.SetSelected");
		
		UBP_InGameMenu_CosmeticPresetButton_C_SetSelected_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetRedBorderVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_CosmeticPresetButton_C::GetRedBorderVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetRedBorderVisibility");
		
		UBP_InGameMenu_CosmeticPresetButton_C_GetRedBorderVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_InGameMenu_CosmeticPresetButton_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetTextColor");
		
		UBP_InGameMenu_CosmeticPresetButton_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Construct");
		
		UBP_InGameMenu_CosmeticPresetButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnMouseEnter");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnFocusLost");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.ExecuteUbergraph_BP_InGameMenu_CosmeticPresetButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::ExecuteUbergraph_BP_InGameMenu_CosmeticPresetButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.ExecuteUbergraph_BP_InGameMenu_CosmeticPresetButton");
		
		UBP_InGameMenu_CosmeticPresetButton_C_ExecuteUbergraph_BP_InGameMenu_CosmeticPresetButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnAddNewButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnAddNewButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnAddNewButtonClicked__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnAddNewButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnDefaultButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnDefaultButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnDefaultButtonClicked__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnDefaultButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnCancelButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnCancelButtonClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnCancelButtonClicked__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnCancelButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnRemoveButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnRemoveButtonClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnRemoveButtonClicked__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnRemoveButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnEditButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnEditButtonClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnEditButtonClicked__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnEditButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnSaveButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PresetDesignation                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnSaveButtonClicked__DelegateSignature(const class FText& PresetName, const class FText& PresetDesignation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnSaveButtonClicked__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnSaveButtonClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		params.PresetDesignation = PresetDesignation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnPresetClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnPresetClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnPresetClicked__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnPresetClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnUnhovered__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_CosmeticPresetButton_C::OnHovered__DelegateSignature(class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnHovered__DelegateSignature");
		
		UBP_InGameMenu_CosmeticPresetButton_C_OnHovered__DelegateSignature_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InGameMenu_CosmeticPresetButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InGameMenu_CosmeticPresetButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C");
		return ptr;
	}

}


