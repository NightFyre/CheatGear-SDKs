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
	 * 		Name   -> Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_All_SkillEnd_HealingPool_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.AnointTriggerEffect");
		
		UAbility_All_SkillEnd_HealingPool_C_AnointTriggerEffect_Params params {};
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
	 * 		Name   -> Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.SpawnSplat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillEnd_HealingPool_C::SpawnSplat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.SpawnSplat");
		
		UAbility_All_SkillEnd_HealingPool_C_SpawnSplat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.ExecuteUbergraph_Ability_All_SkillEnd_HealingPool
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SkillEnd_HealingPool_C::ExecuteUbergraph_Ability_All_SkillEnd_HealingPool(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.ExecuteUbergraph_Ability_All_SkillEnd_HealingPool");
		
		UAbility_All_SkillEnd_HealingPool_C_ExecuteUbergraph_Ability_All_SkillEnd_HealingPool_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_SkillEnd_HealingPool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_SkillEnd_HealingPool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C");
		return ptr;
	}

}


