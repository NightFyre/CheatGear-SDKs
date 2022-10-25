/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.SetButtonTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 NewTint                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_MissionSummary_C::SetButtonTint(class UButton* NewParam, const struct FSlateColor& NewTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.SetButtonTint");
		
		UWBP_MissionSummary_C_SetButtonTint_Params params {};
		params.NewParam = NewParam;
		params.NewTint = NewTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.GetNextTabIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NextTabIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MissionSummary_C::GetNextTabIndex(int32_t* NextTabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.GetNextTabIndex");
		
		UWBP_MissionSummary_C_GetNextTabIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextTabIndex != nullptr)
			*NextTabIndex = params.NextTabIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_3
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_MissionSummary_C::GetVisibility_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_3");
		
		UWBP_MissionSummary_C_GetVisibility_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_2
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_MissionSummary_C::GetVisibility_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_2");
		
		UWBP_MissionSummary_C_GetVisibility_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_MissionSummary_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_1");
		
		UWBP_MissionSummary_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.Get_SettingsChangeTab_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_MissionSummary_C::Get_SettingsChangeTab_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.Get_SettingsChangeTab_Visibility_1");
		
		UWBP_MissionSummary_C_Get_SettingsChangeTab_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.GetUseTabs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseTabs                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MissionSummary_C::GetUseTabs(bool* bUseTabs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.GetUseTabs");
		
		UWBP_MissionSummary_C_GetUseTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUseTabs != nullptr)
			*bUseTabs = params.bUseTabs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.HighlightCurrentTabButton
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::HighlightCurrentTabButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.HighlightCurrentTabButton");
		
		UWBP_MissionSummary_C_HighlightCurrentTabButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_MissionSummary_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.OnMouseButtonUp");
		
		UWBP_MissionSummary_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_MissionSummary_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.OnMouseButtonDown");
		
		UWBP_MissionSummary_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_MissionSummary_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.OnKeyUp");
		
		UWBP_MissionSummary_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_MissionSummary_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.OnKeyDown");
		
		UWBP_MissionSummary_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.SetMissionTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MissionSummary_C::SetMissionTime(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.SetMissionTime");
		
		UWBP_MissionSummary_C_SetMissionTime_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.Construct");
		
		UWBP_MissionSummary_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BindGameStats
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BindGameStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BindGameStats");
		
		UWBP_MissionSummary_C_BindGameStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.OnGameStatsUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MissionSummary_C::OnGameStatsUpdated_Event_1(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.OnGameStatsUpdated_Event_1");
		
		UWBP_MissionSummary_C_OnGameStatsUpdated_Event_1_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.ProcessResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResultValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MissionSummary_C::ProcessResult(const class FString& ResultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.ProcessResult");
		
		UWBP_MissionSummary_C_ProcessResult_Params params {};
		params.ResultValue = ResultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.OnPlayerReadyRoomStatusChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MissionSummary_C::OnPlayerReadyRoomStatusChanged_Event_1(class AGBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.OnPlayerReadyRoomStatusChanged_Event_1");
		
		UWBP_MissionSummary_C_OnPlayerReadyRoomStatusChanged_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BeginFadingIn
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BeginFadingIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BeginFadingIn");
		
		UWBP_MissionSummary_C_BeginFadingIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BeginFadeOut
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BeginFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BeginFadeOut");
		
		UWBP_MissionSummary_C_BeginFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BindToPlayerState
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BindToPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BindToPlayerState");
		
		UWBP_MissionSummary_C_BindToPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.ResetTabAdvanceTimer
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::ResetTabAdvanceTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.ResetTabAdvanceTimer");
		
		UWBP_MissionSummary_C_ResetTabAdvanceTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.UserWantsToCloseAAR
	 * 		Flags  -> ()
	 */
	void UWBP_MissionSummary_C::UserWantsToCloseAAR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.UserWantsToCloseAAR");
		
		UWBP_MissionSummary_C_UserWantsToCloseAAR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MissionSummary.WBP_MissionSummary_C.ExecuteUbergraph_WBP_MissionSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MissionSummary_C::ExecuteUbergraph_WBP_MissionSummary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MissionSummary.WBP_MissionSummary_C.ExecuteUbergraph_WBP_MissionSummary");
		
		UWBP_MissionSummary_C_ExecuteUbergraph_WBP_MissionSummary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MissionSummary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MissionSummary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MissionSummary.WBP_MissionSummary_C");
		return ptr;
	}

}


