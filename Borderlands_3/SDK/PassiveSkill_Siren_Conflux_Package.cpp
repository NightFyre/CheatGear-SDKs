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
	 * 		Name   -> Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.RemoveElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_Conflux_C::RemoveElement(class UObject* StatusEffect, class UClass** DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.RemoveElement");
		
		UPassiveSkill_Siren_Conflux_C_RemoveElement_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageType != nullptr)
			*DamageType = params.DamageType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_Conflux_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.OnActivated");
		
		UPassiveSkill_Siren_Conflux_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedElementalEffect
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatusEffectSpec                           Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassiveSkill_Siren_Conflux_C::DamageConfettiOnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedElementalEffect");
		
		UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedElementalEffect_Params params {};
		params.Causer = Causer;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedMaxResourceEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakStatusEffectResourceEffectType                 ResourceEffectType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_Conflux_C::DamageConfettiOnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedMaxResourceEffect");
		
		UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedMaxResourceEffect_Params params {};
		params.Target = Target;
		params.ResourceEffectType = ResourceEffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ReopenGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_Conflux_C::ReopenGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ReopenGate");
		
		UPassiveSkill_Siren_Conflux_C_ReopenGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ExecuteUbergraph_PassiveSkill_Siren_Conflux
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_Conflux_C::ExecuteUbergraph_PassiveSkill_Siren_Conflux(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ExecuteUbergraph_PassiveSkill_Siren_Conflux");
		
		UPassiveSkill_Siren_Conflux_C_ExecuteUbergraph_PassiveSkill_Siren_Conflux_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_Conflux_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_Conflux_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C");
		return ptr;
	}

}


