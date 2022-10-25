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
	 * 		Name   -> Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.GetFiringComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     InWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponFireProjectileComponent*              FireComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_Passive_TerrorProjectilesPerShot_C::GetFiringComponent(class AWeapon* InWeapon, class UWeaponFireProjectileComponent** FireComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.GetFiringComponent");
		
		UAbility_All_Passive_TerrorProjectilesPerShot_C_GetFiringComponent_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FireComponent != nullptr)
			*FireComponent = params.FireComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_Passive_TerrorProjectilesPerShot_C::WeaponUsed(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponUsed");
		
		UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponUsed_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     LastWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_Passive_TerrorProjectilesPerShot_C::WeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponChanged");
		
		UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponChanged_Params params {};
		params.NewWeapon = NewWeapon;
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.AddProjectilePerShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     InWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_Passive_TerrorProjectilesPerShot_C::AddProjectilePerShot(class AWeapon* InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.AddProjectilePerShot");
		
		UAbility_All_Passive_TerrorProjectilesPerShot_C_AddProjectilePerShot_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_All_Passive_TerrorProjectilesPerShot_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.OnActivated");
		
		UAbility_All_Passive_TerrorProjectilesPerShot_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_Passive_TerrorProjectilesPerShot_C::ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot");
		
		UAbility_All_Passive_TerrorProjectilesPerShot_C_ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_Passive_TerrorProjectilesPerShot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_Passive_TerrorProjectilesPerShot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C");
		return ptr;
	}

}


