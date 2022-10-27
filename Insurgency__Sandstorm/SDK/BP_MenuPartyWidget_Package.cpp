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
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.HasServicesLinked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MenuPartyWidget_C::HasServicesLinked(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.HasServicesLinked");
		
		UBP_MenuPartyWidget_C_HasServicesLinked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.CreateParty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::CreateParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.CreateParty");
		
		UBP_MenuPartyWidget_C_CreateParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnServiceLoginComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        InServiceName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuPartyWidget_C::OnServiceLoginComplete(bool bSuccessful, const class FName& InServiceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnServiceLoginComplete");
		
		UBP_MenuPartyWidget_C_OnServiceLoginComplete_Params params {};
		params.bSuccessful = bSuccessful;
		params.InServiceName = InServiceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BP_MenuPartyWidget_AutoGenFunc2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc2");
		
		UBP_MenuPartyWidget_C_BP_MenuPartyWidget_AutoGenFunc2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MenuPartyWidget_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnCustomNavigation");
		
		UBP_MenuPartyWidget_C_OnCustomNavigation_Params params {};
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
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.CreateMapDownloadingDialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::CreateMapDownloadingDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.CreateMapDownloadingDialog");
		
		UBP_MenuPartyWidget_C_CreateMapDownloadingDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Get_IconLockImage_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MenuPartyWidget_C::Get_IconLockImage_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Get_IconLockImage_Visibility_1");
		
		UBP_MenuPartyWidget_C_Get_IconLockImage_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BP_MenuPartyWidget_AutoGenFunc1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc1");
		
		UBP_MenuPartyWidget_C_BP_MenuPartyWidget_AutoGenFunc1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateLicenseWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::UpdateLicenseWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateLicenseWidget");
		
		UBP_MenuPartyWidget_C_UpdateLicenseWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnConfirmedRestrictions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnConfirmedRestrictions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnConfirmedRestrictions");
		
		UBP_MenuPartyWidget_C_OnConfirmedRestrictions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateRestrictionWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InConfirmableText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MenuPartyWidget_C::UpdateRestrictionWidget(const class FText& InConfirmableText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateRestrictionWidget");
		
		UBP_MenuPartyWidget_C_UpdateRestrictionWidget_Params params {};
		params.InConfirmableText = InConfirmableText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateWaitingWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::UpdateWaitingWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateWaitingWidget");
		
		UBP_MenuPartyWidget_C_UpdateWaitingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BP_MenuPartyWidget_AutoGenFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc");
		
		UBP_MenuPartyWidget_C_BP_MenuPartyWidget_AutoGenFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MenuPartyWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnKeyDown");
		
		UBP_MenuPartyWidget_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyMemberSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      UserNetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MenuPartyWidget_C::OnPartyMemberSelected(bool bIsLocalPlayer, bool bIsLeader, const class FString& UserNetId, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyMemberSelected");
		
		UBP_MenuPartyWidget_C_OnPartyMemberSelected_Params params {};
		params.bIsLocalPlayer = bIsLocalPlayer;
		params.bIsLeader = bIsLeader;
		params.UserNetId = UserNetId;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ChangeButtonsVisibilityForPlatform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::ChangeButtonsVisibilityForPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ChangeButtonsVisibilityForPlatform");
		
		UBP_MenuPartyWidget_C_ChangeButtonsVisibilityForPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MenuPartyWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnFocusReceived");
		
		UBP_MenuPartyWidget_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetCreateButtonForegroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_MenuPartyWidget_C::GetCreateButtonForegroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetCreateButtonForegroundColor");
		
		UBP_MenuPartyWidget_C_GetCreateButtonForegroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetCreateButtonBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_MenuPartyWidget_C::GetCreateButtonBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetCreateButtonBackgroundColor");
		
		UBP_MenuPartyWidget_C_GetCreateButtonBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetInviteButtonForegroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_MenuPartyWidget_C::GetInviteButtonForegroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetInviteButtonForegroundColor");
		
		UBP_MenuPartyWidget_C_GetInviteButtonForegroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetInviteButtonBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_MenuPartyWidget_C::GetInviteButtonBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetInviteButtonBackgroundColor");
		
		UBP_MenuPartyWidget_C_GetInviteButtonBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ClearParty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::ClearParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ClearParty");
		
		UBP_MenuPartyWidget_C_ClearParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.PopulatePartyFromState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FINSPartyState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MenuPartyWidget_C::PopulatePartyFromState(const struct FINSPartyState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.PopulatePartyFromState");
		
		UBP_MenuPartyWidget_C_PopulatePartyFromState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyStateUpdate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FINSPartyState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPartySettings                              Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MenuPartyWidget_C::OnPartyStateUpdate(struct FINSPartyState* State, struct FPartySettings* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyStateUpdate");
		
		UBP_MenuPartyWidget_C_OnPartyStateUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		if (Settings != nullptr)
			*Settings = params.Settings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnPartyLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyLeft");
		
		UBP_MenuPartyWidget_C_OnPartyLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyJoined
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FINSPartyState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MenuPartyWidget_C::OnPartyJoined(struct FINSPartyState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyJoined");
		
		UBP_MenuPartyWidget_C_OnPartyJoined_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MenuPartyWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.PreConstruct");
		
		UBP_MenuPartyWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Construct");
		
		UBP_MenuPartyWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_7_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_7_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_7_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_7_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_8_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_8_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_8_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_8_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLeaveParty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnLeaveParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLeaveParty");
		
		UBP_MenuPartyWidget_C_OnLeaveParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPlayerPromoted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserNetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MenuPartyWidget_C::OnPlayerPromoted(const class FString& UserNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPlayerPromoted");
		
		UBP_MenuPartyWidget_C_OnPlayerPromoted_Params params {};
		params.UserNetId = UserNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnContextFocusLost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnContextFocusLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnContextFocusLost");
		
		UBP_MenuPartyWidget_C_OnContextFocusLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_MenuPartyWidget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnRemovedFromFocusPath");
		
		UBP_MenuPartyWidget_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateWaitingDialogInfoBP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::UpdateWaitingDialogInfoBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateWaitingDialogInfoBP");
		
		UBP_MenuPartyWidget_C_UpdateWaitingDialogInfoBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateRestrictionDialogInfoBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InConfirmableText                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MenuPartyWidget_C::UpdateRestrictionDialogInfoBP(const class FText& InConfirmableText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateRestrictionDialogInfoBP");
		
		UBP_MenuPartyWidget_C_UpdateRestrictionDialogInfoBP_Params params {};
		params.InConfirmableText = InConfirmableText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPlayerKicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      User_Net_Id                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_MenuPartyWidget_C::OnPlayerKicked(const class FString& User_Net_Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPlayerKicked");
		
		UBP_MenuPartyWidget_C_OnPlayerKicked_Params params {};
		params.User_Net_Id = User_Net_Id;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_MenuPartyWidget_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnFocusLost");
		
		UBP_MenuPartyWidget_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateLicenseAgreementDialogBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::UpdateLicenseAgreementDialogBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateLicenseAgreementDialogBP");
		
		UBP_MenuPartyWidget_C_UpdateLicenseAgreementDialogBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_MenuPartyWidget_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnAddedToFocusPath");
		
		UBP_MenuPartyWidget_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnConsoleContextMenuClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnConsoleContextMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnConsoleContextMenuClosed");
		
		UBP_MenuPartyWidget_C_OnConsoleContextMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuPartyWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Tick");
		
		UBP_MenuPartyWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.DelayForFocusSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::DelayForFocusSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.DelayForFocusSound");
		
		UBP_MenuPartyWidget_C_DelayForFocusSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateReturningDialogInfoBP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::UpdateReturningDialogInfoBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateReturningDialogInfoBP");
		
		UBP_MenuPartyWidget_C_UpdateReturningDialogInfoBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MenuPartyWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnMouseLeave");
		
		UBP_MenuPartyWidget_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_12_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_12_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_12_OnUnhovered__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_12_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_13_OnLeaveParty__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_13_OnLeaveParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_13_OnLeaveParty__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_13_OnLeaveParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__LeavePartyBtn_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__LeavePartyBtn_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__LeavePartyBtn_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__LeavePartyBtn_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_INSSwitcher_K2Node_ComponentBoundEvent_10_OnPlatformSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SelectedText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MenuPartyWidget_C::BndEvt__BP_INSSwitcher_K2Node_ComponentBoundEvent_10_OnPlatformSelected__DelegateSignature(const class FText& SelectedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_INSSwitcher_K2Node_ComponentBoundEvent_10_OnPlatformSelected__DelegateSignature");
		
		UBP_MenuPartyWidget_C_BndEvt__BP_INSSwitcher_K2Node_ComponentBoundEvent_10_OnPlatformSelected__DelegateSignature_Params params {};
		params.SelectedText = SelectedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyCreatedByUser
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnPartyCreatedByUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyCreatedByUser");
		
		UBP_MenuPartyWidget_C_OnPartyCreatedByUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLicenseCanceled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnLicenseCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLicenseCanceled");
		
		UBP_MenuPartyWidget_C_OnLicenseCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLicenseConfirmed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnLicenseConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLicenseConfirmed");
		
		UBP_MenuPartyWidget_C_OnLicenseConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ExecuteUbergraph_BP_MenuPartyWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuPartyWidget_C::ExecuteUbergraph_BP_MenuPartyWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ExecuteUbergraph_BP_MenuPartyWidget");
		
		UBP_MenuPartyWidget_C_ExecuteUbergraph_BP_MenuPartyWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLeaveFromParty__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnLeaveFromParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLeaveFromParty__DelegateSignature");
		
		UBP_MenuPartyWidget_C_OnLeaveFromParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhoverPartyMember__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnUnhoverPartyMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhoverPartyMember__DelegateSignature");
		
		UBP_MenuPartyWidget_C_OnUnhoverPartyMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHoverPartyMember__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnHoverPartyMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHoverPartyMember__DelegateSignature");
		
		UBP_MenuPartyWidget_C_OnHoverPartyMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhoveredParty__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnUnhoveredParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhoveredParty__DelegateSignature");
		
		UBP_MenuPartyWidget_C_OnUnhoveredParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHoveredParty__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnHoveredParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHoveredParty__DelegateSignature");
		
		UBP_MenuPartyWidget_C_OnHoveredParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhovered__DelegateSignature");
		
		UBP_MenuPartyWidget_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MenuPartyWidget_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHovered__DelegateSignature");
		
		UBP_MenuPartyWidget_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenuPartyWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenuPartyWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MenuPartyWidget.BP_MenuPartyWidget_C");
		return ptr;
	}

}


