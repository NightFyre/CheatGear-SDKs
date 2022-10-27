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
	 * 		Name   -> Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Operative_DroneActiveTerrorLifesteal_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.OnActivated");
		
		UAbility_Operative_DroneActiveTerrorLifesteal_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeGadgets                                  ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Operative_DroneActiveTerrorLifesteal_C::DroneStarted(EOperativeGadgets ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneStarted");
		
		UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneStarted_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeGadgets                                  ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Operative_DroneActiveTerrorLifesteal_C::DroneEnded(EOperativeGadgets ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneEnded");
		
		UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneEnded_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.CausedDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UAbility_Operative_DroneActiveTerrorLifesteal_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.CausedDamage");
		
		UAbility_Operative_DroneActiveTerrorLifesteal_C_CausedDamage_Params params {};
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
	 * 		Name   -> Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Operative_DroneActiveTerrorLifesteal_C::ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal");
		
		UAbility_Operative_DroneActiveTerrorLifesteal_C_ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Operative_DroneActiveTerrorLifesteal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Operative_DroneActiveTerrorLifesteal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C");
		return ptr;
	}

}


