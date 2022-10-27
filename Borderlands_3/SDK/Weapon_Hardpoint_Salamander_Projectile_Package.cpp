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
	 * 		Name   -> Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_Projectile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.UserConstructionScript");
		
		AWeapon_Hardpoint_Salamander_Projectile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.K2_InitializeMod
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_Projectile_C::K2_InitializeMod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.K2_InitializeMod");
		
		AWeapon_Hardpoint_Salamander_Projectile_C_K2_InitializeMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_Projectile_C::BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile");
		
		AWeapon_Hardpoint_Salamander_Projectile_C_BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_Salamander_Projectile_C::ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile");
		
		AWeapon_Hardpoint_Salamander_Projectile_C_ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_Hardpoint_Salamander_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Hardpoint_Salamander_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C");
		return ptr;
	}

}


