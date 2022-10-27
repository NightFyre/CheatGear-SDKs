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
	 * 		Name   -> Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.TryRefillAttackCommandPool
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Bond2_C::TryRefillAttackCommandPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.TryRefillAttackCommandPool");
		
		UPassive_Beastmaster_Bond2_C_TryRefillAttackCommandPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.RandomChanceByGrade
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UPassive_Beastmaster_Bond2_C::RandomChanceByGrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.RandomChanceByGrade");
		
		UPassive_Beastmaster_Bond2_C_RandomChanceByGrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnKilledEnemy_Bond2
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPassive_Beastmaster_Bond2_C::OnKilledEnemy_Bond2(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnKilledEnemy_Bond2");
		
		UPassive_Beastmaster_Bond2_C_OnKilledEnemy_Bond2_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Bond2_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnActivated");
		
		UPassive_Beastmaster_Bond2_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.DoCooldownReduction_Bond2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Bond2_C::DoCooldownReduction_Bond2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.DoCooldownReduction_Bond2");
		
		UPassive_Beastmaster_Bond2_C_DoCooldownReduction_Bond2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.ExecuteUbergraph_Passive_Beastmaster_Bond2
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Bond2_C::ExecuteUbergraph_Passive_Beastmaster_Bond2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.ExecuteUbergraph_Passive_Beastmaster_Bond2");
		
		UPassive_Beastmaster_Bond2_C_ExecuteUbergraph_Passive_Beastmaster_Bond2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_Bond2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_Bond2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C");
		return ptr;
	}

}


