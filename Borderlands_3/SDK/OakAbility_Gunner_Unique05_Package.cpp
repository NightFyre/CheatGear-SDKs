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
	 * 		Name   -> Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Gunner_Unique05_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnActivated");
		
		UOakAbility_Gunner_Unique05_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnWeaponStartReloaded_UniqueClassMod05
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOakAbility_Gunner_Unique05_C::OnWeaponStartReloaded_UniqueClassMod05(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnWeaponStartReloaded_UniqueClassMod05");
		
		UOakAbility_Gunner_Unique05_C_OnWeaponStartReloaded_UniqueClassMod05_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.DontNeedNoAbilityTimers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Gunner_Unique05_C::DontNeedNoAbilityTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.DontNeedNoAbilityTimers");
		
		UOakAbility_Gunner_Unique05_C_DontNeedNoAbilityTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.ExecuteUbergraph_OakAbility_Gunner_Unique05
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_Unique05_C::ExecuteUbergraph_OakAbility_Gunner_Unique05(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.ExecuteUbergraph_OakAbility_Gunner_Unique05");
		
		UOakAbility_Gunner_Unique05_C_ExecuteUbergraph_OakAbility_Gunner_Unique05_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Gunner_Unique05_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Gunner_Unique05_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C");
		return ptr;
	}

}


