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
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.GetTimeToNextRoundTimeAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentRoundTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeToNextTimeReminder                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::GetTimeToNextRoundTimeAlert(float CurrentRoundTime, float* TimeToNextTimeReminder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.GetTimeToNextRoundTimeAlert");
		
		UWBP_WatchApp_C_GetTimeToNextRoundTimeAlert_Params params {};
		params.CurrentRoundTime = CurrentRoundTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeToNextTimeReminder != nullptr)
			*TimeToNextTimeReminder = params.TimeToNextTimeReminder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.ClearAlertAndStopPulse
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::ClearAlertAndStopPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.ClearAlertAndStopPulse");
		
		UWBP_WatchApp_C_ClearAlertAndStopPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.SetAlertTextAndStartPulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AlertText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::SetAlertTextAndStartPulse(const class FText& AlertText, const struct FLinearColor& InColorAndOpacity, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.SetAlertTextAndStartPulse");
		
		UWBP_WatchApp_C_SetAlertTextAndStartPulse_Params params {};
		params.AlertText = AlertText;
		params.InColorAndOpacity = InColorAndOpacity;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.GetAlertPulseVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_WatchApp_C::GetAlertPulseVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.GetAlertPulseVis");
		
		UWBP_WatchApp_C_GetAlertPulseVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.GetDistanceReadingText
	 * 		Flags  -> ()
	 */
	class FText UWBP_WatchApp_C::GetDistanceReadingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.GetDistanceReadingText");
		
		UWBP_WatchApp_C_GetDistanceReadingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.GetObjectiveMarkerVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_WatchApp_C::GetObjectiveMarkerVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.GetObjectiveMarkerVis");
		
		UWBP_WatchApp_C_GetObjectiveMarkerVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.Tick");
		
		UWBP_WatchApp_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.Construct");
		
		UWBP_WatchApp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnObjectiveLocationChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnObjectiveLocationChanged(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnObjectiveLocationChanged");
		
		UWBP_WatchApp_C_OnObjectiveLocationChanged_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.UpdateBearingAndDistance
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::UpdateBearingAndDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.UpdateBearingAndDistance");
		
		UWBP_WatchApp_C_UpdateBearingAndDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnAlertLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAlertLevel                                        NewAlertLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnAlertLevelChanged(EAlertLevel NewAlertLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnAlertLevelChanged");
		
		UWBP_WatchApp_C_OnAlertLevelChanged_Params params {};
		params.NewAlertLevel = NewAlertLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnWatchConfigChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnWatchConfigChanged(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnWatchConfigChanged");
		
		UWBP_WatchApp_C_OnWatchConfigChanged_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnWatchModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnWatchModeChanged(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnWatchModeChanged");
		
		UWBP_WatchApp_C_OnWatchModeChanged_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.BindDelegates
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::BindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.BindDelegates");
		
		UWBP_WatchApp_C_BindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnCaptureStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnCaptureStateChanged(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnCaptureStateChanged");
		
		UWBP_WatchApp_C_OnCaptureStateChanged_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnCaptureZoneChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnCaptureZoneChanged(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnCaptureZoneChanged");
		
		UWBP_WatchApp_C_OnCaptureZoneChanged_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.Timer_UpdateBearingAndDistance
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::Timer_UpdateBearingAndDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.Timer_UpdateBearingAndDistance");
		
		UWBP_WatchApp_C_Timer_UpdateBearingAndDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.UpdateTimeText
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::UpdateTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.UpdateTimeText");
		
		UWBP_WatchApp_C_UpdateTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.Destruct");
		
		UWBP_WatchApp_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnRoundTimeAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnRoundTimeAlert(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnRoundTimeAlert");
		
		UWBP_WatchApp_C_OnRoundTimeAlert_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.RestoreWatchModeAfterAlert
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::RestoreWatchModeAfterAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.RestoreWatchModeAfterAlert");
		
		UWBP_WatchApp_C_RestoreWatchModeAfterAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.PlayInRangeAlertSound
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::PlayInRangeAlertSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.PlayInRangeAlertSound");
		
		UWBP_WatchApp_C_PlayInRangeAlertSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.PlayCapturingAlertSound
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::PlayCapturingAlertSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.PlayCapturingAlertSound");
		
		UWBP_WatchApp_C_PlayCapturingAlertSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.PlayRoundTimeRemainingAlertSound
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::PlayRoundTimeRemainingAlertSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.PlayRoundTimeRemainingAlertSound");
		
		UWBP_WatchApp_C_PlayRoundTimeRemainingAlertSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.UpdateDistanceText
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::UpdateDistanceText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.UpdateDistanceText");
		
		UWBP_WatchApp_C_UpdateDistanceText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.ScheduleNextRoundTimeAlert
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::ScheduleNextRoundTimeAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.ScheduleNextRoundTimeAlert");
		
		UWBP_WatchApp_C_ScheduleNextRoundTimeAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.SendRoundTimeAlert
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::SendRoundTimeAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.SendRoundTimeAlert");
		
		UWBP_WatchApp_C_SendRoundTimeAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnRoundStageSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::OnRoundStageSet(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnRoundStageSet");
		
		UWBP_WatchApp_C_OnRoundStageSet_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.OnProximityAlert
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_C::OnProximityAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.OnProximityAlert");
		
		UWBP_WatchApp_C_OnProximityAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp.WBP_WatchApp_C.ExecuteUbergraph_WBP_WatchApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_C::ExecuteUbergraph_WBP_WatchApp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp.WBP_WatchApp_C.ExecuteUbergraph_WBP_WatchApp");
		
		UWBP_WatchApp_C_ExecuteUbergraph_WBP_WatchApp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_WatchApp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_WatchApp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WatchApp.WBP_WatchApp_C");
		return ptr;
	}

}


