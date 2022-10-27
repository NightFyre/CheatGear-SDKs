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
	 * 		Name   -> Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UPassiveSkill_Siren_Mindfulness_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.CalculateAbilityState");
		
		UPassiveSkill_Siren_Mindfulness_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_Mindfulness_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.OnActivated");
		
		UPassiveSkill_Siren_Mindfulness_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.ThickSkinnedOnReceivedDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UPassiveSkill_Siren_Mindfulness_C::ThickSkinnedOnReceivedDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.ThickSkinnedOnReceivedDamage");
		
		UPassiveSkill_Siren_Mindfulness_C_ThickSkinnedOnReceivedDamage_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.ExecuteUbergraph_PassiveSkill_Siren_Mindfulness
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_Mindfulness_C::ExecuteUbergraph_PassiveSkill_Siren_Mindfulness(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C.ExecuteUbergraph_PassiveSkill_Siren_Mindfulness");
		
		UPassiveSkill_Siren_Mindfulness_C_ExecuteUbergraph_PassiveSkill_Siren_Mindfulness_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_Mindfulness_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_Mindfulness_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Mindfulness.PassiveSkill_Siren_Mindfulness_C");
		return ptr;
	}

}


