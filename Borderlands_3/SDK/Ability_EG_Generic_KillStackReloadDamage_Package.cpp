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
	 * 		Name   -> Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_EG_Generic_KillStackReloadDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.OnActivated");
		
		UAbility_EG_Generic_KillStackReloadDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.CausedDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAbility_EG_Generic_KillStackReloadDamage_C::CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.CausedDeath");
		
		UAbility_EG_Generic_KillStackReloadDamage_C_CausedDeath_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_EG_Generic_KillStackReloadDamage_C::ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage");
		
		UAbility_EG_Generic_KillStackReloadDamage_C_ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_EG_Generic_KillStackReloadDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_EG_Generic_KillStackReloadDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C");
		return ptr;
	}

}


