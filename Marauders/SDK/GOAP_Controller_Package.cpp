/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.CheckSetGroupTargetLogic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAP_Controller_C::CheckSetGroupTargetLogic(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.CheckSetGroupTargetLogic");
		
		AGOAP_Controller_C_CheckSetGroupTargetLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Temp_ReloadedAmmo
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::Temp_ReloadedAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Temp_ReloadedAmmo");
		
		AGOAP_Controller_C_Temp_ReloadedAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Temp_RemoveAmmo
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::Temp_RemoveAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Temp_RemoveAmmo");
		
		AGOAP_Controller_C_Temp_RemoveAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.SetInitialAmmo
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::SetInitialAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.SetInitialAmmo");
		
		AGOAP_Controller_C_SetInitialAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.NewFunction_1");
		
		AGOAP_Controller_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Get Ammo Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentAmmo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasZeroAmmo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAP_Controller_C::Get_Ammo_Info(int32_t* CurrentAmmo, bool* HasZeroAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Get Ammo Info");
		
		AGOAP_Controller_C_Get_Ammo_Info_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentAmmo != nullptr)
			*CurrentAmmo = params.CurrentAmmo;
		if (HasZeroAmmo != nullptr)
			*HasZeroAmmo = params.HasZeroAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.ReSeenPlayerCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAP_Controller_C::ReSeenPlayerCooldown(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.ReSeenPlayerCooldown");
		
		AGOAP_Controller_C_ReSeenPlayerCooldown_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.CheckIfCurrentTargetAlive
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::CheckIfCurrentTargetAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.CheckIfCurrentTargetAlive");
		
		AGOAP_Controller_C_CheckIfCurrentTargetAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.WorkOutTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              SeenChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::WorkOutTarget(class ARaidCharacter* SeenChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.WorkOutTarget");
		
		AGOAP_Controller_C_WorkOutTarget_Params params {};
		params.SeenChar = SeenChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.NoTargetStalkingState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeToHuntForSeconds                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::NoTargetStalkingState(bool Reset, float TimeToHuntForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.NoTargetStalkingState");
		
		AGOAP_Controller_C_NoTargetStalkingState_Params params {};
		params.Reset = Reset;
		params.TimeToHuntForSeconds = TimeToHuntForSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.FirstSeenPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAP_Controller_C::FirstSeenPlayer(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.FirstSeenPlayer");
		
		AGOAP_Controller_C_FirstSeenPlayer_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.SetATarget_IfDifferentPersonOrCloser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              TEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::SetATarget_IfDifferentPersonOrCloser(class ARaidCharacter* TEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.SetATarget_IfDifferentPersonOrCloser");
		
		AGOAP_Controller_C_SetATarget_IfDifferentPersonOrCloser_Params params {};
		params.TEnemy = TEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.TookDamageWithoutHavingATarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAP_Controller_C::TookDamageWithoutHavingATarget(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.TookDamageWithoutHavingATarget");
		
		AGOAP_Controller_C_TookDamageWithoutHavingATarget_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.ResetLost
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::ResetLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.ResetLost");
		
		AGOAP_Controller_C_ResetLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.StartsettingKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidAIState                                       NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AGOAP_Controller_C::StartsettingKeys(ERaidAIState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.StartsettingKeys");
		
		AGOAP_Controller_C_StartsettingKeys_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.ProcessTaskComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TaskState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      GoalFinsihed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::ProcessTaskComplete(const class FString& TaskState, const class FString& GoalFinsihed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.ProcessTaskComplete");
		
		AGOAP_Controller_C_ProcessTaskComplete_Params params {};
		params.TaskState = TaskState;
		params.GoalFinsihed = GoalFinsihed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.StateLogic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidGOAPEvent                                     NewGOAPEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARaidCharacter*                              SeenChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AGOAP_Controller_C::StateLogic(ERaidGOAPEvent NewGOAPEvent, class ARaidCharacter* SeenChar, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.StateLogic");
		
		AGOAP_Controller_C_StateLogic_Params params {};
		params.NewGOAPEvent = NewGOAPEvent;
		params.SeenChar = SeenChar;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.OnLoaded_50EF9035470C6F40F0D618AF20DD24AA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::OnLoaded_50EF9035470C6F40F0D618AF20DD24AA(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.OnLoaded_50EF9035470C6F40F0D618AF20DD24AA");
		
		AGOAP_Controller_C_OnLoaded_50EF9035470C6F40F0D618AF20DD24AA_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.OnLoaded_75A398344E9F583E768203A8B2779CA8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::OnLoaded_75A398344E9F583E768203A8B2779CA8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.OnLoaded_75A398344E9F583E768203A8B2779CA8");
		
		AGOAP_Controller_C_OnLoaded_75A398344E9F583E768203A8B2779CA8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.OnGOAPEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidGOAPEvent                                     NewGOAPEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARaidCharacter*                              SeenChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AGOAP_Controller_C::OnGOAPEvent(ERaidGOAPEvent NewGOAPEvent, class ARaidCharacter* SeenChar, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.OnGOAPEvent");
		
		AGOAP_Controller_C_OnGOAPEvent_Params params {};
		params.NewGOAPEvent = NewGOAPEvent;
		params.SeenChar = SeenChar;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.QueryFinsihed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::QueryFinsihed(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.QueryFinsihed");
		
		AGOAP_Controller_C_QueryFinsihed_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.PlayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAShout                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDataTable*                                  VoiceSetDT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.PlayVoice");
		
		AGOAP_Controller_C_PlayVoice_Params params {};
		params.IsAShout = IsAShout;
		params.VoiceSetDT = VoiceSetDT;
		params.VoiceLine = VoiceLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Ai_TurnOnOffDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAP_Controller_C::Ai_TurnOnOffDebugText(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Ai_TurnOnOffDebugText");
		
		AGOAP_Controller_C_Ai_TurnOnOffDebugText_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.ReceiveTick");
		
		AGOAP_Controller_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.AIShout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Whisper                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SoundRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::AIShout(bool Whisper, const class FName& SoundRow, class UDataTable* DataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.AIShout");
		
		AGOAP_Controller_C_AIShout_Params params {};
		params.Whisper = Whisper;
		params.SoundRow = SoundRow;
		params.DataTable = DataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Multi_AIShout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Whisper                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Sound_row                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::Multi_AIShout(bool Whisper, const class FName& Sound_row, class UDataTable* DataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Multi_AIShout");
		
		AGOAP_Controller_C_Multi_AIShout_Params params {};
		params.Whisper = Whisper;
		params.Sound_row = Sound_row;
		params.DataTable = DataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.StartlastDamagedTimer
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::StartlastDamagedTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.StartlastDamagedTimer");
		
		AGOAP_Controller_C_StartlastDamagedTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.TurnOffRecentlyHeardAfterTime
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::TurnOffRecentlyHeardAfterTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.TurnOffRecentlyHeardAfterTime");
		
		AGOAP_Controller_C_TurnOffRecentlyHeardAfterTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.TurnOffReSeenPlayerCooldown
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::TurnOffReSeenPlayerCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.TurnOffReSeenPlayerCooldown");
		
		AGOAP_Controller_C_TurnOffReSeenPlayerCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Ai_SetMyGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPlan                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::Ai_SetMyGoal(const class FString& CurrentPlan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Ai_SetMyGoal");
		
		AGOAP_Controller_C_Ai_SetMyGoal_Params params {};
		params.CurrentPlan = CurrentPlan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.CustomEvent_1");
		
		AGOAP_Controller_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.OnGOAPTaskCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TaskFinsihed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      GoalComplete                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::OnGOAPTaskCompleted(const class FString& TaskFinsihed, const class FString& GoalComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.OnGOAPTaskCompleted");
		
		AGOAP_Controller_C_OnGOAPTaskCompleted_Params params {};
		params.TaskFinsihed = TaskFinsihed;
		params.GoalComplete = GoalComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.ReceiveBeginPlay");
		
		AGOAP_Controller_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.HasLootedRecently
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeTilllCanUseALootableAgain                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::HasLootedRecently(float TimeTilllCanUseALootableAgain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.HasLootedRecently");
		
		AGOAP_Controller_C_HasLootedRecently_Params params {};
		params.TimeTilllCanUseALootableAgain = TimeTilllCanUseALootableAgain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.GetRandomLookingPos
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::GetRandomLookingPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.GetRandomLookingPos");
		
		AGOAP_Controller_C_GetRandomLookingPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Ai_StoreBaseMissRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseMissRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::Ai_StoreBaseMissRate(float BaseMissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Ai_StoreBaseMissRate");
		
		AGOAP_Controller_C_Ai_StoreBaseMissRate_Params params {};
		params.BaseMissRate = BaseMissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.Ai_CheckSetMyInitialAmmoCount
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::Ai_CheckSetMyInitialAmmoCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.Ai_CheckSetMyInitialAmmoCount");
		
		AGOAP_Controller_C_Ai_CheckSetMyInitialAmmoCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.DebugStimulusEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		ERaidGOAPEvent                                     NormalEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::DebugStimulusEvent(class AActor* Actor, const struct FAIStimulus& Stimulus, ERaidGOAPEvent NormalEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.DebugStimulusEvent");
		
		AGOAP_Controller_C_DebugStimulusEvent_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		params.NormalEvent = NormalEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.UsedALootableAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LootLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::UsedALootableAtLocation(const struct FVector& LootLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.UsedALootableAtLocation");
		
		AGOAP_Controller_C_UsedALootableAtLocation_Params params {};
		params.LootLocation = LootLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.LostPlayerStartHunting
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::LostPlayerStartHunting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.LostPlayerStartHunting");
		
		AGOAP_Controller_C_LostPlayerStartHunting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.StartGOAPEvent
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::StartGOAPEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.StartGOAPEvent");
		
		AGOAP_Controller_C_StartGOAPEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.StopGOAPEvent
	 * 		Flags  -> ()
	 */
	void AGOAP_Controller_C::StopGOAPEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.StopGOAPEvent");
		
		AGOAP_Controller_C_StopGOAPEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP_Controller.GOAP_Controller_C.ExecuteUbergraph_GOAP_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAP_Controller_C::ExecuteUbergraph_GOAP_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP_Controller.GOAP_Controller_C.ExecuteUbergraph_GOAP_Controller");
		
		AGOAP_Controller_C_ExecuteUbergraph_GOAP_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGOAP_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGOAP_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GOAP_Controller.GOAP_Controller_C");
		return ptr;
	}

}


