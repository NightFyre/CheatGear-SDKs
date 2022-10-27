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
	 * 		Name   -> Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_TOR_HW_RampagerWeapon_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.OnRegistered");
		
		UAbility_TOR_HW_RampagerWeapon_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.WeaponFired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_TOR_HW_RampagerWeapon_C::WeaponFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.WeaponFired");
		
		UAbility_TOR_HW_RampagerWeapon_C_WeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_TOR_HW_RampagerWeapon_C::ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon");
		
		UAbility_TOR_HW_RampagerWeapon_C_ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_TOR_HW_RampagerWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_TOR_HW_RampagerWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C");
		return ptr;
	}

}


