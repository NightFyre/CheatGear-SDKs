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
	 * 		Name   -> Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_TorgueCrossPromo_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnActivated");
		
		UPassive_Gunner_TorgueCrossPromo_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_TorgueCrossPromo_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnResumed");
		
		UPassive_Gunner_TorgueCrossPromo_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnAbilityTimerEnded
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakAbilityTimerSpec                        Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FOakAbilityTimerResult                      Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassive_Gunner_TorgueCrossPromo_C::OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnAbilityTimerEnded");
		
		UPassive_Gunner_TorgueCrossPromo_C_OnAbilityTimerEnded_Params params {};
		params.Spec = Spec;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnGradeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPassive_Gunner_TorgueCrossPromo_C::OnGradeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnGradeChanged");
		
		UPassive_Gunner_TorgueCrossPromo_C_OnGradeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.DetermineNewChance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_TorgueCrossPromo_C::DetermineNewChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.DetermineNewChance");
		
		UPassive_Gunner_TorgueCrossPromo_C_DetermineNewChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_TorgueCrossPromo_C::ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo");
		
		UPassive_Gunner_TorgueCrossPromo_C_ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_TorgueCrossPromo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_TorgueCrossPromo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C");
		return ptr;
	}

}


