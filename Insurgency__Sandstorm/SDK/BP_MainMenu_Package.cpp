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
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.ShowFooterBackground
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::ShowFooterBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowFooterBackground");
		
		UBP_MainMenu_C_ShowFooterBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.Update User ID
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::Update_User_ID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Update User ID");
		
		UBP_MainMenu_C_Update_User_ID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.AdjustElementsZOrderForModalPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDecreaseZOrder                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::AdjustElementsZOrderForModalPopup(bool bDecreaseZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.AdjustElementsZOrderForModalPopup");
		
		UBP_MainMenu_C_AdjustElementsZOrderForModalPopup_Params params {};
		params.bDecreaseZOrder = bDecreaseZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.SetPlatformSpecificVisual
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::SetPlatformSpecificVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SetPlatformSpecificVisual");
		
		UBP_MainMenu_C_SetPlatformSpecificVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnCanceledLicenseDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::OnCanceledLicenseDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnCanceledLicenseDialog");
		
		UBP_MainMenu_C_OnCanceledLicenseDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnConfirmedLicenseDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::OnConfirmedLicenseDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnConfirmedLicenseDialog");
		
		UBP_MainMenu_C_OnConfirmedLicenseDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.CreateLicenseAgreementDialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::CreateLicenseAgreementDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CreateLicenseAgreementDialog");
		
		UBP_MainMenu_C_CreateLicenseAgreementDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.PopItemClaimNotification
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::PopItemClaimNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.PopItemClaimNotification");
		
		UBP_MainMenu_C_PopItemClaimNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.GetVisibilityOfLanguage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_C::GetVisibilityOfLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.GetVisibilityOfLanguage");
		
		UBP_MainMenu_C_GetVisibilityOfLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.Received New Item Claims
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOnlineItemClaimResult                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_C::Received_New_Item_Claims(struct FOnlineItemClaimResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Received New Item Claims");
		
		UBP_MainMenu_C_Received_New_Item_Claims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnKeyUp");
		
		UBP_MainMenu_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.CheckAccountStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAccountStatusResult                     AccountStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenu_C::CheckAccountStatus(const struct FGetAccountStatusResult& AccountStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CheckAccountStatus");
		
		UBP_MainMenu_C_CheckAccountStatus_Params params {};
		params.AccountStatus = AccountStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnAccountStatusUpdated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGetAccountStatusResult                     AccountStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_C::OnAccountStatusUpdated(struct FGetAccountStatusResult* AccountStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnAccountStatusUpdated");
		
		UBP_MainMenu_C_OnAccountStatusUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountStatus != nullptr)
			*AccountStatus = params.AccountStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.GetPageWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EnumMainMenuPage                                   Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMainMenuPanelWidget*                        Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::GetPageWidget(EnumMainMenuPage Page, class UMainMenuPanelWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.GetPageWidget");
		
		UBP_MainMenu_C_GetPageWidget_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.GetCurrentPageWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UMainMenuPanelWidget*                        Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::GetCurrentPageWidget(class UMainMenuPanelWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.GetCurrentPageWidget");
		
		UBP_MainMenu_C_GetCurrentPageWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.SetBackgroundOverlayEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::SetBackgroundOverlayEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SetBackgroundOverlayEnabled");
		
		UBP_MainMenu_C_SetBackgroundOverlayEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.UpdateBreadcrumbText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::UpdateBreadcrumbText(TArray<class FText>* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.UpdateBreadcrumbText");
		
		UBP_MainMenu_C_UpdateBreadcrumbText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnFocusReceived");
		
		UBP_MainMenu_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BindGetMatchmakingVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_C::BindGetMatchmakingVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BindGetMatchmakingVisibility");
		
		UBP_MainMenu_C_BindGetMatchmakingVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.Get_BackButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_C::Get_BackButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Get_BackButtonVisibility");
		
		UBP_MainMenu_C_Get_BackButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.AttemptNavigateBack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDidNavigate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::AttemptNavigateBack(bool* bDidNavigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.AttemptNavigateBack");
		
		UBP_MainMenu_C_AttemptNavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDidNavigate != nullptr)
			*bDidNavigate = params.bDidNavigate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnKeyDown");
		
		UBP_MainMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.SelectPage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::SelectPage(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SelectPage");
		
		UBP_MainMenu_C_SelectPage_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.Get_LabelVersion_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MainMenu_C::Get_LabelVersion_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Get_LabelVersion_Text_1");
		
		UBP_MainMenu_C_Get_LabelVersion_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnGetStatusComplete_A69B5F8A48B9FA426E1555949E6B9883
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGetAccountStatusResult                     Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_C::OnGetStatusComplete_A69B5F8A48B9FA426E1555949E6B9883(bool bSuccess, const struct FGetAccountStatusResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnGetStatusComplete_A69B5F8A48B9FA426E1555949E6B9883");
		
		UBP_MainMenu_C_OnGetStatusComplete_A69B5F8A48B9FA426E1555949E6B9883_Params params {};
		params.bSuccess = bSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnMotdReceived_A06CBA62496FD587F136789216BA2A89
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMotdData                                   Motd                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_C::OnMotdReceived_A06CBA62496FD587F136789216BA2A89(const struct FMotdData& Motd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnMotdReceived_A06CBA62496FD587F136789216BA2A89");
		
		UBP_MainMenu_C_OnMotdReceived_A06CBA62496FD587F136789216BA2A89_Params params {};
		params.Motd = Motd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnGetStatusComplete_A69B5F8A48B9FA426E15559437DA345E
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGetAccountStatusResult                     Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenu_C::OnGetStatusComplete_A69B5F8A48B9FA426E15559437DA345E(bool bSuccess, const struct FGetAccountStatusResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnGetStatusComplete_A69B5F8A48B9FA426E15559437DA345E");
		
		UBP_MainMenu_C_OnGetStatusComplete_A69B5F8A48B9FA426E15559437DA345E_Params params {};
		params.bSuccess = bSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.PreConstruct");
		
		UBP_MainMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyQuitDialog_K2Node_ComponentBoundEvent_74_OnCancelPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyQuitDialog_K2Node_ComponentBoundEvent_74_OnCancelPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyQuitDialog_K2Node_ComponentBoundEvent_74_OnCancelPressed__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyQuitDialog_K2Node_ComponentBoundEvent_74_OnCancelPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_31_OnContinue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_31_OnContinue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_31_OnContinue__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_31_OnContinue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyRecapPanel_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_6_OnCustomGameCreate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_6_OnCustomGameCreate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_6_OnCustomGameCreate__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_6_OnCustomGameCreate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_7_OnContinue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_7_OnContinue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_7_OnContinue__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_7_OnContinue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_8_OnBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_8_OnBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_8_OnBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyCustomGameCreation_K2Node_ComponentBoundEvent_8_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCredits_K2Node_ComponentBoundEvent_9_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyCredits_K2Node_ComponentBoundEvent_9_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCredits_K2Node_ComponentBoundEvent_9_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyCredits_K2Node_ComponentBoundEvent_9_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_11_OnMenuPageSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   PageName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_11_OnMenuPageSelected__DelegateSignature(EnumMainMenuPage PageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_11_OnMenuPageSelected__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_11_OnMenuPageSelected__DelegateSignature_Params params {};
		params.PageName = PageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyAnnouncementPanel_K2Node_ComponentBoundEvent_10_OnContinue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromNewsAnnouncement                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeOnScreen                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bClickedLink                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::BndEvt__BodyAnnouncementPanel_K2Node_ComponentBoundEvent_10_OnContinue__DelegateSignature(bool bFromNewsAnnouncement, float TimeOnScreen, bool bClickedLink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyAnnouncementPanel_K2Node_ComponentBoundEvent_10_OnContinue__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyAnnouncementPanel_K2Node_ComponentBoundEvent_10_OnContinue__DelegateSignature_Params params {};
		params.bFromNewsAnnouncement = bFromNewsAnnouncement;
		params.TimeOnScreen = TimeOnScreen;
		params.bClickedLink = bClickedLink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyModMenu_K2Node_ComponentBoundEvent_12_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyModMenu_K2Node_ComponentBoundEvent_12_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyModMenu_K2Node_ComponentBoundEvent_12_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyModMenu_K2Node_ComponentBoundEvent_12_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.Prompt For Language
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::Prompt_For_Language()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Prompt For Language");
		
		UBP_MainMenu_C_Prompt_For_Language_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyLanguage_K2Node_ComponentBoundEvent_15_OnContinue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsNewCulture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::BndEvt__BodyLanguage_K2Node_ComponentBoundEvent_15_OnContinue__DelegateSignature(bool IsNewCulture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyLanguage_K2Node_ComponentBoundEvent_15_OnContinue__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyLanguage_K2Node_ComponentBoundEvent_15_OnContinue__DelegateSignature_Params params {};
		params.IsNewCulture = IsNewCulture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyOnlineStore_K2Node_ComponentBoundEvent_4_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyOnlineStore_K2Node_ComponentBoundEvent_4_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyOnlineStore_K2Node_ComponentBoundEvent_4_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyOnlineStore_K2Node_ComponentBoundEvent_4_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_14_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_14_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_14_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_14_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_16_OnConfirmCreditVersion__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Version                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_16_OnConfirmCreditVersion__DelegateSignature(const class FString& Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_16_OnConfirmCreditVersion__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyCreditSelect_K2Node_ComponentBoundEvent_16_OnConfirmCreditVersion__DelegateSignature_Params params {};
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyTutorials_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyTutorials_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyTutorials_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyTutorials_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_18_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_18_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_18_OnUnhovered__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_18_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCharacter_K2Node_ComponentBoundEvent_41_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyCharacter_K2Node_ComponentBoundEvent_41_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyCharacter_K2Node_ComponentBoundEvent_41_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyCharacter_K2Node_ComponentBoundEvent_41_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnUsingControllerUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    NewIconType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::OnUsingControllerUpdate(bool UsingController, EeInputIconType NewIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnUsingControllerUpdate");
		
		UBP_MainMenu_C_OnUsingControllerUpdate_Params params {};
		params.UsingController = UsingController;
		params.NewIconType = NewIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_19_OnModalPopupOpened__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_19_OnModalPopupOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_19_OnModalPopupOpened__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_19_OnModalPopupOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_20_OnModalPopupClosed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_20_OnModalPopupClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_20_OnModalPopupClosed__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_20_OnModalPopupClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_4_BreadcrumbsUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_4_BreadcrumbsUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_4_BreadcrumbsUpdated__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_4_BreadcrumbsUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyPostMatch_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyPostMatch_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyPostMatch_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyPostMatch_K2Node_ComponentBoundEvent_1_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.InitMenu
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::InitMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.InitMenu");
		
		UBP_MainMenu_C_InitMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyProfile_K2Node_ComponentBoundEvent_103_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyProfile_K2Node_ComponentBoundEvent_103_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyProfile_K2Node_ComponentBoundEvent_103_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyProfile_K2Node_ComponentBoundEvent_103_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySettings_K2Node_ComponentBoundEvent_85_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodySettings_K2Node_ComponentBoundEvent_85_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySettings_K2Node_ComponentBoundEvent_85_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodySettings_K2Node_ComponentBoundEvent_85_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyLocalGame_K2Node_ComponentBoundEvent_76_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyLocalGame_K2Node_ComponentBoundEvent_76_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyLocalGame_K2Node_ComponentBoundEvent_76_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyLocalGame_K2Node_ComponentBoundEvent_76_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnActiveClaimSetFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_C::OnActiveClaimSetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnActiveClaimSetFocus");
		
		UBP_MainMenu_C_OnActiveClaimSetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyServerBrowser_K2Node_ComponentBoundEvent_70_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyServerBrowser_K2Node_ComponentBoundEvent_70_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyServerBrowser_K2Node_ComponentBoundEvent_70_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyServerBrowser_K2Node_ComponentBoundEvent_70_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_65_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_65_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_65_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_65_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Destruct");
		
		UBP_MainMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySingleplayerTemp_K2Node_ComponentBoundEvent_64_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodySingleplayerTemp_K2Node_ComponentBoundEvent_64_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySingleplayerTemp_K2Node_ComponentBoundEvent_64_OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodySingleplayerTemp_K2Node_ComponentBoundEvent_64_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_21_OnHoveredParty__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_21_OnHoveredParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_21_OnHoveredParty__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_21_OnHoveredParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_22_OnUnhoveredParty__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_22_OnUnhoveredParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_22_OnUnhoveredParty__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_22_OnUnhoveredParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_23_OnHoverPartyMember__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_23_OnHoverPartyMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_23_OnHoverPartyMember__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_23_OnHoverPartyMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_24_OnUnhoverPartyMember__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_24_OnUnhoverPartyMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_24_OnUnhoverPartyMember__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_24_OnUnhoverPartyMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_25_OnLeaveFromParty__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_25_OnLeaveFromParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_25_OnLeaveFromParty__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MenuPartyWidget_K2Node_ComponentBoundEvent_25_OnLeaveFromParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_105_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_105_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_105_OnPressed__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_105_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_3_OnOpenServerBrowser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_C::BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_3_OnOpenServerBrowser__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_3_OnOpenServerBrowser__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodyMultiplayer_K2Node_ComponentBoundEvent_3_OnOpenServerBrowser__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MainMenu_Main_K2Node_ComponentBoundEvent_1_OnMenuPageSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::BndEvt__BP_MainMenu_Main_K2Node_ComponentBoundEvent_1_OnMenuPageSelected__DelegateSignature(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MainMenu_Main_K2Node_ComponentBoundEvent_1_OnMenuPageSelected__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BP_MainMenu_Main_K2Node_ComponentBoundEvent_1_OnMenuPageSelected__DelegateSignature_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Construct");
		
		UBP_MainMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySettings_K2Node_ComponentBoundEvent_25_OnShowLanguageSelect__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShown                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::BndEvt__BodySettings_K2Node_ComponentBoundEvent_25_OnShowLanguageSelect__DelegateSignature(bool bShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__BodySettings_K2Node_ComponentBoundEvent_25_OnShowLanguageSelect__DelegateSignature");
		
		UBP_MainMenu_C_BndEvt__BodySettings_K2Node_ComponentBoundEvent_25_OnShowLanguageSelect__DelegateSignature_Params params {};
		params.bShown = bShown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnPartyLicenseToggled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHasOpened                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::OnPartyLicenseToggled(bool bHasOpened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnPartyLicenseToggled");
		
		UBP_MainMenu_C_OnPartyLicenseToggled_Params params {};
		params.bHasOpened = bHasOpened;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnToggleMpLicense
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHasOpened                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::OnToggleMpLicense(bool bHasOpened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnToggleMpLicense");
		
		UBP_MainMenu_C_OnToggleMpLicense_Params params {};
		params.bHasOpened = bHasOpened;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnPlatformConnectionStatusChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bConnected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_C::OnPlatformConnectionStatusChanged(bool bConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnPlatformConnectionStatusChanged");
		
		UBP_MainMenu_C_OnPlatformConnectionStatusChanged_Params params {};
		params.bConnected = bConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_C::ExecuteUbergraph_BP_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu");
		
		UBP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu.BP_MainMenu_C");
		return ptr;
	}

}


