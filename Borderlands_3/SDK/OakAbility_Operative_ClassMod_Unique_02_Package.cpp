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
	 * 		Name   -> Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OnSeeingRedActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Operative_ClassMod_Unique_02_C::OnSeeingRedActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OnSeeingRedActivated");
		
		UOakAbility_Operative_ClassMod_Unique_02_C_OnSeeingRedActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Operative_ClassMod_Unique_02_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OnActivated");
		
		UOakAbility_Operative_ClassMod_Unique_02_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OperativeTriggerKillSkillEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Operative_ClassMod_Unique_02_C::OperativeTriggerKillSkillEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OperativeTriggerKillSkillEffect");
		
		UOakAbility_Operative_ClassMod_Unique_02_C_OperativeTriggerKillSkillEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OnCausedDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOakAbility_Operative_ClassMod_Unique_02_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.OnCausedDeath");
		
		UOakAbility_Operative_ClassMod_Unique_02_C_OnCausedDeath_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_02
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Operative_ClassMod_Unique_02_C::ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_02");
		
		UOakAbility_Operative_ClassMod_Unique_02_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Operative_ClassMod_Unique_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Operative_ClassMod_Unique_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Operative_ClassMod_Unique_02.OakAbility_Operative_ClassMod_Unique_02_C");
		return ptr;
	}

}


