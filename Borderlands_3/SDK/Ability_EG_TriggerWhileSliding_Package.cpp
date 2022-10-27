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
	 * 		Name   -> Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UAbility_EG_TriggerWhileSliding_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.CalculateAbilityState");
		
		UAbility_EG_TriggerWhileSliding_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_EG_TriggerWhileSliding_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.OnRegistered");
		
		UAbility_EG_TriggerWhileSliding_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.ExecuteUbergraph_Ability_EG_TriggerWhileSliding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_EG_TriggerWhileSliding_C::ExecuteUbergraph_Ability_EG_TriggerWhileSliding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.ExecuteUbergraph_Ability_EG_TriggerWhileSliding");
		
		UAbility_EG_TriggerWhileSliding_C_ExecuteUbergraph_Ability_EG_TriggerWhileSliding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_EG_TriggerWhileSliding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_EG_TriggerWhileSliding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C");
		return ptr;
	}

}


