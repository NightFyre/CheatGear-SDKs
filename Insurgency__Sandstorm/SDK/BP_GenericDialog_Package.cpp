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
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.SetTitleIconImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::SetTitleIconImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.SetTitleIconImage");
		
		UBP_GenericDialog_C_SetTitleIconImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_GenericDialog_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnKeyUp");
		
		UBP_GenericDialog_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.SetCustomWidgetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GenericDialog_C::SetCustomWidgetVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.SetCustomWidgetVisibility");
		
		UBP_GenericDialog_C_SetCustomWidgetVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.UpdateDialogType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDialogType                                        NewType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GenericDialog_C::UpdateDialogType(EDialogType NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.UpdateDialogType");
		
		UBP_GenericDialog_C_UpdateDialogType_Params params {};
		params.NewType = NewType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.DialogExtraButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::DialogExtraButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.DialogExtraButtonClicked");
		
		UBP_GenericDialog_C_DialogExtraButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.SetExtraButtonText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewButtonText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GenericDialog_C::SetExtraButtonText(const class FText& NewButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.SetExtraButtonText");
		
		UBP_GenericDialog_C_SetExtraButtonText_Params params {};
		params.NewButtonText = NewButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.SetCancelButtonText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewButtonText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GenericDialog_C::SetCancelButtonText(const class FText& NewButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.SetCancelButtonText");
		
		UBP_GenericDialog_C_SetCancelButtonText_Params params {};
		params.NewButtonText = NewButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.SetOKButtonText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewButtonText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GenericDialog_C::SetOKButtonText(const class FText& NewButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.SetOKButtonText");
		
		UBP_GenericDialog_C_SetOKButtonText_Params params {};
		params.NewButtonText = NewButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.SetupDialogType
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::SetupDialogType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.SetupDialogType");
		
		UBP_GenericDialog_C_SetupDialogType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.GetEnteredText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Output                                                     (Parm, OutParm)
	 */
	void UBP_GenericDialog_C::GetEnteredText(class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.GetEnteredText");
		
		UBP_GenericDialog_C_GetEnteredText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.Set Confirmation Text
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GenericDialog_C::Set_Confirmation_Text(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.Set Confirmation Text");
		
		UBP_GenericDialog_C_Set_Confirmation_Text_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.UpdateTitleText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bConvertToUpper                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GenericDialog_C::UpdateTitleText(const class FText& newText, bool bConvertToUpper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.UpdateTitleText");
		
		UBP_GenericDialog_C_UpdateTitleText_Params params {};
		params.newText = newText;
		params.bConvertToUpper = bConvertToUpper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.DialogConfirmed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::DialogConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.DialogConfirmed");
		
		UBP_GenericDialog_C_DialogConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.DialogCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::DialogCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.DialogCancel");
		
		UBP_GenericDialog_C_DialogCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_GenericDialog_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnKeyDown");
		
		UBP_GenericDialog_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_GenericDialog_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnFocusReceived");
		
		UBP_GenericDialog_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.SetDefaultTextEntryText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_GenericDialog_C::SetDefaultTextEntryText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.SetDefaultTextEntryText");
		
		UBP_GenericDialog_C_SetDefaultTextEntryText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GenericDialog_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.PreConstruct");
		
		UBP_GenericDialog_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_42_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GenericDialog_C::BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_42_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_42_OnPressed__DelegateSignature");
		
		UBP_GenericDialog_C_BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_42_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GenericDialog_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_GenericDialog_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__TextEntry_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GenericDialog_C::BndEvt__TextEntry_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__TextEntry_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature");
		
		UBP_GenericDialog_C_BndEvt__TextEntry_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GenericDialog_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBP_GenericDialog_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GenericDialog_C::BndEvt__ExtraButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
		UBP_GenericDialog_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.BP_ClosingVirtualKeyboard
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::BP_ClosingVirtualKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.BP_ClosingVirtualKeyboard");
		
		UBP_GenericDialog_C_BP_ClosingVirtualKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.BP_OpeningVirtualKeyboard
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::BP_OpeningVirtualKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.BP_OpeningVirtualKeyboard");
		
		UBP_GenericDialog_C_BP_OpeningVirtualKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.ExecuteUbergraph_BP_GenericDialog
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GenericDialog_C::ExecuteUbergraph_BP_GenericDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.ExecuteUbergraph_BP_GenericDialog");
		
		UBP_GenericDialog_C_ExecuteUbergraph_BP_GenericDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedWithEmptyText__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::OnConfirmedWithEmptyText__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedWithEmptyText__DelegateSignature");
		
		UBP_GenericDialog_C_OnConfirmedWithEmptyText__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedExtraButton__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::OnConfirmedExtraButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedExtraButton__DelegateSignature");
		
		UBP_GenericDialog_C_OnConfirmedExtraButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnCloseButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::OnCloseButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnCloseButtonPressed__DelegateSignature");
		
		UBP_GenericDialog_C_OnCloseButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedWithText__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GenericDialog_C::OnConfirmedWithText__DelegateSignature(const class FText& ConfirmText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmedWithText__DelegateSignature");
		
		UBP_GenericDialog_C_OnConfirmedWithText__DelegateSignature_Params params {};
		params.ConfirmText = ConfirmText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::OnConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnConfirmed__DelegateSignature");
		
		UBP_GenericDialog_C_OnConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericDialog.BP_GenericDialog_C.OnCanceled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericDialog_C::OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericDialog.BP_GenericDialog_C.OnCanceled__DelegateSignature");
		
		UBP_GenericDialog_C_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GenericDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GenericDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GenericDialog.BP_GenericDialog_C");
		return ptr;
	}

}


