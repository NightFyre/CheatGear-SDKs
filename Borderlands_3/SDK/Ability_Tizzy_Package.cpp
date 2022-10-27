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
	 * 		Name   -> Function Ability_Tizzy.Ability_Tizzy_C.StopTizzy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Tizzy_C::StopTizzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.StopTizzy");
		
		UAbility_Tizzy_C_StopTizzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Tizzy.Ability_Tizzy_C.StartTizzy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Tizzy_C::StartTizzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.StartTizzy");
		
		UAbility_Tizzy_C_StartTizzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Tizzy.Ability_Tizzy_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Tizzy_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.OnActivated");
		
		UAbility_Tizzy_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Tizzy.Ability_Tizzy_C.NotifyHeatChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Tizzy_C::NotifyHeatChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.NotifyHeatChange");
		
		UAbility_Tizzy_C_NotifyHeatChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Tizzy.Ability_Tizzy_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Tizzy_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.OnDeactivated");
		
		UAbility_Tizzy_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Tizzy.Ability_Tizzy_C.WeaponUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Tizzy_C::WeaponUsed(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.WeaponUsed");
		
		UAbility_Tizzy_C_WeaponUsed_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Tizzy.Ability_Tizzy_C.ExecuteUbergraph_Ability_Tizzy
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Tizzy_C::ExecuteUbergraph_Ability_Tizzy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.ExecuteUbergraph_Ability_Tizzy");
		
		UAbility_Tizzy_C_ExecuteUbergraph_Ability_Tizzy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Tizzy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Tizzy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Tizzy.Ability_Tizzy_C");
		return ptr;
	}

}


