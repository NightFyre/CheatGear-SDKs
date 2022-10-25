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
	 * 		Name   -> Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.GetManualHUDIconValues
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            outStackCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outDuration                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outTimeRemaining                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Bond_Frenzy_C::GetManualHUDIconValues(int32_t* outStackCount, float* outDuration, float* outTimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.GetManualHUDIconValues");
		
		UPassive_Beastmaster_Bond_Frenzy_C_GetManualHUDIconValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outStackCount != nullptr)
			*outStackCount = params.outStackCount;
		if (outDuration != nullptr)
			*outDuration = params.outDuration;
		if (outTimeRemaining != nullptr)
			*outTimeRemaining = params.outTimeRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Bond_Frenzy_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnActivated");
		
		UPassive_Beastmaster_Bond_Frenzy_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.PetCausedAnyDamage_BondFrenzy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Bond_Frenzy_C::PetCausedAnyDamage_BondFrenzy(class AActor* DamagedActor, class UDamageSource* DamageSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.PetCausedAnyDamage_BondFrenzy");
		
		UPassive_Beastmaster_Bond_Frenzy_C_PetCausedAnyDamage_BondFrenzy_Params params {};
		params.DamagedActor = DamagedActor;
		params.DamageSource = DamageSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassive_Beastmaster_Bond_Frenzy_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnAbilityTimerEnded");
		
		UPassive_Beastmaster_Bond_Frenzy_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Bond_Frenzy_C::ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy");
		
		UPassive_Beastmaster_Bond_Frenzy_C_ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_Bond_Frenzy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_Bond_Frenzy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C");
		return ptr;
	}

}


