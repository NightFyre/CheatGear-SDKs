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
	 * 		Name   -> Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UPassiveSkill_Siren_ShieldOfThought_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.CalculateAbilityState");
		
		UPassiveSkill_Siren_ShieldOfThought_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.IsAffectedByActionSkill
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveSkill_Siren_ShieldOfThought_C::IsAffectedByActionSkill(class AActor* Actor, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.IsAffectedByActionSkill");
		
		UPassiveSkill_Siren_ShieldOfThought_C_IsAffectedByActionSkill_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_ShieldOfThought_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.OnActivated");
		
		UPassiveSkill_Siren_ShieldOfThought_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.SirenSkillEvent_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UPassiveSkill_Siren_ShieldOfThought_C::SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.SirenSkillEvent_OnCausedAnyDamage");
		
		UPassiveSkill_Siren_ShieldOfThought_C_SirenSkillEvent_OnCausedAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageSource = DamageSource;
		params.DamageType = DamageType;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_ShieldOfThought_C::ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought");
		
		UPassiveSkill_Siren_ShieldOfThought_C_ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_ShieldOfThought_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_ShieldOfThought_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C");
		return ptr;
	}

}


