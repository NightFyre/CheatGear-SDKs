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
	 * 		Name   -> Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.AnointOnActionSkillActivated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_All_SkillStart_OverchargeShield_C::AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.AnointOnActionSkillActivated");
		
		UAbility_All_SkillStart_OverchargeShield_C_AnointOnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.SkillStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SkillStart_OverchargeShield_C::SkillStarted(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.SkillStarted");
		
		UAbility_All_SkillStart_OverchargeShield_C_SkillStarted_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.DrainShield
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillStart_OverchargeShield_C::DrainShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.DrainShield");
		
		UAbility_All_SkillStart_OverchargeShield_C_DrainShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ResetShield
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillStart_OverchargeShield_C::ResetShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ResetShield");
		
		UAbility_All_SkillStart_OverchargeShield_C_ResetShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SkillStart_OverchargeShield_C::ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield");
		
		UAbility_All_SkillStart_OverchargeShield_C_ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_SkillStart_OverchargeShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_SkillStart_OverchargeShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C");
		return ptr;
	}

}


