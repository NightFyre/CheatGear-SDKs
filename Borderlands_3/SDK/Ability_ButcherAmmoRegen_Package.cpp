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
	 * 		Name   -> Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_ButcherAmmoRegen_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.OnActivated");
		
		UAbility_ButcherAmmoRegen_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.WeaponFired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_ButcherAmmoRegen_C::WeaponFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.WeaponFired");
		
		UAbility_ButcherAmmoRegen_C_WeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.ExecuteUbergraph_Ability_ButcherAmmoRegen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_ButcherAmmoRegen_C::ExecuteUbergraph_Ability_ButcherAmmoRegen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.ExecuteUbergraph_Ability_ButcherAmmoRegen");
		
		UAbility_ButcherAmmoRegen_C_ExecuteUbergraph_Ability_ButcherAmmoRegen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_ButcherAmmoRegen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_ButcherAmmoRegen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C");
		return ptr;
	}

}


