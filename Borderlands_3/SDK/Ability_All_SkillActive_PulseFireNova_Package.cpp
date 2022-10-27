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
	 * 		Name   -> Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.IsChargeBasedSkill
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     ActionSkill                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_All_SkillActive_PulseFireNova_C::IsChargeBasedSkill(class UObject* ActionSkill, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.IsChargeBasedSkill");
		
		UAbility_All_SkillActive_PulseFireNova_C_IsChargeBasedSkill_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointOnActionSkillActivated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_All_SkillActive_PulseFireNova_C::AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointOnActionSkillActivated");
		
		UAbility_All_SkillActive_PulseFireNova_C_AnointOnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_All_SkillActive_PulseFireNova_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointTriggerEffect");
		
		UAbility_All_SkillActive_PulseFireNova_C_AnointTriggerEffect_Params params {};
		params.TriggerEffect = TriggerEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.TriggerNova
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillActive_PulseFireNova_C::TriggerNova()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.TriggerNova");
		
		UAbility_All_SkillActive_PulseFireNova_C_TriggerNova_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointRemoveEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillActive_PulseFireNova_C::AnointRemoveEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointRemoveEffect");
		
		UAbility_All_SkillActive_PulseFireNova_C_AnointRemoveEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SkillActive_PulseFireNova_C::ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova");
		
		UAbility_All_SkillActive_PulseFireNova_C_ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_SkillActive_PulseFireNova_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_SkillActive_PulseFireNova_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C");
		return ptr;
	}

}


