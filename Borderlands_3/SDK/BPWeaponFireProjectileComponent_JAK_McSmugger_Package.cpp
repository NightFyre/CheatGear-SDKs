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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnActivated");
		
		UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.OnCausedDeath_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.OnCausedDeath_Event");
		
		UBPWeaponFireProjectileComponent_JAK_McSmugger_C_OnCausedDeath_Event_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::K2_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnDeactivated");
		
		UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.NotifyReloadStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.NotifyReloadStarted_Event");
		
		UBPWeaponFireProjectileComponent_JAK_McSmugger_C_NotifyReloadStarted_Event_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.PlayEffect
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::PlayEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.PlayEffect");
		
		UBPWeaponFireProjectileComponent_JAK_McSmugger_C_PlayEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.StopEffect
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::StopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.StopEffect");
		
		UBPWeaponFireProjectileComponent_JAK_McSmugger_C_StopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger");
		
		UBPWeaponFireProjectileComponent_JAK_McSmugger_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_JAK_McSmugger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_JAK_McSmugger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C");
		return ptr;
	}

}


