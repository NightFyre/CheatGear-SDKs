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
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.TryIdleAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_HW_COV_Poop_C::TryIdleAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.TryIdleAudio");
		
		ABPWeap_HW_COV_Poop_C_TryIdleAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_HW_COV_Poop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.UserConstructionScript");
		
		ABPWeap_HW_COV_Poop_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.Notify_ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_HW_COV_Poop_C::Notify_ReloadStarted(bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.Notify_ReloadStarted");
		
		ABPWeap_HW_COV_Poop_C_Notify_ReloadStarted_Params params {};
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponAttached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_HW_COV_Poop_C::WeaponAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponAttached");
		
		ABPWeap_HW_COV_Poop_C_WeaponAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.EquipEventNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_HW_COV_Poop_C::EquipEventNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.EquipEventNotify");
		
		ABPWeap_HW_COV_Poop_C_EquipEventNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponPutDownEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_HW_COV_Poop_C::WeaponPutDownEvent(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponPutDownEvent");
		
		ABPWeap_HW_COV_Poop_C_WeaponPutDownEvent_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.OnKilledEnemy_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPWeap_HW_COV_Poop_C::OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.OnKilledEnemy_Event");
		
		ABPWeap_HW_COV_Poop_C_OnKilledEnemy_Event_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.ExecuteUbergraph_BPWeap_HW_COV_Poop
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_HW_COV_Poop_C::ExecuteUbergraph_BPWeap_HW_COV_Poop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.ExecuteUbergraph_BPWeap_HW_COV_Poop");
		
		ABPWeap_HW_COV_Poop_C_ExecuteUbergraph_BPWeap_HW_COV_Poop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_HW_COV_Poop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_HW_COV_Poop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C");
		return ptr;
	}

}


