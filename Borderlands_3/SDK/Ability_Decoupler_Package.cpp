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
	 * 		Name   -> Function Ability_Decoupler.Ability_Decoupler_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Decoupler_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnActivated");
		
		UAbility_Decoupler_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Decoupler.Ability_Decoupler_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Decoupler_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnDeactivated");
		
		UAbility_Decoupler_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Decoupler.Ability_Decoupler_C.OnUnregistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Decoupler_C::OnUnregistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnUnregistered");
		
		UAbility_Decoupler_C_OnUnregistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Decoupler.Ability_Decoupler_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Decoupler_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.OnPaused");
		
		UAbility_Decoupler_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Decoupler.Ability_Decoupler_C.ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Decoupler_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.ReloadStarted");
		
		UAbility_Decoupler_C_ReloadStarted_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Decoupler.Ability_Decoupler_C.ReloadFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Decoupler_C::ReloadFinished(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.ReloadFinished");
		
		UAbility_Decoupler_C_ReloadFinished_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Decoupler.Ability_Decoupler_C.ExecuteUbergraph_Ability_Decoupler
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Decoupler_C::ExecuteUbergraph_Ability_Decoupler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Decoupler.Ability_Decoupler_C.ExecuteUbergraph_Ability_Decoupler");
		
		UAbility_Decoupler_C_ExecuteUbergraph_Ability_Decoupler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Decoupler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Decoupler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Decoupler.Ability_Decoupler_C");
		return ptr;
	}

}


