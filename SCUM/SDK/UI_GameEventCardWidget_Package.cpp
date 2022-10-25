/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_TeamSwitchFee_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text");
		
		UUI_GameEventCardWidget_C_Get_TeamSwitchFee_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_Cooldown_Throbber_Visiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity");
		
		UUI_GameEventCardWidget_C_Get_Cooldown_Throbber_Visiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_EntryFeeTag_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text");
		
		UUI_GameEventCardWidget_C_Get_EntryFeeTag_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_Buttons_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility");
		
		UUI_GameEventCardWidget_C_Get_Buttons_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_GameEventCardWidget_C::Get_Screenshot_Brush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush");
		
		UUI_GameEventCardWidget_C_Get_Screenshot_Brush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanJoin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GameEventCardWidget_C::CanJoinTeam(int32_t Team, bool* CanJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam");
		
		UUI_GameEventCardWidget_C_CanJoinTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanJoin != nullptr)
			*CanJoin = params.CanJoin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_SwitchTeamButton_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility");
		
		UUI_GameEventCardWidget_C_Get_SwitchTeamButton_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::GetJoinButtonText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText");
		
		UUI_GameEventCardWidget_C_GetJoinButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasEnoughFamePoints                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GameEventCardWidget_C::CheckPrerequisites(bool* HasEnoughFamePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites");
		
		UUI_GameEventCardWidget_C_CheckPrerequisites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasEnoughFamePoints != nullptr)
			*HasEnoughFamePoints = params.HasEnoughFamePoints;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlayerParticipatingInThisEvent                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GameEventCardWidget_C::IsPlayerRegisteredForThisEvent(bool* IsPlayerParticipatingInThisEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent");
		
		UUI_GameEventCardWidget_C_IsPlayerRegisteredForThisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlayerParticipatingInThisEvent != nullptr)
			*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            preferredTeam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanJoin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GameEventCardWidget_C::CanPlayerJoin(int32_t preferredTeam, bool* CanJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin");
		
		UUI_GameEventCardWidget_C_CanPlayerJoin_Params params {};
		params.preferredTeam = preferredTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanJoin != nullptr)
			*CanJoin = params.CanJoin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinDisabledMsgVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility");
		
		UUI_GameEventCardWidget_C_Get_JoinDisabledMsgVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_EventName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName");
		
		UUI_GameEventCardWidget_C_Get_EventName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlayerParticipatingInThisEvent                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GameEventCardWidget_C::IsPlayerParticipatingInThisEvent(bool* IsPlayerParticipatingInThisEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent");
		
		UUI_GameEventCardWidget_C_IsPlayerParticipatingInThisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlayerParticipatingInThisEvent != nullptr)
			*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinRedButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility");
		
		UUI_GameEventCardWidget_C_Get_JoinRedButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinBlueButton_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility");
		
		UUI_GameEventCardWidget_C_Get_JoinBlueButton_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_TimeTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility");
		
		UUI_GameEventCardWidget_C_Get_TimeTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_LeaveButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility");
		
		UUI_GameEventCardWidget_C_Get_LeaveButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility");
		
		UUI_GameEventCardWidget_C_Get_JoinButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_NumPlayersText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText");
		
		UUI_GameEventCardWidget_C_Get_NumPlayersText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_RoundsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText");
		
		UUI_GameEventCardWidget_C_Get_RoundsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_TimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText");
		
		UUI_GameEventCardWidget_C_Get_TimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_StatusText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText");
		
		UUI_GameEventCardWidget_C_Get_StatusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText
	 * 		Flags  -> ()
	 */
	class FText UUI_GameEventCardWidget_C::Get_LocationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText");
		
		UUI_GameEventCardWidget_C_Get_LocationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_GameEventCardWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_GameEventCardWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GameEventCardWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct");
		
		UUI_GameEventCardWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_GameEventCardWidget_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature");
		
		UUI_GameEventCardWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_GameEventCardWidget_C::BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature");
		
		UUI_GameEventCardWidget_C_BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_GameEventCardWidget_C::BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature");
		
		UUI_GameEventCardWidget_C_BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_GameEventCardWidget_C::BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature");
		
		UUI_GameEventCardWidget_C_BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventCardWidget_C::ExecuteUbergraph_UI_GameEventCardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget");
		
		UUI_GameEventCardWidget_C_ExecuteUbergraph_UI_GameEventCardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventCardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventCardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventCardWidget.UI_GameEventCardWidget_C");
		return ptr;
	}

}


