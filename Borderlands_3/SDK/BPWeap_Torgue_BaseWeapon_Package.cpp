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
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateActiveProjectiles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::DetonateActiveProjectiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateActiveProjectiles");
		
		ABPWeap_Torgue_BaseWeapon_C_DetonateActiveProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.UserConstructionScript");
		
		ABPWeap_Torgue_BaseWeapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ReceiveBeginPlay");
		
		ABPWeap_Torgue_BaseWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ModeSwitched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::ModeSwitched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ModeSwitched");
		
		ABPWeap_Torgue_BaseWeapon_C_ModeSwitched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Notify_ReloadEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::Notify_ReloadEnded(bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Notify_ReloadEnded");
		
		ABPWeap_Torgue_BaseWeapon_C_Notify_ReloadEnded_Params params {};
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateProjectiles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::DetonateProjectiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateProjectiles");
		
		ABPWeap_Torgue_BaseWeapon_C_DetonateProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Weapon_NotifyPutDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Weapon_NotifyPutDown");
		
		ABPWeap_Torgue_BaseWeapon_C_Weapon_NotifyPutDown_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ExecuteUbergraph_BPWeap_Torgue_BaseWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_Torgue_BaseWeapon_C::ExecuteUbergraph_BPWeap_Torgue_BaseWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ExecuteUbergraph_BPWeap_Torgue_BaseWeapon");
		
		ABPWeap_Torgue_BaseWeapon_C_ExecuteUbergraph_BPWeap_Torgue_BaseWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_Torgue_BaseWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_Torgue_BaseWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C");
		return ptr;
	}

}


