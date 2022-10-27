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
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnCancelJoin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnCancelJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnCancelJoin");
		
		UBP_MainMenu_ServerBrowser_C_OnCancelJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.GetVisibilityCollapsedOnConsole
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_ServerBrowser_C::GetVisibilityCollapsedOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.GetVisibilityCollapsedOnConsole");
		
		UBP_MainMenu_ServerBrowser_C_GetVisibilityCollapsedOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_ServerBrowser_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnFocusReceived");
		
		UBP_MainMenu_ServerBrowser_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.CheckBoxStateToServerFilter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECheckBoxState                                     CheckBoxState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EServerBrowserFilterSelection                      OutFilter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::CheckBoxStateToServerFilter(ECheckBoxState CheckBoxState, EServerBrowserFilterSelection* OutFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.CheckBoxStateToServerFilter");
		
		UBP_MainMenu_ServerBrowser_C_CheckBoxStateToServerFilter_Params params {};
		params.CheckBoxState = CheckBoxState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFilter != nullptr)
			*OutFilter = params.OutFilter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ServerFilterToCheckBoxState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EServerBrowserFilterSelection                      InFilter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECheckBoxState                                     OutState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::ServerFilterToCheckBoxState(EServerBrowserFilterSelection InFilter, ECheckBoxState* OutState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ServerFilterToCheckBoxState");
		
		UBP_MainMenu_ServerBrowser_C_ServerFilterToCheckBoxState_Params params {};
		params.InFilter = InFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutState != nullptr)
			*OutState = params.OutState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.AttemptToJoinIP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        IpAddress                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ServerBrowser_C::AttemptToJoinIP(const class FText& IpAddress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.AttemptToJoinIP");
		
		UBP_MainMenu_ServerBrowser_C_AttemptToJoinIP_Params params {};
		params.IpAddress = IpAddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.CreateModalForDirectConnectIP
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::CreateModalForDirectConnectIP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.CreateModalForDirectConnectIP");
		
		UBP_MainMenu_ServerBrowser_C_CreateModalForDirectConnectIP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ResetFilters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::ResetFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ResetFilters");
		
		UBP_MainMenu_ServerBrowser_C_ResetFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.SetServerBrowserPreferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::SetServerBrowserPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.SetServerBrowserPreferences");
		
		UBP_MainMenu_ServerBrowser_C_SetServerBrowserPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_ServerBrowser_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnKeyDown");
		
		UBP_MainMenu_ServerBrowser_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnDirectConnectPasswordEntered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnDirectConnectPasswordEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnDirectConnectPasswordEntered");
		
		UBP_MainMenu_ServerBrowser_C_OnDirectConnectPasswordEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.DirectConnectToIP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      IpPort                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::DirectConnectToIP(const class FString& IpPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.DirectConnectToIP");
		
		UBP_MainMenu_ServerBrowser_C_DirectConnectToIP_Params params {};
		params.IpPort = IpPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.IsDirectConnectButtonEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_MainMenu_ServerBrowser_C::IsDirectConnectButtonEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.IsDirectConnectButtonEnabled");
		
		UBP_MainMenu_ServerBrowser_C_IsDirectConnectButtonEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.GetDirectConnectIpString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        IpAsText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      IpPort                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::GetDirectConnectIpString(const class FText& IpAsText, bool* Valid, class FString* IpPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.GetDirectConnectIpString");
		
		UBP_MainMenu_ServerBrowser_C_GetDirectConnectIpString_Params params {};
		params.IpAsText = IpAsText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (IpPort != nullptr)
			*IpPort = params.IpPort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.HideDirectConnectPassword
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::HideDirectConnectPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.HideDirectConnectPassword");
		
		UBP_MainMenu_ServerBrowser_C_HideDirectConnectPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ShowDirectConnectPassword
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ServerIpPort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::ShowDirectConnectPassword(const class FString& ServerIpPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ShowDirectConnectPassword");
		
		UBP_MainMenu_ServerBrowser_C_ShowDirectConnectPassword_Params params {};
		params.ServerIpPort = ServerIpPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateServerBrowserFilters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::UpdateServerBrowserFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateServerBrowserFilters");
		
		UBP_MainMenu_ServerBrowser_C_UpdateServerBrowserFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateFilterButtonState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSkipEvents                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::UpdateFilterButtonState(bool bSkipEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateFilterButtonState");
		
		UBP_MainMenu_ServerBrowser_C_UpdateFilterButtonState_Params params {};
		params.bSkipEvents = bSkipEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateBreadcrumbs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::UpdateBreadcrumbs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateBreadcrumbs");
		
		UBP_MainMenu_ServerBrowser_C_UpdateBreadcrumbs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateStatusMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewStatus                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ServerBrowser_C::UpdateStatusMessage(const class FText& NewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateStatusMessage");
		
		UBP_MainMenu_ServerBrowser_C_UpdateStatusMessage_Params params {};
		params.NewStatus = NewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.RefreshServers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::RefreshServers(bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.RefreshServers");
		
		UBP_MainMenu_ServerBrowser_C_RefreshServers_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnPanelOpened");
		
		UBP_MainMenu_ServerBrowser_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_261_OnNewStatus__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_261_OnNewStatus__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_261_OnNewStatus__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_261_OnNewStatus__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterShowFull_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterShowFull_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterShowFull_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterShowFull_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterCoop_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterCoop_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterCoop_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterCoop_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterVersus_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterVersus_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterVersus_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterVersus_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.Construct");
		
		UBP_MainMenu_ServerBrowser_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__MinPlayersFilter_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__MinPlayersFilter_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__MinPlayersFilter_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__MinPlayersFilter_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__MaxPlayersFilter_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__MaxPlayersFilter_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__MaxPlayersFilter_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__MaxPlayersFilter_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.Delayed Recreat Server List Rows
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::Delayed_Recreat_Server_List_Rows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.Delayed Recreat Server List Rows");
		
		UBP_MainMenu_ServerBrowser_C_Delayed_Recreat_Server_List_Rows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__DirectConnextToIpBtn_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__DirectConnextToIpBtn_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__DirectConnextToIpBtn_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__DirectConnextToIpBtn_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__DefaultRulesFilter_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__DefaultRulesFilter_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__DefaultRulesFilter_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__DefaultRulesFilter_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__CustomRulesFilter_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__CustomRulesFilter_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__CustomRulesFilter_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__CustomRulesFilter_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_8_OnTextCommit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_8_OnTextCommit__DelegateSignature(const class FText& newText, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_8_OnTextCommit__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_8_OnTextCommit__DelegateSignature_Params params {};
		params.newText = newText;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_21_OnStoppedTyping__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_21_OnStoppedTyping__DelegateSignature(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_21_OnStoppedTyping__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_21_OnStoppedTyping__DelegateSignature_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnServerNameSearchChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewFilter                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnServerNameSearchChanged(const class FText& NewFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnServerNameSearchChanged");
		
		UBP_MainMenu_ServerBrowser_C_OnServerNameSearchChanged_Params params {};
		params.NewFilter = NewFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnFiltersUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnFiltersUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnFiltersUpdated");
		
		UBP_MainMenu_ServerBrowser_C_OnFiltersUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterPasswordedServers_K2Node_ComponentBoundEvent_24_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ECheckBoxState                                     Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterPasswordedServers_K2Node_ComponentBoundEvent_24_OnToggle__DelegateSignature(const class FString& Key, ECheckBoxState Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterPasswordedServers_K2Node_ComponentBoundEvent_24_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterPasswordedServers_K2Node_ComponentBoundEvent_24_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterXPGain_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ECheckBoxState                                     Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterXPGain_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature(const class FString& Key, ECheckBoxState Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterXPGain_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterXPGain_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterMutated_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterMutated_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterMutated_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterMutated_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterModded_K2Node_ComponentBoundEvent_17_OnToggle__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterModded_K2Node_ComponentBoundEvent_17_OnToggle__DelegateSignature(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterModded_K2Node_ComponentBoundEvent_17_OnToggle__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterModded_K2Node_ComponentBoundEvent_17_OnToggle__DelegateSignature_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__LightingSelection_K2Node_ComponentBoundEvent_5_OnStateChange__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__LightingSelection_K2Node_ComponentBoundEvent_5_OnStateChange__DelegateSignature(int32_t NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__LightingSelection_K2Node_ComponentBoundEvent_5_OnStateChange__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__LightingSelection_K2Node_ComponentBoundEvent_5_OnStateChange__DelegateSignature_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnModdingTermsConsent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnModdingTermsConsent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnModdingTermsConsent");
		
		UBP_MainMenu_ServerBrowser_C_OnModdingTermsConsent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnModdingTermsCanceled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnModdingTermsCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnModdingTermsCanceled");
		
		UBP_MainMenu_ServerBrowser_C_OnModdingTermsCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterGamemode_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::BndEvt__FilterGamemode_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterGamemode_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_BndEvt__FilterGamemode_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ExecuteUbergraph_BP_MainMenu_ServerBrowser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_ServerBrowser_C::ExecuteUbergraph_BP_MainMenu_ServerBrowser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ExecuteUbergraph_BP_MainMenu_ServerBrowser");
		
		UBP_MainMenu_ServerBrowser_C_ExecuteUbergraph_BP_MainMenu_ServerBrowser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_ServerBrowser_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_ServerBrowser_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_ServerBrowser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_ServerBrowser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C");
		return ptr;
	}

}


