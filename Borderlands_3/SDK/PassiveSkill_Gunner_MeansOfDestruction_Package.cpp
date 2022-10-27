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
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnActivated");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnCausedDamage_MeansOfDestruction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::OnCausedDamage_MeansOfDestruction(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnCausedDamage_MeansOfDestruction");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_OnCausedDamage_MeansOfDestruction_Params params {};
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
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnGradeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::OnGradeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnGradeChanged");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_OnGradeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.DetermineNewChance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::DetermineNewChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.DetermineNewChance");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_DetermineNewChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetMoDClamp_Ammo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::ResetMoDClamp_Ammo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetMoDClamp_Ammo");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_ResetMoDClamp_Ammo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.OnAbilityTimerEnded");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetModClamp_Grenade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::ResetModClamp_Grenade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ResetModClamp_Grenade");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_ResetModClamp_Grenade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Gunner_MeansOfDestruction_C::ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C.ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction");
		
		UPassiveSkill_Gunner_MeansOfDestruction_C_ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Gunner_MeansOfDestruction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Gunner_MeansOfDestruction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C");
		return ptr;
	}

}


