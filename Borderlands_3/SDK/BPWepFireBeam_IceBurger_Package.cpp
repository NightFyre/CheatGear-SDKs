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
	 * 		Name   -> Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWepFireBeam_IceBurger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ReceiveBeginPlay");
		
		UBPWepFireBeam_IceBurger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_IceBurger_C::NotifyUseStarted_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseStarted_Event");
		
		UBPWepFireBeam_IceBurger_C_NotifyUseStarted_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseFinished_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_IceBurger_C::NotifyUseFinished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.NotifyUseFinished_Event");
		
		UBPWepFireBeam_IceBurger_C_NotifyUseFinished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.EvaluateShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_IceBurger_C::EvaluateShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.EvaluateShot");
		
		UBPWepFireBeam_IceBurger_C_EvaluateShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ExecuteUbergraph_BPWepFireBeam_IceBurger
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWepFireBeam_IceBurger_C::ExecuteUbergraph_BPWepFireBeam_IceBurger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C.ExecuteUbergraph_BPWepFireBeam_IceBurger");
		
		UBPWepFireBeam_IceBurger_C_ExecuteUbergraph_BPWepFireBeam_IceBurger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWepFireBeam_IceBurger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWepFireBeam_IceBurger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireBeam_IceBurger.BPWepFireBeam_IceBurger_C");
		return ptr;
	}

}


