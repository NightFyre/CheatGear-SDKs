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
	 * 		Name   -> Function Ability_Rakkman.Ability_Rakkman_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UAbility_Rakkman_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Rakkman.Ability_Rakkman_C.CalculateAbilityState");
		
		UAbility_Rakkman_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Rakkman.Ability_Rakkman_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Rakkman_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Rakkman.Ability_Rakkman_C.OnRegistered");
		
		UAbility_Rakkman_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Rakkman.Ability_Rakkman_C.ExecuteUbergraph_Ability_Rakkman
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Rakkman_C::ExecuteUbergraph_Ability_Rakkman(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Rakkman.Ability_Rakkman_C.ExecuteUbergraph_Ability_Rakkman");
		
		UAbility_Rakkman_C_ExecuteUbergraph_Ability_Rakkman_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Rakkman_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Rakkman_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Rakkman.Ability_Rakkman_C");
		return ptr;
	}

}


