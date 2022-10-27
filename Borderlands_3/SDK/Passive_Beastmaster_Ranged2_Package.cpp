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
	 * 		Name   -> Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged2_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.OnActivated");
		
		UPassive_Beastmaster_Ranged2_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.CausedDeath_Ranged2
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPassive_Beastmaster_Ranged2_C::CausedDeath_Ranged2(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.CausedDeath_Ranged2");
		
		UPassive_Beastmaster_Ranged2_C_CausedDeath_Ranged2_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.WeaponReloadEnded_Ranged2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassive_Beastmaster_Ranged2_C::WeaponReloadEnded_Ranged2(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.WeaponReloadEnded_Ranged2");
		
		UPassive_Beastmaster_Ranged2_C_WeaponReloadEnded_Ranged2_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.ClassModUnique03_KillSkillTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged2_C::ClassModUnique03_KillSkillTrigger(class AActor* DamagedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.ClassModUnique03_KillSkillTrigger");
		
		UPassive_Beastmaster_Ranged2_C_ClassModUnique03_KillSkillTrigger_Params params {};
		params.DamagedActor = DamagedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.ExecuteUbergraph_Passive_Beastmaster_Ranged2
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged2_C::ExecuteUbergraph_Passive_Beastmaster_Ranged2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.ExecuteUbergraph_Passive_Beastmaster_Ranged2");
		
		UPassive_Beastmaster_Ranged2_C_ExecuteUbergraph_Passive_Beastmaster_Ranged2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_Ranged2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_Ranged2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C");
		return ptr;
	}

}


