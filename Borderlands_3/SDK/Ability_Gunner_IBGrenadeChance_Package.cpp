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
	 * 		Name   -> Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.GrenadeCooldown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Gunner_IBGrenadeChance_C::GrenadeCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.GrenadeCooldown");
		
		UAbility_Gunner_IBGrenadeChance_C_GrenadeCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronIronBearStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_IBGrenadeChance_C::AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronIronBearStarted");
		
		UAbility_Gunner_IBGrenadeChance_C_AnointIronIronBearStarted_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronBearEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Gunner_IBGrenadeChance_C::AnointIronBearEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronBearEnded");
		
		UAbility_Gunner_IBGrenadeChance_C_AnointIronBearEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointRemoveEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Gunner_IBGrenadeChance_C::AnointRemoveEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointRemoveEffect");
		
		UAbility_Gunner_IBGrenadeChance_C_AnointRemoveEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnTookDamage
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
	void UAbility_Gunner_IBGrenadeChance_C::OnTookDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnTookDamage");
		
		UAbility_Gunner_IBGrenadeChance_C_OnTookDamage_Params params {};
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
	 * 		Name   -> Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Gunner_IBGrenadeChance_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnActivated");
		
		UAbility_Gunner_IBGrenadeChance_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.ExecuteUbergraph_Ability_Gunner_IBGrenadeChance
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_IBGrenadeChance_C::ExecuteUbergraph_Ability_Gunner_IBGrenadeChance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.ExecuteUbergraph_Ability_Gunner_IBGrenadeChance");
		
		UAbility_Gunner_IBGrenadeChance_C_ExecuteUbergraph_Ability_Gunner_IBGrenadeChance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Gunner_IBGrenadeChance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Gunner_IBGrenadeChance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C");
		return ptr;
	}

}


