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
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_Scoreboard_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnAnalogValueChanged");
		
		UBP_Widget_Scoreboard_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGamepadSelectButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_C::UpdateGamepadSelectButtonVisibility(bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGamepadSelectButtonVisibility");
		
		UBP_Widget_Scoreboard_C_UpdateGamepadSelectButtonVisibility_Params params {};
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_Scoreboard_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnKeyUp");
		
		UBP_Widget_Scoreboard_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetFormatText
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFirstElement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FText UBP_Widget_Scoreboard_C::GetFormatText(bool bFirstElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetFormatText");
		
		UBP_Widget_Scoreboard_C_GetFormatText_Params params {};
		params.bFirstElement = bFirstElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_Widget_Scoreboard_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnCustomNavigation");
		
		UBP_Widget_Scoreboard_C_OnCustomNavigation_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_Scoreboard_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnKeyDown");
		
		UBP_Widget_Scoreboard_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Widget_Scoreboard_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnFocusReceived");
		
		UBP_Widget_Scoreboard_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGameModeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::UpdateGameModeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGameModeText");
		
		UBP_Widget_Scoreboard_C_UpdateGameModeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.HighlightPlayerStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_C::HighlightPlayerStatus(class AINSPlayerState* Player, bool Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.HighlightPlayerStatus");
		
		UBP_Widget_Scoreboard_C_HighlightPlayerStatus_Params params {};
		params.Player = Player;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateScoreboardConfig
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreboardConfig                           Config                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Widget_Scoreboard_C::UpdateScoreboardConfig(const struct FScoreboardConfig& Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateScoreboardConfig");
		
		UBP_Widget_Scoreboard_C_UpdateScoreboardConfig_Params params {};
		params.Config = Config;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGameState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSGameState*                               GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_C::UpdateGameState(class AINSGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.UpdateGameState");
		
		UBP_Widget_Scoreboard_C_UpdateGameState_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetRightTeamBottomBorderVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Widget_Scoreboard_C::GetRightTeamBottomBorderVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetRightTeamBottomBorderVisibility");
		
		UBP_Widget_Scoreboard_C_GetRightTeamBottomBorderVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetLeftTeamBottomBorderVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Widget_Scoreboard_C::GetLeftTeamBottomBorderVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetLeftTeamBottomBorderVisibility");
		
		UBP_Widget_Scoreboard_C_GetLeftTeamBottomBorderVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetOrderText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_Widget_Scoreboard_C::GetOrderText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetOrderText");
		
		UBP_Widget_Scoreboard_C_GetOrderText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetSpectatorLabelVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Widget_Scoreboard_C::GetSpectatorLabelVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.GetSpectatorLabelVisibility");
		
		UBP_Widget_Scoreboard_C_GetSpectatorLabelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__Button_377_K2Node_ComponentBoundEvent_67_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::BndEvt__Button_377_K2Node_ComponentBoundEvent_67_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__Button_377_K2Node_ComponentBoundEvent_67_OnButtonPressedEvent__DelegateSignature");
		
		UBP_Widget_Scoreboard_C_BndEvt__Button_377_K2Node_ComponentBoundEvent_67_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnScoreboardShown
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::OnScoreboardShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnScoreboardShown");
		
		UBP_Widget_Scoreboard_C_OnScoreboardShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoUpdateGameState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AINSGameState*                               GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_C::DoUpdateGameState(class AINSGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoUpdateGameState");
		
		UBP_Widget_Scoreboard_C_DoUpdateGameState_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoUpdateGameModeText
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::DoUpdateGameModeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoUpdateGameModeText");
		
		UBP_Widget_Scoreboard_C_DoUpdateGameModeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoBindTacticalMapPawnHowerStatusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::DoBindTacticalMapPawnHowerStatusChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.DoBindTacticalMapPawnHowerStatusChanged");
		
		UBP_Widget_Scoreboard_C_DoBindTacticalMapPawnHowerStatusChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.Construct");
		
		UBP_Widget_Scoreboard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnScoreboardHidden
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::OnScoreboardHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.OnScoreboardHidden");
		
		UBP_Widget_Scoreboard_C_OnScoreboardHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature");
		
		UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_C::BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature");
		
		UBP_Widget_Scoreboard_C_BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.ExecuteUbergraph_BP_Widget_Scoreboard
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_C::ExecuteUbergraph_BP_Widget_Scoreboard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard.BP_Widget_Scoreboard_C.ExecuteUbergraph_BP_Widget_Scoreboard");
		
		UBP_Widget_Scoreboard_C_ExecuteUbergraph_BP_Widget_Scoreboard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_Scoreboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_Scoreboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_Scoreboard.BP_Widget_Scoreboard_C");
		return ptr;
	}

}


