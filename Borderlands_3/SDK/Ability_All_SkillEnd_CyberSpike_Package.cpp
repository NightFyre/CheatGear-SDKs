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
	 * 		Name   -> Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_All_SkillEnd_CyberSpike_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.AnointTriggerEffect");
		
		UAbility_All_SkillEnd_CyberSpike_C_AnointTriggerEffect_Params params {};
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
	 * 		Name   -> Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.SpawnSkillProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillEnd_CyberSpike_C::SpawnSkillProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.SpawnSkillProjectile");
		
		UAbility_All_SkillEnd_CyberSpike_C_SpawnSkillProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SkillEnd_CyberSpike_C::ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike");
		
		UAbility_All_SkillEnd_CyberSpike_C_ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_SkillEnd_CyberSpike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_SkillEnd_CyberSpike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C");
		return ptr;
	}

}


