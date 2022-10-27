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
	 * 		Name   -> Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UAbility_VanquisherFireRate_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.CalculateAbilityState");
		
		UAbility_VanquisherFireRate_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_VanquisherFireRate_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.OnActivated");
		
		UAbility_VanquisherFireRate_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.ExecuteUbergraph_Ability_VanquisherFireRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_VanquisherFireRate_C::ExecuteUbergraph_Ability_VanquisherFireRate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.ExecuteUbergraph_Ability_VanquisherFireRate");
		
		UAbility_VanquisherFireRate_C_ExecuteUbergraph_Ability_VanquisherFireRate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_VanquisherFireRate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_VanquisherFireRate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_VanquisherFireRate.Ability_VanquisherFireRate_C");
		return ptr;
	}

}


