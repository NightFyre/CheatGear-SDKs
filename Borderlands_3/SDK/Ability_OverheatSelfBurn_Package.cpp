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
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UAbility_OverheatSelfBurn_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.CalculateAbilityState");
		
		UAbility_OverheatSelfBurn_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_OverheatSelfBurn_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnPaused");
		
		UAbility_OverheatSelfBurn_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_OverheatSelfBurn_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnResumed");
		
		UAbility_OverheatSelfBurn_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_OverheatSelfBurn_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnActivated");
		
		UAbility_OverheatSelfBurn_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_OverheatSelfBurn_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnDeactivated");
		
		UAbility_OverheatSelfBurn_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnUnregistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_OverheatSelfBurn_C::OnUnregistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnUnregistered");
		
		UAbility_OverheatSelfBurn_C_OnUnregistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExitedDownState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_OverheatSelfBurn_C::ExitedDownState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExitedDownState");
		
		UAbility_OverheatSelfBurn_C_ExitedDownState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExecuteUbergraph_Ability_OverheatSelfBurn
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_OverheatSelfBurn_C::ExecuteUbergraph_Ability_OverheatSelfBurn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExecuteUbergraph_Ability_OverheatSelfBurn");
		
		UAbility_OverheatSelfBurn_C_ExecuteUbergraph_Ability_OverheatSelfBurn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_OverheatSelfBurn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_OverheatSelfBurn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C");
		return ptr;
	}

}


