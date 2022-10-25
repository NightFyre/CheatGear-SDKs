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
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetMenuOptionToFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::GetMenuOptionToFocus(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetMenuOptionToFocus");
		
		UBP_InGameMenu_Game_C_GetMenuOptionToFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.RemoveCallVoteMenuWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::RemoveCallVoteMenuWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.RemoveCallVoteMenuWidget");
		
		UBP_InGameMenu_Game_C_RemoveCallVoteMenuWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_Game_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnKeyUp");
		
		UBP_InGameMenu_Game_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BtnCallVote_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_Game_C::Get_BtnCallVote_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BtnCallVote_Visibility_1");
		
		UBP_InGameMenu_Game_C_Get_BtnCallVote_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetVisibilityCollapsedOnConsole
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_Game_C::GetVisibilityCollapsedOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetVisibilityCollapsedOnConsole");
		
		UBP_InGameMenu_Game_C_GetVisibilityCollapsedOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.PopulateMutatorList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::PopulateMutatorList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.PopulateMutatorList");
		
		UBP_InGameMenu_Game_C_PopulateMutatorList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.UpdateCallVoteVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::UpdateCallVoteVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.UpdateCallVoteVisibility");
		
		UBP_InGameMenu_Game_C_UpdateCallVoteVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_Game_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnPreviewKeyDown");
		
		UBP_InGameMenu_Game_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetHighlightsVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_Game_C::GetHighlightsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetHighlightsVisibility");
		
		UBP_InGameMenu_Game_C_GetHighlightsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GoBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::GoBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GoBack");
		
		UBP_InGameMenu_Game_C_GoBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.InvalidateOldMenuOption
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_Game_C::InvalidateOldMenuOption(const class FText& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.InvalidateOldMenuOption");
		
		UBP_InGameMenu_Game_C_InvalidateOldMenuOption_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BtnSettings_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_Game_C::Get_BtnSettings_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BtnSettings_Visibility_1");
		
		UBP_InGameMenu_Game_C_Get_BtnSettings_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.PopulateScenarioRules
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_Game_C::PopulateScenarioRules(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.PopulateScenarioRules");
		
		UBP_InGameMenu_Game_C_PopulateScenarioRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BottomRightMenu_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_Game_C::Get_BottomRightMenu_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BottomRightMenu_Visibility_1");
		
		UBP_InGameMenu_Game_C_Get_BottomRightMenu_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.SelectOption
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::SelectOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.SelectOption");
		
		UBP_InGameMenu_Game_C_SelectOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.UnselectOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::UnselectOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.UnselectOptions");
		
		UBP_InGameMenu_Game_C_UnselectOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_Game_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnKeyDown");
		
		UBP_InGameMenu_Game_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.NavigateOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_Game_C::NavigateOptions(bool bUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.NavigateOptions");
		
		UBP_InGameMenu_Game_C_NavigateOptions_Params params {};
		params.bUp = bUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetFirstMenuOptionVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Row                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::GetFirstMenuOptionVisible(class UWidget** Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetFirstMenuOptionVisible");
		
		UBP_InGameMenu_Game_C_GetFirstMenuOptionVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Row != nullptr)
			*Row = params.Row;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_InGameMenu_Game_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnFocusReceived");
		
		UBP_InGameMenu_Game_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Construct");
		
		UBP_InGameMenu_Game_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_123_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_123_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_123_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_123_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_237_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_237_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_237_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_237_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnPanelOpened");
		
		UBP_InGameMenu_Game_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnRoundReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnRoundReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnRoundReset");
		
		UBP_InGameMenu_Game_C_OnRoundReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLessons_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnLessons_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLessons_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnLessons_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnCallVote_K2Node_ComponentBoundEvent_413_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnCallVote_K2Node_ComponentBoundEvent_413_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnCallVote_K2Node_ComponentBoundEvent_413_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnCallVote_K2Node_ComponentBoundEvent_413_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnSettings_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnExitToDesktop_K2Node_ComponentBoundEvent_43_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnExitToDesktop_K2Node_ComponentBoundEvent_43_OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnExitToDesktop_K2Node_ComponentBoundEvent_43_OnHovered__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnExitToDesktop_K2Node_ComponentBoundEvent_43_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.CheckRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::CheckRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.CheckRules");
		
		UBP_InGameMenu_Game_C_CheckRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnBack_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::BndEvt__BtnBack_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnBack_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_BndEvt__BtnBack_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.EventOnButtonAddedToFocusPath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::EventOnButtonAddedToFocusPath(const class FText& HoverText, class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.EventOnButtonAddedToFocusPath");
		
		UBP_InGameMenu_Game_C_EventOnButtonAddedToFocusPath_Params params {};
		params.HoverText = HoverText;
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.ExecuteUbergraph_BP_InGameMenu_Game
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_Game_C::ExecuteUbergraph_BP_InGameMenu_Game(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.ExecuteUbergraph_BP_InGameMenu_Game");
		
		UBP_InGameMenu_Game_C_ExecuteUbergraph_BP_InGameMenu_Game_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature");
		
		UBP_InGameMenu_Game_C_OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnLeaveGame__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WantsToQuit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_Game_C::OnLeaveGame__DelegateSignature(bool WantsToQuit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnLeaveGame__DelegateSignature");
		
		UBP_InGameMenu_Game_C_OnLeaveGame__DelegateSignature_Params params {};
		params.WantsToQuit = WantsToQuit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnGoToSelectLoadout__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnGoToSelectLoadout__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnGoToSelectLoadout__DelegateSignature");
		
		UBP_InGameMenu_Game_C_OnGoToSelectLoadout__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnGoToSelectClass__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnGoToSelectClass__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnGoToSelectClass__DelegateSignature");
		
		UBP_InGameMenu_Game_C_OnGoToSelectClass__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnCallVoteSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnCallVoteSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnCallVoteSelected__DelegateSignature");
		
		UBP_InGameMenu_Game_C_OnCallVoteSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnLessonsSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnLessonsSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnLessonsSelected__DelegateSignature");
		
		UBP_InGameMenu_Game_C_OnLessonsSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnSettingsSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_Game_C::OnSettingsSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnSettingsSelected__DelegateSignature");
		
		UBP_InGameMenu_Game_C_OnSettingsSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InGameMenu_Game_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InGameMenu_Game_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_InGameMenu_Game.BP_InGameMenu_Game_C");
		return ptr;
	}

}


