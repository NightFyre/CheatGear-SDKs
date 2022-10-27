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
	 * 		Name   -> Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_ActionAbilityTriggered_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.OnActivated");
		
		UPassiveSkill_Siren_ActionAbilityTriggered_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.SirenActionAbilityTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_ActionAbilityTriggered_C::SirenActionAbilityTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.SirenActionAbilityTrigger");
		
		UPassiveSkill_Siren_ActionAbilityTriggered_C_SirenActionAbilityTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_ActionAbilityTriggered_C::ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C.ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered");
		
		UPassiveSkill_Siren_ActionAbilityTriggered_C_ExecuteUbergraph_PassiveSkill_Siren_ActionAbilityTriggered_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_ActionAbilityTriggered_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_ActionAbilityTriggered_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_ActionAbilityTriggered.PassiveSkill_Siren_ActionAbilityTriggered_C");
		return ptr;
	}

}


