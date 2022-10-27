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
	 * 		Name   -> Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UPassive_Gunner_DLCSkill_13_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.CalculateAbilityState");
		
		UPassive_Gunner_DLCSkill_13_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.GunnerCausedElementalEffect
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatusEffectSpec                           Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassive_Gunner_DLCSkill_13_C::GunnerCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.GunnerCausedElementalEffect");
		
		UPassive_Gunner_DLCSkill_13_C_GunnerCausedElementalEffect_Params params {};
		params.Causer = Causer;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_14
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_DLCSkill_13_C::ExecuteUbergraph_Passive_Gunner_DLCSkill_14(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_14");
		
		UPassive_Gunner_DLCSkill_13_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_14_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_DLCSkill_13_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_DLCSkill_13_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C");
		return ptr;
	}

}


