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
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_PlayerReport_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnKeyUp");
		
		UBP_Widget_PlayerReport_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_PlayerReport_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnKeyDown");
		
		UBP_Widget_PlayerReport_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.NavigateToSelectReason
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_Widget_PlayerReport_C::NavigateToSelectReason(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.NavigateToSelectReason");
		
		UBP_Widget_PlayerReport_C_NavigateToSelectReason_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Widget_PlayerReport_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnFocusReceived");
		
		UBP_Widget_PlayerReport_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Get Catagory From Dropdown 
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OptionsRow_DropdownIndexed_C*            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EReportCategoryEnum                                Catagory                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_PlayerReport_C::Get_Catagory_From_Dropdown(class UBP_OptionsRow_DropdownIndexed_C* Target, EReportCategoryEnum* Catagory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Get Catagory From Dropdown ");
		
		UBP_Widget_PlayerReport_C_Get_Catagory_From_Dropdown_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Catagory != nullptr)
			*Catagory = params.Catagory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_5147F2B3474381C64A68EF89A97CF1AC
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendReportResult                           Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_PlayerReport_C::OnSendReportComplete_5147F2B3474381C64A68EF89A97CF1AC(bool bSuccess, const struct FSendReportResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_5147F2B3474381C64A68EF89A97CF1AC");
		
		UBP_Widget_PlayerReport_C_OnSendReportComplete_5147F2B3474381C64A68EF89A97CF1AC_Params params {};
		params.bSuccess = bSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_F393412742B87002BA1246B11F4E7BA5
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendReportResult                           Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_PlayerReport_C::OnSendReportComplete_F393412742B87002BA1246B11F4E7BA5(bool bSuccess, const struct FSendReportResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_F393412742B87002BA1246B11F4E7BA5");
		
		UBP_Widget_PlayerReport_C_OnSendReportComplete_F393412742B87002BA1246B11F4E7BA5_Params params {};
		params.bSuccess = bSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_AD4A16B44B190E9B83ED858E253CAFE8
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendReportResult                           Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_PlayerReport_C::OnSendReportComplete_AD4A16B44B190E9B83ED858E253CAFE8(bool bSuccess, const struct FSendReportResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnSendReportComplete_AD4A16B44B190E9B83ED858E253CAFE8");
		
		UBP_Widget_PlayerReport_C_OnSendReportComplete_AD4A16B44B190E9B83ED858E253CAFE8_Params params {};
		params.bSuccess = bSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.EndDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::EndDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.EndDialogue");
		
		UBP_Widget_PlayerReport_C_EndDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ReportThanks_K2Node_ComponentBoundEvent_3_OnConfirmed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__ReportThanks_K2Node_ComponentBoundEvent_3_OnConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ReportThanks_K2Node_ComponentBoundEvent_3_OnConfirmed__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__ReportThanks_K2Node_ComponentBoundEvent_3_OnConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__SendBtn_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__SendBtn_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__SendBtn_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__SendBtn_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_9_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ReportInProgress_K2Node_ComponentBoundEvent_1_OnActionCancelled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__ReportInProgress_K2Node_ComponentBoundEvent_1_OnActionCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ReportInProgress_K2Node_ComponentBoundEvent_1_OnActionCancelled__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__ReportInProgress_K2Node_ComponentBoundEvent_1_OnActionCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Request New Popup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selected_Enum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_PlayerReport_C::Request_New_Popup(int32_t Selected_Enum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Request New Popup");
		
		UBP_Widget_PlayerReport_C_Request_New_Popup_Params params {};
		params.Selected_Enum = Selected_Enum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_3_OnCanceled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__GenericError_K2Node_ComponentBoundEvent_3_OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_3_OnCanceled__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__GenericError_K2Node_ComponentBoundEvent_3_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_7_OnCanceled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_7_OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_7_OnCanceled__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_7_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__ConfirmCancel_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_5_OnConfirmed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__GenericError_K2Node_ComponentBoundEvent_5_OnConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_5_OnConfirmed__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__GenericError_K2Node_ComponentBoundEvent_5_OnConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__PlayerReportText_K2Node_ComponentBoundEvent_12_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__PlayerReportText_K2Node_ComponentBoundEvent_12_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__PlayerReportText_K2Node_ComponentBoundEvent_12_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__PlayerReportText_K2Node_ComponentBoundEvent_12_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_11_OnConfirmedExtraButton__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__GenericError_K2Node_ComponentBoundEvent_11_OnConfirmedExtraButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__GenericError_K2Node_ComponentBoundEvent_11_OnConfirmedExtraButton__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__GenericError_K2Node_ComponentBoundEvent_11_OnConfirmedExtraButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnShowRoundOver
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerRoundOverData                        UIData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_PlayerReport_C::OnShowRoundOver(const struct FPlayerRoundOverData& UIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnShowRoundOver");
		
		UBP_Widget_PlayerReport_C_OnShowRoundOver_Params params {};
		params.UIData = UIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.Construct");
		
		UBP_Widget_PlayerReport_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__SendButtonAction_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__SendButtonAction_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__SendButtonAction_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__SendButtonAction_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__CancelButtonAction_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::BndEvt__CancelButtonAction_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.BndEvt__CancelButtonAction_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_BndEvt__CancelButtonAction_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.ExecuteUbergraph_BP_Widget_PlayerReport
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_PlayerReport_C::ExecuteUbergraph_BP_Widget_PlayerReport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.ExecuteUbergraph_BP_Widget_PlayerReport");
		
		UBP_Widget_PlayerReport_C_ExecuteUbergraph_BP_Widget_PlayerReport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_PlayerReport_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_PlayerReport.BP_Widget_PlayerReport_C.OnClosed__DelegateSignature");
		
		UBP_Widget_PlayerReport_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_PlayerReport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_PlayerReport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_PlayerReport.BP_Widget_PlayerReport_C");
		return ptr;
	}

}


