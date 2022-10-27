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
	 * 		Name   -> Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPFiringComponent_TOR_Contained_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ReceiveBeginPlay");
		
		UBPFiringComponent_TOR_Contained_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.NotifyReloadStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFiringComponent_TOR_Contained_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.NotifyReloadStarted_Event");
		
		UBPFiringComponent_TOR_Contained_C_NotifyReloadStarted_Event_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.K2_OnDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPFiringComponent_TOR_Contained_C::K2_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.K2_OnDeactivated");
		
		UBPFiringComponent_TOR_Contained_C_K2_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ExecuteUbergraph_BPFiringComponent_TOR_Contained
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFiringComponent_TOR_Contained_C::ExecuteUbergraph_BPFiringComponent_TOR_Contained(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ExecuteUbergraph_BPFiringComponent_TOR_Contained");
		
		UBPFiringComponent_TOR_Contained_C_ExecuteUbergraph_BPFiringComponent_TOR_Contained_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFiringComponent_TOR_Contained_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFiringComponent_TOR_Contained_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C");
		return ptr;
	}

}


