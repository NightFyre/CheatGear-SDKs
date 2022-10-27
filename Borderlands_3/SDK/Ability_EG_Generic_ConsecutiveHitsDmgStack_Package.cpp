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
	 * 		Name   -> Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnActivated");
		
		UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.CausedDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.CausedDamage");
		
		UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_CausedDamage_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnAbilityTimerEnded");
		
		UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnDeactivated");
		
		UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack");
		
		UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_EG_Generic_ConsecutiveHitsDmgStack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_EG_Generic_ConsecutiveHitsDmgStack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C");
		return ptr;
	}

}


