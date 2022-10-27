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
	 * 		Name   -> Function BP_VoiceStatus.BP_VoiceStatus_C.AddSpacer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VoiceStatus_C::AddSpacer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VoiceStatus.BP_VoiceStatus_C.AddSpacer");
		
		UBP_VoiceStatus_C_AddSpacer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VoiceStatus.BP_VoiceStatus_C.InitializeList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VoiceStatus_C::InitializeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VoiceStatus.BP_VoiceStatus_C.InitializeList");
		
		UBP_VoiceStatus_C_InitializeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VoiceStatus.BP_VoiceStatus_C.RegenerateList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VoiceStatus_C::RegenerateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VoiceStatus.BP_VoiceStatus_C.RegenerateList");
		
		UBP_VoiceStatus_C_RegenerateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VoiceStatus.BP_VoiceStatus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_VoiceStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VoiceStatus.BP_VoiceStatus_C.Construct");
		
		UBP_VoiceStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VoiceStatus.BP_VoiceStatus_C.OnPlayerTalkingStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VoiceStatus_C::OnPlayerTalkingStateChanged(class APlayerState* PlayerState, bool bIsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VoiceStatus.BP_VoiceStatus_C.OnPlayerTalkingStateChanged");
		
		UBP_VoiceStatus_C_OnPlayerTalkingStateChanged_Params params {};
		params.PlayerState = PlayerState;
		params.bIsTalking = bIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VoiceStatus.BP_VoiceStatus_C.OnTalkingPlayersChanged
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APlayerState*>                        InTalkingPlayers                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_VoiceStatus_C::OnTalkingPlayersChanged(TArray<class APlayerState*> InTalkingPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VoiceStatus.BP_VoiceStatus_C.OnTalkingPlayersChanged");
		
		UBP_VoiceStatus_C_OnTalkingPlayersChanged_Params params {};
		params.InTalkingPlayers = InTalkingPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VoiceStatus.BP_VoiceStatus_C.ExecuteUbergraph_BP_VoiceStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VoiceStatus_C::ExecuteUbergraph_BP_VoiceStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VoiceStatus.BP_VoiceStatus_C.ExecuteUbergraph_BP_VoiceStatus");
		
		UBP_VoiceStatus_C_ExecuteUbergraph_BP_VoiceStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_VoiceStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VoiceStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_VoiceStatus.BP_VoiceStatus_C");
		return ptr;
	}

}


