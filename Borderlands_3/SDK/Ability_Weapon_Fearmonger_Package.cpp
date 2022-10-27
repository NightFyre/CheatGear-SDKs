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
	 * 		Name   -> Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Weapon_Fearmonger_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.OnRegistered");
		
		UAbility_Weapon_Fearmonger_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.TerrorUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UAbility_Weapon_Fearmonger_C::TerrorUpdated(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.TerrorUpdated");
		
		UAbility_Weapon_Fearmonger_C_TerrorUpdated_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.ExecuteUbergraph_Ability_Weapon_Fearmonger
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Weapon_Fearmonger_C::ExecuteUbergraph_Ability_Weapon_Fearmonger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.ExecuteUbergraph_Ability_Weapon_Fearmonger");
		
		UAbility_Weapon_Fearmonger_C_ExecuteUbergraph_Ability_Weapon_Fearmonger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Weapon_Fearmonger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Weapon_Fearmonger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C");
		return ptr;
	}

}


