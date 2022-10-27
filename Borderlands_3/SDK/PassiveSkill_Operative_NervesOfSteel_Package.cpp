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
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UPassiveSkill_Operative_NervesOfSteel_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.CalculateAbilityState");
		
		UPassiveSkill_Operative_NervesOfSteel_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_NervesOfSteel_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnActivated");
		
		UPassiveSkill_Operative_NervesOfSteel_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolFilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UPassiveSkill_Operative_NervesOfSteel_C::InTheZone_OnResourcePoolFilled(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolFilled");
		
		UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolFilled_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolNotFilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UPassiveSkill_Operative_NervesOfSteel_C::InTheZone_OnResourcePoolNotFilled(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolNotFilled");
		
		UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolNotFilled_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassiveSkill_Operative_NervesOfSteel_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnAbilityTimerEnded");
		
		UPassiveSkill_Operative_NervesOfSteel_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_NervesOfSteel_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnResumed");
		
		UPassiveSkill_Operative_NervesOfSteel_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_NervesOfSteel_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnPaused");
		
		UPassiveSkill_Operative_NervesOfSteel_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_NervesOfSteel_C::ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel");
		
		UPassiveSkill_Operative_NervesOfSteel_C_ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Operative_NervesOfSteel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Operative_NervesOfSteel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C");
		return ptr;
	}

}


