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
	 * 		Name   -> Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UAbility_CM_Ixora_GUN_L01_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.CalculateAbilityState");
		
		UAbility_CM_Ixora_GUN_L01_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_CM_Ixora_GUN_L01_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.OnActivated");
		
		UAbility_CM_Ixora_GUN_L01_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.GunnerIxoraClassMod_OnCausedElementalEffect
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatusEffectSpec                           Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_CM_Ixora_GUN_L01_C::GunnerIxoraClassMod_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.GunnerIxoraClassMod_OnCausedElementalEffect");
		
		UAbility_CM_Ixora_GUN_L01_C_GunnerIxoraClassMod_OnCausedElementalEffect_Params params {};
		params.Causer = Causer;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora_GUN_L01
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CM_Ixora_GUN_L01_C::ExecuteUbergraph_Ability_CM_Ixora_GUN_L01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora_GUN_L01");
		
		UAbility_CM_Ixora_GUN_L01_C_ExecuteUbergraph_Ability_CM_Ixora_GUN_L01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_CM_Ixora_GUN_L01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CM_Ixora_GUN_L01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C");
		return ptr;
	}

}


