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
	 * 		Name   -> Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_DrowningInBrass_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.OnActivated");
		
		UPassiveSkill_Gunner_DrowningInBrass_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.CausedDeath_DrowningInBrass
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPassiveSkill_Gunner_DrowningInBrass_C::CausedDeath_DrowningInBrass(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.CausedDeath_DrowningInBrass");
		
		UPassiveSkill_Gunner_DrowningInBrass_C_CausedDeath_DrowningInBrass_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Gunner_DrowningInBrass_C::ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass");
		
		UPassiveSkill_Gunner_DrowningInBrass_C_ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Gunner_DrowningInBrass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Gunner_DrowningInBrass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C");
		return ptr;
	}

}


