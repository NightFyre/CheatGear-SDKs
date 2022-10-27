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
	 * 		Name   -> Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_WarlordAmmoRegen_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.OnActivated");
		
		UAbility_WarlordAmmoRegen_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.WeaponFired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_WarlordAmmoRegen_C::WeaponFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.WeaponFired");
		
		UAbility_WarlordAmmoRegen_C_WeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.Mode2Fired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_WarlordAmmoRegen_C::Mode2Fired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.Mode2Fired");
		
		UAbility_WarlordAmmoRegen_C_Mode2Fired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.ExecuteUbergraph_Ability_WarlordAmmoRegen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_WarlordAmmoRegen_C::ExecuteUbergraph_Ability_WarlordAmmoRegen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.ExecuteUbergraph_Ability_WarlordAmmoRegen");
		
		UAbility_WarlordAmmoRegen_C_ExecuteUbergraph_Ability_WarlordAmmoRegen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_WarlordAmmoRegen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_WarlordAmmoRegen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C");
		return ptr;
	}

}


