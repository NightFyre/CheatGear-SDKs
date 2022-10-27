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
	 * 		Name   -> Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_Radiodead_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnActivated");
		
		UAbility_Artifact_Radiodead_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.StopSliding
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlideEndedDetails                          Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_Radiodead_C::StopSliding(const struct FSlideEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.StopSliding");
		
		UAbility_Artifact_Radiodead_C_StopSliding_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerStarted
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_Radiodead_C::OnAbilityTimerStarted(const struct FOakAbilityTimerSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerStarted");
		
		UAbility_Artifact_Radiodead_C_OnAbilityTimerStarted_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_Radiodead_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerEnded");
		
		UAbility_Artifact_Radiodead_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.ExecuteUbergraph_Ability_Artifact_Radiodead
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_Radiodead_C::ExecuteUbergraph_Ability_Artifact_Radiodead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.ExecuteUbergraph_Ability_Artifact_Radiodead");
		
		UAbility_Artifact_Radiodead_C_ExecuteUbergraph_Ability_Artifact_Radiodead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_Radiodead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_Radiodead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C");
		return ptr;
	}

}


