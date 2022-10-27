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
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.OnActivated");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_OnCausedMaxResourceEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakStatusEffectResourceEffectType                 ResourceEffectType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_OnCausedMaxResourceEffect");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_OnCausedMaxResourceEffect_Params params {};
		params.Target = Target;
		params.ResourceEffectType = ResourceEffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ShieldEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_ShieldEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ShieldEffect");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ShieldEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_RegenEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_RegenEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_RegenEffect");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_RegenEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ActionSkillEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::RunUpTheScore_ActionSkillEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ActionSkillEffect");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ActionSkillEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.Clone_OnFreezeEnemy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::Clone_OnFreezeEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.Clone_OnFreezeEnemy");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_Clone_OnFreezeEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_OnActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::CCC_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_OnActionSkillActivated");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_CCC_OnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_Clone_OnCausedMaxResourceEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakStatusEffectResourceEffectType                 ResourceEffectType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::CCC_Clone_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_Clone_OnCausedMaxResourceEffect");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_CCC_Clone_OnCausedMaxResourceEffect_Params params {};
		params.Target = Target;
		params.ResourceEffectType = ResourceEffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_CalmCoolCollected_C::ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected");
		
		UPassiveSkill_Operative_CalmCoolCollected_C_ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Operative_CalmCoolCollected_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Operative_CalmCoolCollected_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C");
		return ptr;
	}

}


