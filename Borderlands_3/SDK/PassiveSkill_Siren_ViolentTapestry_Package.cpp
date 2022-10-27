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
	 * 		Name   -> Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UPassiveSkill_Siren_ViolentTapestry_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.CalculateAbilityState");
		
		UPassiveSkill_Siren_ViolentTapestry_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_ViolentTapestry_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.OnActivated");
		
		UPassiveSkill_Siren_ViolentTapestry_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedElementalEffect
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatusEffectSpec                           Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassiveSkill_Siren_ViolentTapestry_C::ViolentTapestry_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedElementalEffect");
		
		UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedElementalEffect_Params params {};
		params.Causer = Causer;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedMaxResourceEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakStatusEffectResourceEffectType                 ResourceEffectType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_ViolentTapestry_C::ViolentTapestry_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedMaxResourceEffect");
		
		UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedMaxResourceEffect_Params params {};
		params.Target = Target;
		params.ResourceEffectType = ResourceEffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestryTriggerRushStacks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RushStacks                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_ViolentTapestry_C::ViolentTapestryTriggerRushStacks(int32_t RushStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestryTriggerRushStacks");
		
		UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestryTriggerRushStacks_Params params {};
		params.RushStacks = RushStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_ViolentTapestry_C::ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry");
		
		UPassiveSkill_Siren_ViolentTapestry_C_ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_ViolentTapestry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_ViolentTapestry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C");
		return ptr;
	}

}


