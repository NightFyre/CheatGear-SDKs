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
	 * 		Name   -> Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWepFireBeam_IonLaser_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ReceiveBeginPlay");
		
		UBPWepFireBeam_IonLaser_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_IonLaser_C::NotifyUseStarted_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseStarted_Event");
		
		UBPWepFireBeam_IonLaser_C_NotifyUseStarted_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseFinished_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_IonLaser_C::NotifyUseFinished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.NotifyUseFinished_Event");
		
		UBPWepFireBeam_IonLaser_C_NotifyUseFinished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.EvaluateShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireBeam_IonLaser_C::EvaluateShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.EvaluateShot");
		
		UBPWepFireBeam_IonLaser_C_EvaluateShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.K2_OnDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWepFireBeam_IonLaser_C::K2_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.K2_OnDeactivated");
		
		UBPWepFireBeam_IonLaser_C_K2_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ExecuteUbergraph_BPWepFireBeam_IonLaser
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWepFireBeam_IonLaser_C::ExecuteUbergraph_BPWepFireBeam_IonLaser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C.ExecuteUbergraph_BPWepFireBeam_IonLaser");
		
		UBPWepFireBeam_IonLaser_C_ExecuteUbergraph_BPWepFireBeam_IonLaser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWepFireBeam_IonLaser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWepFireBeam_IonLaser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C");
		return ptr;
	}

}


