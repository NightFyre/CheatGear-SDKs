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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.OnRep_ReelsBools
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::OnRep_ReelsBools()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.OnRep_ReelsBools");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_OnRep_ReelsBools_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadEnded_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::NotifyReloadEnded_Event(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadEnded_Event");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadEnded_Event_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadStarted_Event");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadStarted_Event_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::K2_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnDeactivated");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnActivated");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsFX
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::SetReelsFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsFX");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsBonuses
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::SetReelsBonuses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsBonuses");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsBonuses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SpinReels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::SpinReels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SpinReels");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SpinReels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2");
		
		UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C");
		return ptr;
	}

}


