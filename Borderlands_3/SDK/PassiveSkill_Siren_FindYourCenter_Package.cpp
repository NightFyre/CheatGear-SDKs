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
	 * 		Name   -> Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_FindYourCenter_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActivated");
		
		UPassiveSkill_Siren_FindYourCenter_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_FindYourCenter_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActionSkillActivated");
		
		UPassiveSkill_Siren_FindYourCenter_C_OnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_FindYourCenter_C::ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter");
		
		UPassiveSkill_Siren_FindYourCenter_C_ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_FindYourCenter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_FindYourCenter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C");
		return ptr;
	}

}


