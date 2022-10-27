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
	 * 		Name   -> Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Beast_AttackCmd_TerrorFireDMG_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnActivated");
		
		UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Beast_AttackCmd_TerrorFireDMG_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnDeactivated");
		
		UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.AttackCommandGiven
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetEvolutionType                  PetEvolution                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakActionAbilityPetType                           PetType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_AttackCmd_TerrorFireDMG_C::AttackCommandGiven(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.AttackCommandGiven");
		
		UAbility_Beast_AttackCmd_TerrorFireDMG_C_AttackCommandGiven_Params params {};
		params.PetEvolution = PetEvolution;
		params.PetType = PetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Beast_AttackCmd_TerrorFireDMG_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnAbilityTimerEnded");
		
		UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_AttackCmd_TerrorFireDMG_C::ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG");
		
		UAbility_Beast_AttackCmd_TerrorFireDMG_C_ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Beast_AttackCmd_TerrorFireDMG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Beast_AttackCmd_TerrorFireDMG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C");
		return ptr;
	}

}


