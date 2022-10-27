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
	 * 		Name   -> Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_PhalanxDoctrine_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.OnActivated");
		
		UPassive_Gunner_PhalanxDoctrine_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.CausedDeath_PhalanxDoctrine
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPassive_Gunner_PhalanxDoctrine_C::CausedDeath_PhalanxDoctrine(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.CausedDeath_PhalanxDoctrine");
		
		UPassive_Gunner_PhalanxDoctrine_C_CausedDeath_PhalanxDoctrine_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_PhalanxDoctrine_C::ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine");
		
		UPassive_Gunner_PhalanxDoctrine_C_ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_PhalanxDoctrine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_PhalanxDoctrine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C");
		return ptr;
	}

}


