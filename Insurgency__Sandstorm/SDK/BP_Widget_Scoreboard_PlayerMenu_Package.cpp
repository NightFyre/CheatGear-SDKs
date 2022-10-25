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
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_Scoreboard_PlayerMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnKeyDown");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.UpdateButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::UpdateButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.UpdateButtonVisibility");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_UpdateButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.Get_BtnSpectatePlayer_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_Widget_Scoreboard_PlayerMenu_C::Get_BtnSpectatePlayer_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.Get_BtnSpectatePlayer_bIsEnabled_1");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_Get_BtnSpectatePlayer_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Widget_Scoreboard_PlayerMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnFocusReceived");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.Construct");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_126_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_126_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_126_OnClick__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_126_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_137_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_137_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_137_OnClick__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_137_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_37_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_37_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_37_OnClick__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_37_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnHideWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::OnHideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnHideWidget");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_OnHideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnShowRoundOver
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerRoundOverData                        UIData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::OnShowRoundOver(const struct FPlayerRoundOverData& UIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnShowRoundOver");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_OnShowRoundOver_Params params {};
		params.UIData = UIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::ExecuteUbergraph_BP_Widget_Scoreboard_PlayerMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerMenu");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_ExecuteUbergraph_BP_Widget_Scoreboard_PlayerMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnButtonPresed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerMenu_C::OnButtonPresed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C.OnButtonPresed__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerMenu_C_OnButtonPresed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_Scoreboard_PlayerMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_Scoreboard_PlayerMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C");
		return ptr;
	}

}


