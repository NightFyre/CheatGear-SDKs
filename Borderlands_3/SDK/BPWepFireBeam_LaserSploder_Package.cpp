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
	 * 		Name   -> Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWepFireBeam_LaserSploder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ReceiveBeginPlay");
		
		UBPWepFireBeam_LaserSploder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_LaserSploder_C::NotifyUseStarted_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseStarted_Event");
		
		UBPWepFireBeam_LaserSploder_C_NotifyUseStarted_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseFinished_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_LaserSploder_C::NotifyUseFinished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.NotifyUseFinished_Event");
		
		UBPWepFireBeam_LaserSploder_C_NotifyUseFinished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.EvaluateShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_LaserSploder_C::EvaluateShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.EvaluateShot");
		
		UBPWepFireBeam_LaserSploder_C_EvaluateShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ExecuteUbergraph_BPWepFireBeam_LaserSploder
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWepFireBeam_LaserSploder_C::ExecuteUbergraph_BPWepFireBeam_LaserSploder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C.ExecuteUbergraph_BPWepFireBeam_LaserSploder");
		
		UBPWepFireBeam_LaserSploder_C_ExecuteUbergraph_BPWepFireBeam_LaserSploder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWepFireBeam_LaserSploder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWepFireBeam_LaserSploder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireBeam_LaserSploder.BPWepFireBeam_LaserSploder_C");
		return ptr;
	}

}


