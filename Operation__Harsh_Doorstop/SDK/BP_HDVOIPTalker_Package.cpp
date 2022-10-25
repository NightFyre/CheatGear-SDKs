/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.ListenForTalkingStateChangedEvents
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDVOIPTalker_C::ListenForTalkingStateChangedEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.ListenForTalkingStateChangedEvents");
		
		UBP_HDVOIPTalker_C_ListenForTalkingStateChangedEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.UpdateSettingsUsageForNextBeginTalk
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUseSpatialized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSettingsUpdated                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDVOIPTalker_C::UpdateSettingsUsageForNextBeginTalk(bool bUseSpatialized, bool* bSettingsUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.UpdateSettingsUsageForNextBeginTalk");
		
		UBP_HDVOIPTalker_C_UpdateSettingsUsageForNextBeginTalk_Params params {};
		params.bUseSpatialized = bUseSpatialized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSettingsUpdated != nullptr)
			*bSettingsUpdated = params.bSettingsUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.RegisterTalker
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                InRegisteredPS                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVoiceSettings                              InSpatializedSettings                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		struct FVoiceSettings                              InNonSpatializedSettings                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bStartSpatialized                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDVOIPTalker_C::RegisterTalker(class APlayerState* InRegisteredPS, struct FVoiceSettings* InSpatializedSettings, struct FVoiceSettings* InNonSpatializedSettings, bool bStartSpatialized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.RegisterTalker");
		
		UBP_HDVOIPTalker_C_RegisterTalker_Params params {};
		params.InRegisteredPS = InRegisteredPS;
		params.bStartSpatialized = bStartSpatialized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSpatializedSettings != nullptr)
			*InSpatializedSettings = params.InSpatializedSettings;
		if (InNonSpatializedSettings != nullptr)
			*InNonSpatializedSettings = params.InNonSpatializedSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.BPOnTalkingBegin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UAudioComponent*                             AudioComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVOIPTalker_C::BPOnTalkingBegin(class UAudioComponent* AudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.BPOnTalkingBegin");
		
		UBP_HDVOIPTalker_C_BPOnTalkingBegin_Params params {};
		params.AudioComponent = AudioComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.BPOnTalkingEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_HDVOIPTalker_C::BPOnTalkingEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.BPOnTalkingEnd");
		
		UBP_HDVOIPTalker_C_BPOnTalkingEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.TalkStateChangedOnChannel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              MsgTalkerChannel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                MsgTalkerPS                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMsgIsTalking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDVOIPTalker_C::TalkStateChangedOnChannel(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.TalkStateChangedOnChannel");
		
		UBP_HDVOIPTalker_C_TalkStateChangedOnChannel_Params params {};
		params.MsgTalkerChannel = MsgTalkerChannel;
		params.MsgTalkerPS = MsgTalkerPS;
		params.bMsgIsTalking = bMsgIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.ExecuteUbergraph_BP_HDVOIPTalker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVOIPTalker_C::ExecuteUbergraph_BP_HDVOIPTalker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.ExecuteUbergraph_BP_HDVOIPTalker");
		
		UBP_HDVOIPTalker_C_ExecuteUbergraph_BP_HDVOIPTalker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDVOIPTalker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDVOIPTalker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDVOIPTalker.BP_HDVOIPTalker_C");
		return ptr;
	}

}


