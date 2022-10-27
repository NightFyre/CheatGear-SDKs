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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Heckle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectileComponent_Heckle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectileComponent_Heckle_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReloadStarted");
		
		UBPWeaponFireProjectileComponent_Heckle_C_ReloadStarted_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.PowersCombined
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Heckle_C::PowersCombined()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.PowersCombined");
		
		UBPWeaponFireProjectileComponent_Heckle_C_PowersCombined_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Heckle_C::K2_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnDeactivated");
		
		UBPWeaponFireProjectileComponent_Heckle_C_K2_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.CheckPlayers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Heckle_C::CheckPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.CheckPlayers");
		
		UBPWeaponFireProjectileComponent_Heckle_C_CheckPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Heckle_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnActivated");
		
		UBPWeaponFireProjectileComponent_Heckle_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_Heckle_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle");
		
		UBPWeaponFireProjectileComponent_Heckle_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_Heckle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_Heckle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C");
		return ptr;
	}

}


