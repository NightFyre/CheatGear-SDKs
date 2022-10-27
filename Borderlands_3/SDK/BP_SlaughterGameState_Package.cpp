/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SlaughterGameState_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.UserConstructionScript");
		
		ABP_SlaughterGameState_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SlaughterGameState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.ReceiveBeginPlay");
		
		ABP_SlaughterGameState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnAllPlayersDied_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SlaughterGameState_C::OnAllPlayersDied_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnAllPlayersDied_Event_1");
		
		ABP_SlaughterGameState_C_OnAllPlayersDied_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewRound_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RoundNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SlaughterGameState_C::OnNewRound_Event_1(int32_t RoundNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewRound_Event_1");
		
		ABP_SlaughterGameState_C_OnNewRound_Event_1_Params params {};
		params.RoundNumber = RoundNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewWave_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bBossWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CountdownDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SlaughterGameState_C::OnNewWave_Event_1(bool bBossWave, int32_t CountdownDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewWave_Event_1");
		
		ABP_SlaughterGameState_C_OnNewWave_Event_1_Params params {};
		params.bBossWave = bBossWave;
		params.CountdownDuration = CountdownDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnPlayerDied_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SlaughterGameState_C::OnPlayerDied_Event_1(class AOakPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnPlayerDied_Event_1");
		
		ABP_SlaughterGameState_C_OnPlayerDied_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnRoundComplete_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RoundNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SlaughterGameState_C::OnRoundComplete_Event_1(int32_t RoundNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnRoundComplete_Event_1");
		
		ABP_SlaughterGameState_C_OnRoundComplete_Event_1_Params params {};
		params.RoundNumber = RoundNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_SlaughterGameState.BP_SlaughterGameState_C.ExecuteUbergraph_BP_SlaughterGameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SlaughterGameState_C::ExecuteUbergraph_BP_SlaughterGameState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.ExecuteUbergraph_BP_SlaughterGameState");
		
		ABP_SlaughterGameState_C_ExecuteUbergraph_BP_SlaughterGameState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SlaughterGameState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SlaughterGameState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SlaughterGameState.BP_SlaughterGameState_C");
		return ptr;
	}

}


