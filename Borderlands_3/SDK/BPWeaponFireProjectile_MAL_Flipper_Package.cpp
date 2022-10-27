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
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_Flipper_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectile_MAL_Flipper_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyUsedStarted_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedStarted_Event");
		
		UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedStarted_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedFinished_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyUsedFinished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedFinished_Event");
		
		UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedFinished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsed_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyUsed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsed_Event");
		
		UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyReloadStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyReloadStarted_Event");
		
		UBPWeaponFireProjectile_MAL_Flipper_C_NotifyReloadStarted_Event_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_MAL_Flipper_C::ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper");
		
		UBPWeaponFireProjectile_MAL_Flipper_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectile_MAL_Flipper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectile_MAL_Flipper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C");
		return ptr;
	}

}


