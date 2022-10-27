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
	 * 		Name   -> Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_SM_TED_DarkArmy_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnRegistered");
		
		UAbility_SM_TED_DarkArmy_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ReloadStartedDelegate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_SM_TED_DarkArmy_C::ReloadStartedDelegate(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ReloadStartedDelegate");
		
		UAbility_SM_TED_DarkArmy_C_ReloadStartedDelegate_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_SM_TED_DarkArmy_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnDeactivated");
		
		UAbility_SM_TED_DarkArmy_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnUnregistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_SM_TED_DarkArmy_C::OnUnregistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnUnregistered");
		
		UAbility_SM_TED_DarkArmy_C_OnUnregistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_SM_TED_DarkArmy_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnPaused");
		
		UAbility_SM_TED_DarkArmy_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_SM_TED_DarkArmy_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnActivated");
		
		UAbility_SM_TED_DarkArmy_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ExecuteUbergraph_Ability_SM_TED_DarkArmy
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_SM_TED_DarkArmy_C::ExecuteUbergraph_Ability_SM_TED_DarkArmy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ExecuteUbergraph_Ability_SM_TED_DarkArmy");
		
		UAbility_SM_TED_DarkArmy_C_ExecuteUbergraph_Ability_SM_TED_DarkArmy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_SM_TED_DarkArmy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_SM_TED_DarkArmy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C");
		return ptr;
	}

}


