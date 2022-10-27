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
	 * 		Name   -> Function Ability_KybsWorth.Ability_KybsWorth_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_KybsWorth_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.OnActivated");
		
		UAbility_KybsWorth_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_KybsWorth.Ability_KybsWorth_C.OnCausedDeath_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAbility_KybsWorth_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.OnCausedDeath_Event");
		
		UAbility_KybsWorth_C_OnCausedDeath_Event_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_KybsWorth.Ability_KybsWorth_C.ResetSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_KybsWorth_C::ResetSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.ResetSpawn");
		
		UAbility_KybsWorth_C_ResetSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_KybsWorth.Ability_KybsWorth_C.ExecuteUbergraph_Ability_KybsWorth
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_KybsWorth_C::ExecuteUbergraph_Ability_KybsWorth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.ExecuteUbergraph_Ability_KybsWorth");
		
		UAbility_KybsWorth_C_ExecuteUbergraph_Ability_KybsWorth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_KybsWorth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_KybsWorth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_KybsWorth.Ability_KybsWorth_C");
		return ptr;
	}

}


