﻿/**
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
	 * 		Name   -> Function Ability_All_Passive_TerrorCritDamage.Ability_All_Passive_TerrorCritDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_All_Passive_TerrorCritDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorCritDamage.Ability_All_Passive_TerrorCritDamage_C.OnActivated");
		
		UAbility_All_Passive_TerrorCritDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_Passive_TerrorCritDamage.Ability_All_Passive_TerrorCritDamage_C.ExecuteUbergraph_Ability_All_Passive_TerrorCritDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_Passive_TerrorCritDamage_C::ExecuteUbergraph_Ability_All_Passive_TerrorCritDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorCritDamage.Ability_All_Passive_TerrorCritDamage_C.ExecuteUbergraph_Ability_All_Passive_TerrorCritDamage");
		
		UAbility_All_Passive_TerrorCritDamage_C_ExecuteUbergraph_Ability_All_Passive_TerrorCritDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_Passive_TerrorCritDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_Passive_TerrorCritDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_Passive_TerrorCritDamage.Ability_All_Passive_TerrorCritDamage_C");
		return ptr;
	}

}


