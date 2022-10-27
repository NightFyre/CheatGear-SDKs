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
	 * 		Name   -> Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_ForceFeedback_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.OnActivated");
		
		UPassiveSkill_Gunner_ForceFeedback_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.Capacitation On Caused Death
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPassiveSkill_Gunner_ForceFeedback_C::Capacitation_On_Caused_Death(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.Capacitation On Caused Death");
		
		UPassiveSkill_Gunner_ForceFeedback_C_Capacitation_On_Caused_Death_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Gunner_ForceFeedback_C::ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback");
		
		UPassiveSkill_Gunner_ForceFeedback_C_ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Gunner_ForceFeedback_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Gunner_ForceFeedback_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C");
		return ptr;
	}

}


