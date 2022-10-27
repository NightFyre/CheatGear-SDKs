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
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.SetVisibilityCreditOnConsole
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_Main_C::SetVisibilityCreditOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.SetVisibilityCreditOnConsole");
		
		UBP_MainMenu_Main_C_SetVisibilityCreditOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetMenuOptionToFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Main_C::GetMenuOptionToFocus(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetMenuOptionToFocus");
		
		UBP_MainMenu_Main_C_GetMenuOptionToFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.HidePlayerCounterOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::HidePlayerCounterOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.HidePlayerCounterOnConsole");
		
		UBP_MainMenu_Main_C_HidePlayerCounterOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.HidePlayerStatisticsOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::HidePlayerStatisticsOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.HidePlayerStatisticsOnConsole");
		
		UBP_MainMenu_Main_C_HidePlayerStatisticsOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.HideCompetitiveRankOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::HideCompetitiveRankOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.HideCompetitiveRankOnConsole");
		
		UBP_MainMenu_Main_C_HideCompetitiveRankOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.HideSubmitFeedbackButtonOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::HideSubmitFeedbackButtonOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.HideSubmitFeedbackButtonOnConsole");
		
		UBP_MainMenu_Main_C_HideSubmitFeedbackButtonOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetReplaysButtonVisibilityOnConsole
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_Main_C::GetReplaysButtonVisibilityOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetReplaysButtonVisibilityOnConsole");
		
		UBP_MainMenu_Main_C_GetReplaysButtonVisibilityOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_Main_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnCustomNavigation");
		
		UBP_MainMenu_Main_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.CheckShouldShowHistoryHighlightsNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::CheckShouldShowHistoryHighlightsNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.CheckShouldShowHistoryHighlightsNotification");
		
		UBP_MainMenu_Main_C_CheckShouldShowHistoryHighlightsNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.InvalidateMenuOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewHover                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::InvalidateMenuOptions(const class FText& NewHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.InvalidateMenuOptions");
		
		UBP_MainMenu_Main_C_InvalidateMenuOptions_Params params {};
		params.NewHover = NewHover;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.RestoreMainFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::RestoreMainFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.RestoreMainFocus");
		
		UBP_MainMenu_Main_C_RestoreMainFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_Main_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnKeyDown");
		
		UBP_MainMenu_Main_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OpenFeedbackMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::OpenFeedbackMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OpenFeedbackMenu");
		
		UBP_MainMenu_Main_C_OpenFeedbackMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.Get_BottomRightMenu_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_Main_C::Get_BottomRightMenu_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.Get_BottomRightMenu_Visibility_1");
		
		UBP_MainMenu_Main_C_Get_BottomRightMenu_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetFirstMenuOptionVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Row                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Main_C::GetFirstMenuOptionVisible(class UWidget** Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetFirstMenuOptionVisible");
		
		UBP_MainMenu_Main_C_GetFirstMenuOptionVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Row != nullptr)
			*Row = params.Row;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_Main_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnFocusReceived");
		
		UBP_MainMenu_Main_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetVisibilityCollapsedOnConsole
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_Main_C::GetVisibilityCollapsedOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetVisibilityCollapsedOnConsole");
		
		UBP_MainMenu_Main_C_GetVisibilityCollapsedOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPageSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Main_C::OnPageSelected(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPageSelected");
		
		UBP_MainMenu_Main_C_OnPageSelected_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.Construct");
		
		UBP_MainMenu_Main_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSingleplayer_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnSingleplayer_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSingleplayer_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnSingleplayer_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPanelOpened");
		
		UBP_MainMenu_Main_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPanelClosed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::OnPanelClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPanelClosed");
		
		UBP_MainMenu_Main_C_OnPanelClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_61_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_61_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_61_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_61_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnProfile_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnProfile_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnProfile_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnProfile_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnCharacter_K2Node_ComponentBoundEvent_47_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnCharacter_K2Node_ComponentBoundEvent_47_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnCharacter_K2Node_ComponentBoundEvent_47_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnCharacter_K2Node_ComponentBoundEvent_47_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(const class FText& HoverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(const class FText& HoverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature(const class FText& HoverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnProfile_K2Node_ComponentBoundEvent_48_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnProfile_K2Node_ComponentBoundEvent_48_OnHovered__DelegateSignature(const class FText& HoverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnProfile_K2Node_ComponentBoundEvent_48_OnHovered__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnProfile_K2Node_ComponentBoundEvent_48_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_91_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnSettings_K2Node_ComponentBoundEvent_91_OnHovered__DelegateSignature(const class FText& HoverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_91_OnHovered__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_91_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnQuit_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature(const class FText& HoverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnCredits_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnCredits_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature(const class FText& HoverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnCredits_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnCredits_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params params {};
		params.HoverText = HoverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMods_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnMods_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMods_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnMods_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnModdingTermsConsent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::OnModdingTermsConsent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnModdingTermsConsent");
		
		UBP_MainMenu_Main_C_OnModdingTermsConsent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_MenuOptionRow_C_0_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BP_MenuOptionRow_C_0_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_MenuOptionRow_C_0_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BP_MenuOptionRow_C_0_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnModdingTermsCanceled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::OnModdingTermsCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnModdingTermsCanceled");
		
		UBP_MainMenu_Main_C_OnModdingTermsCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnAccountPicker_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnAccountPicker_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnAccountPicker_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnAccountPicker_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnButtonAddedToFocusPath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     MenuOption                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Main_C::OnButtonAddedToFocusPath(class UWidget* MenuOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnButtonAddedToFocusPath");
		
		UBP_MainMenu_Main_C_OnButtonAddedToFocusPath_Params params {};
		params.MenuOption = MenuOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLinkAccount_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnLinkAccount_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLinkAccount_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnLinkAccount_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnServiceLoginComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        InServiceName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Main_C::OnServiceLoginComplete(bool bSuccessful, const class FName& InServiceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnServiceLoginComplete");
		
		UBP_MainMenu_Main_C_OnServiceLoginComplete_Params params {};
		params.bSuccessful = bSuccessful;
		params.InServiceName = InServiceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Main_C::BndEvt__BtnStore_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Main_C_BndEvt__BtnStore_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.UpdateStoreNotification
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInHasNewItems                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInHasSales                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_Main_C::UpdateStoreNotification(bool bInHasNewItems, bool bInHasSales)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.UpdateStoreNotification");
		
		UBP_MainMenu_Main_C_UpdateStoreNotification_Params params {};
		params.bInHasNewItems = bInHasNewItems;
		params.bInHasSales = bInHasSales;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.ExecuteUbergraph_BP_MainMenu_Main
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Main_C::ExecuteUbergraph_BP_MainMenu_Main(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.ExecuteUbergraph_BP_MainMenu_Main");
		
		UBP_MainMenu_Main_C_ExecuteUbergraph_BP_MainMenu_Main_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnMenuPageSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Main_C::OnMenuPageSelected__DelegateSignature(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnMenuPageSelected__DelegateSignature");
		
		UBP_MainMenu_Main_C_OnMenuPageSelected__DelegateSignature_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Main_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_Main.BP_MainMenu_Main_C");
		return ptr;
	}

}


