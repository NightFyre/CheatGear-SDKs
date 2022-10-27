/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Audio_Play_Wwise_Event_Function_C::StopAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio");
		
		ABP_Audio_Play_Wwise_Event_Function_C_StopAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Audio_Play_Wwise_Event_Function_C::PlayAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio");
		
		ABP_Audio_Play_Wwise_Event_Function_C_PlayAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Audio_Play_Wwise_Event_Function_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript");
		
		ABP_Audio_Play_Wwise_Event_Function_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Audio_Play_Wwise_Event_Function_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Audio_Play_Wwise_Event_Function_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C");
		return ptr;
	}

}


