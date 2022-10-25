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
	 * 		Name   -> Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWepFireProjectile_Skeksis_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ReceiveBeginPlay");
		
		UBPWepFireProjectile_Skeksis_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.NotifyUseFinished_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWepFireProjectile_Skeksis_C::NotifyUseFinished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.NotifyUseFinished_Event");
		
		UBPWepFireProjectile_Skeksis_C_NotifyUseFinished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ExecuteUbergraph_BPWepFireProjectile_Skeksis
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWepFireProjectile_Skeksis_C::ExecuteUbergraph_BPWepFireProjectile_Skeksis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C.ExecuteUbergraph_BPWepFireProjectile_Skeksis");
		
		UBPWepFireProjectile_Skeksis_C_ExecuteUbergraph_BPWepFireProjectile_Skeksis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWepFireProjectile_Skeksis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWepFireProjectile_Skeksis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C");
		return ptr;
	}

}


