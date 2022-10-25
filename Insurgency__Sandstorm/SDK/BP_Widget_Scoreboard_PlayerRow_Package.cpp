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
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_Scoreboard_PlayerRow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnKeyDown");
		
		UBP_Widget_Scoreboard_PlayerRow_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Widget_Scoreboard_PlayerRow_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnFocusReceived");
		
		UBP_Widget_Scoreboard_PlayerRow_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateCompetitiveObjectiveVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::UpdateCompetitiveObjectiveVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateCompetitiveObjectiveVisibility");
		
		UBP_Widget_Scoreboard_PlayerRow_C_UpdateCompetitiveObjectiveVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BoolToVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::BoolToVisibility(bool Show, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BoolToVisibility");
		
		UBP_Widget_Scoreboard_PlayerRow_C_BoolToVisibility_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateColumnVisibilityFromScoreboardConfig
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::UpdateColumnVisibilityFromScoreboardConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateColumnVisibilityFromScoreboardConfig");
		
		UBP_Widget_Scoreboard_PlayerRow_C_UpdateColumnVisibilityFromScoreboardConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OpenPlayerMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::OpenPlayerMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OpenPlayerMenu");
		
		UBP_Widget_Scoreboard_PlayerRow_C_OpenPlayerMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_Widget_Scoreboard_PlayerRow_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnMouseButtonDown");
		
		UBP_Widget_Scoreboard_PlayerRow_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.GetControllerFromState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AINSPlayerController*                        PlayerController                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::GetControllerFromState(class AINSPlayerController** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.GetControllerFromState");
		
		UBP_Widget_Scoreboard_PlayerRow_C_GetControllerFromState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::BndEvt__MuteButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Widget_Scoreboard_PlayerRow_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnHoverStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::OnHoverStateChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnHoverStateChange");
		
		UBP_Widget_Scoreboard_PlayerRow_C_OnHoverStateChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateDeveloperStatus
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDeveloperStatus                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::UpdateDeveloperStatus(class AINSPlayerState* InPlayerState, bool bDeveloperStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateDeveloperStatus");
		
		UBP_Widget_Scoreboard_PlayerRow_C_UpdateDeveloperStatus_Params params {};
		params.InPlayerState = InPlayerState;
		params.bDeveloperStatus = bDeveloperStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdatePlayerExperience
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewExperience                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::UpdatePlayerExperience(class AINSPlayerState* InPlayerState, int32_t NewExperience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdatePlayerExperience");
		
		UBP_Widget_Scoreboard_PlayerRow_C_UpdatePlayerExperience_Params params {};
		params.InPlayerState = InPlayerState;
		params.NewExperience = NewExperience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.DoSetDefaultsToPlayerBadge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::DoSetDefaultsToPlayerBadge(class AINSPlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.DoSetDefaultsToPlayerBadge");
		
		UBP_Widget_Scoreboard_PlayerRow_C_DoSetDefaultsToPlayerBadge_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateExtendedColumnVisiblity
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::UpdateExtendedColumnVisiblity(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.UpdateExtendedColumnVisiblity");
		
		UBP_Widget_Scoreboard_PlayerRow_C_UpdateExtendedColumnVisiblity_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.Construct");
		
		UBP_Widget_Scoreboard_PlayerRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnFocusLost");
		
		UBP_Widget_Scoreboard_PlayerRow_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnClickedMuteButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::OnClickedMuteButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.OnClickedMuteButton");
		
		UBP_Widget_Scoreboard_PlayerRow_C_OnClickedMuteButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerRow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerRow_C::ExecuteUbergraph_BP_Widget_Scoreboard_PlayerRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerRow");
		
		UBP_Widget_Scoreboard_PlayerRow_C_ExecuteUbergraph_BP_Widget_Scoreboard_PlayerRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_Scoreboard_PlayerRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_Scoreboard_PlayerRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C");
		return ptr;
	}

}


