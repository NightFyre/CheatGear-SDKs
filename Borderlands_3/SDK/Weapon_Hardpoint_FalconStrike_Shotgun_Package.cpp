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
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_Shotgun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.UserConstructionScript");
		
		AWeapon_Hardpoint_FalconStrike_Shotgun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_Shotgun_C::BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire");
		
		AWeapon_Hardpoint_FalconStrike_Shotgun_C_BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_FalconStrike_Shotgun_C::ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun");
		
		AWeapon_Hardpoint_FalconStrike_Shotgun_C_ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_Hardpoint_FalconStrike_Shotgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Hardpoint_FalconStrike_Shotgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C");
		return ptr;
	}

}


