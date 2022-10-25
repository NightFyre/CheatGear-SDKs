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
	 * 		Name   -> Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_Tenacious_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnActivated");
		
		UPassive_Gunner_Tenacious_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ShieldDepleted_TencaiousDefense
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UPassive_Gunner_Tenacious_C::ShieldDepleted_TencaiousDefense(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ShieldDepleted_TencaiousDefense");
		
		UPassive_Gunner_Tenacious_C_ShieldDepleted_TencaiousDefense_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_Tenacious_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnDeactivated");
		
		UPassive_Gunner_Tenacious_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnFilled_TencaciousDefense
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UPassive_Gunner_Tenacious_C::OnFilled_TencaciousDefense(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnFilled_TencaciousDefense");
		
		UPassive_Gunner_Tenacious_C_OnFilled_TencaciousDefense_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.SetTriggerStateByShieldAmount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_Tenacious_C::SetTriggerStateByShieldAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.SetTriggerStateByShieldAmount");
		
		UPassive_Gunner_Tenacious_C_SetTriggerStateByShieldAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ExecuteUbergraph_Passive_Gunner_Tenacious
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_Tenacious_C::ExecuteUbergraph_Passive_Gunner_Tenacious(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ExecuteUbergraph_Passive_Gunner_Tenacious");
		
		UPassive_Gunner_Tenacious_C_ExecuteUbergraph_Passive_Gunner_Tenacious_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_Tenacious_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_Tenacious_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C");
		return ptr;
	}

}


