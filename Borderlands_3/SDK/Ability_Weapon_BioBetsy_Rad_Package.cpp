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
	 * 		Name   -> Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Weapon_BioBetsy_Rad_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnRegistered");
		
		UAbility_Weapon_BioBetsy_Rad_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Weapon_BioBetsy_Rad_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnDeactivated");
		
		UAbility_Weapon_BioBetsy_Rad_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Weapon_BioBetsy_Rad_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnPaused");
		
		UAbility_Weapon_BioBetsy_Rad_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnKilled
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAbility_Weapon_BioBetsy_Rad_C::OnKilled(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnKilled");
		
		UAbility_Weapon_BioBetsy_Rad_C_OnKilled_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Weapon_BioBetsy_Rad_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.Reset");
		
		UAbility_Weapon_BioBetsy_Rad_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Weapon_BioBetsy_Rad_C::ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad");
		
		UAbility_Weapon_BioBetsy_Rad_C_ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Weapon_BioBetsy_Rad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Weapon_BioBetsy_Rad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C");
		return ptr;
	}

}


