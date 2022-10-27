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
	 * 		Name   -> Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void Asot_frontend_01_a_audio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay");
		
		Asot_frontend_01_a_audio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_audio_C::SelectionConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed");
		
		Asot_frontend_01_a_audio_C_SelectionConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_audio_C::ExecuteUbergraph_sot_frontend_01_a_audio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio");
		
		Asot_frontend_01_a_audio_C_ExecuteUbergraph_sot_frontend_01_a_audio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_audio.sot_frontend_01_a_audio_C");
		return ptr;
	}

}


