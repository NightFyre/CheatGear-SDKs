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
	 * 		Name   -> Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UAbility_EG_TriggerWhileInAir_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.CalculateAbilityState");
		
		UAbility_EG_TriggerWhileInAir_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_EG_TriggerWhileInAir_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.OnActivated");
		
		UAbility_EG_TriggerWhileInAir_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.ExecuteUbergraph_Ability_EG_TriggerWhileInAir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_EG_TriggerWhileInAir_C::ExecuteUbergraph_Ability_EG_TriggerWhileInAir(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.ExecuteUbergraph_Ability_EG_TriggerWhileInAir");
		
		UAbility_EG_TriggerWhileInAir_C_ExecuteUbergraph_Ability_EG_TriggerWhileInAir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_EG_TriggerWhileInAir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_EG_TriggerWhileInAir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C");
		return ptr;
	}

}


