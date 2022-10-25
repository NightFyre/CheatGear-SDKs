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
	 * 		Name   -> Function BP_GameState.BP_GameState_C.GetTimeToNextTimeReminder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentRoundTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeToNextTimeReminder                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_C::GetTimeToNextTimeReminder(float CurrentRoundTime, float* TimeToNextTimeReminder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.GetTimeToNextTimeReminder");
		
		ABP_GameState_C_GetTimeToNextTimeReminder_Params params {};
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
	 * 		Name   -> Function BP_GameState.BP_GameState_C.GetRoundStageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void ABP_GameState_C::GetRoundStageText(class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.GetRoundStageText");
		
		ABP_GameState_C_GetRoundStageText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.GetSpectatorOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             OutOptions                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_GameState_C::GetSpectatorOptions(TArray<class UWidget*>* OutOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.GetSpectatorOptions");
		
		ABP_GameState_C_GetSpectatorOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOptions != nullptr)
			*OutOptions = params.OutOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.OnVoteStartedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                VoteStarter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            VoteTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_C::OnVoteStartedEvent(class APlayerState* VoteStarter, const class FString& Command, const class FString& Params, int32_t VoteTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnVoteStartedEvent");
		
		ABP_GameState_C_OnVoteStartedEvent_Params params {};
		params.VoteStarter = VoteStarter;
		params.Command = Command;
		params.Params = Params;
		params.VoteTime = VoteTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.OnVoteCountUpdatedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            YesVotes                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NoVotes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_C::OnVoteCountUpdatedEvent(int32_t YesVotes, int32_t NoVotes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnVoteCountUpdatedEvent");
		
		ABP_GameState_C_OnVoteCountUpdatedEvent_Params params {};
		params.YesVotes = YesVotes;
		params.NoVotes = NoVotes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.OnVoteEndedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPassed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NextVoteDelay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_C::OnVoteEndedEvent(bool bPassed, int32_t NextVoteDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnVoteEndedEvent");
		
		ABP_GameState_C_OnVoteEndedEvent_Params params {};
		params.bPassed = bPassed;
		params.NextVoteDelay = NextVoteDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.AllowVotingAgain
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::AllowVotingAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.AllowVotingAgain");
		
		ABP_GameState_C_AllowVotingAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.RoundStageSet
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::RoundStageSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.RoundStageSet");
		
		ABP_GameState_C_RoundStageSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.AddDeathOverlay
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::AddDeathOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.AddDeathOverlay");
		
		ABP_GameState_C_AddDeathOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.ShowMissionSummary
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::ShowMissionSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ShowMissionSummary");
		
		ABP_GameState_C_ShowMissionSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ReceiveBeginPlay");
		
		ABP_GameState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.BindToPlayerControllerState
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::BindToPlayerControllerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.BindToPlayerControllerState");
		
		ABP_GameState_C_BindToPlayerControllerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.OnPlayerControllerStateChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_C::OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnPlayerControllerStateChanged_Event_1");
		
		ABP_GameState_C_OnPlayerControllerStateChanged_Event_1_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.InactiveCheck
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::InactiveCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.InactiveCheck");
		
		ABP_GameState_C_InactiveCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.StartInactiveCheck
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::StartInactiveCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.StartInactiveCheck");
		
		ABP_GameState_C_StartInactiveCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.StopInactiveCheck
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::StopInactiveCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.StopInactiveCheck");
		
		ABP_GameState_C_StopInactiveCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.RefreshPlayerStats
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::RefreshPlayerStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.RefreshPlayerStats");
		
		ABP_GameState_C_RefreshPlayerStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.OnGameMessageEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        GameMessageId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_C::OnGameMessageEvent(const class FName& GameMessageId, const class FName& Type, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.OnGameMessageEvent");
		
		ABP_GameState_C_OnGameMessageEvent_Params params {};
		params.GameMessageId = GameMessageId;
		params.Type = Type;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.ShowRoundTimeAlertOnWatch
	 * 		Flags  -> ()
	 */
	void ABP_GameState_C::ShowRoundTimeAlertOnWatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ShowRoundTimeAlertOnWatch");
		
		ABP_GameState_C_ShowRoundTimeAlertOnWatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_C::ExecuteUbergraph_BP_GameState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState");
		
		ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GameState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameState.BP_GameState_C");
		return ptr;
	}

}


