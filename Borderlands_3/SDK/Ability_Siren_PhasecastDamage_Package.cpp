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
	 * 		Name   -> Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Siren_PhasecastDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnActivated");
		
		UAbility_Siren_PhasecastDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Siren_PhasecastDamage_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnDeactivated");
		
		UAbility_Siren_PhasecastDamage_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.ExecuteUbergraph_Ability_Siren_PhasecastDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Siren_PhasecastDamage_C::ExecuteUbergraph_Ability_Siren_PhasecastDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.ExecuteUbergraph_Ability_Siren_PhasecastDamage");
		
		UAbility_Siren_PhasecastDamage_C_ExecuteUbergraph_Ability_Siren_PhasecastDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Siren_PhasecastDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Siren_PhasecastDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C");
		return ptr;
	}

}


