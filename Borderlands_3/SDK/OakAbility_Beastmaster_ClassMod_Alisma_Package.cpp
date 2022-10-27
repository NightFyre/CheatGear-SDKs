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
	 * 		Name   -> Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Beastmaster_ClassMod_Alisma_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnActivated");
		
		UOakAbility_Beastmaster_ClassMod_Alisma_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.BeastmasterClassModAlisma_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UOakAbility_Beastmaster_ClassMod_Alisma_C::BeastmasterClassModAlisma_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.BeastmasterClassModAlisma_OnCausedAnyDamage");
		
		UOakAbility_Beastmaster_ClassMod_Alisma_C_BeastmasterClassModAlisma_OnCausedAnyDamage_Params params {};
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
	 * 		Name   -> Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ResetGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Beastmaster_ClassMod_Alisma_C::ResetGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ResetGate");
		
		UOakAbility_Beastmaster_ClassMod_Alisma_C_ResetGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Beastmaster_ClassMod_Alisma_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnResumed");
		
		UOakAbility_Beastmaster_ClassMod_Alisma_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UOakAbility_Beastmaster_ClassMod_Alisma_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnAbilityTimerEnded");
		
		UOakAbility_Beastmaster_ClassMod_Alisma_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Beastmaster_ClassMod_Alisma_C::ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma");
		
		UOakAbility_Beastmaster_ClassMod_Alisma_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Beastmaster_ClassMod_Alisma_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Beastmaster_ClassMod_Alisma_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C");
		return ptr;
	}

}


