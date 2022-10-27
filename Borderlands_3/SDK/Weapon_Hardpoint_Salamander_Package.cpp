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
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod3
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_C::SetupMod3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod3");
		
		AWeapon_Hardpoint_Salamander_C_SetupMod3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupNoMod
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_C::SetupNoMod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupNoMod");
		
		AWeapon_Hardpoint_Salamander_C_SetupNoMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_C::SetupMod2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod2");
		
		AWeapon_Hardpoint_Salamander_C_SetupMod2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ApplySalamanderMod2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hardpoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_Salamander_C::ApplySalamanderMod2(class UObject* DamageSource, class AActor* Hardpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ApplySalamanderMod2");
		
		AWeapon_Hardpoint_Salamander_C_ApplySalamanderMod2_Params params {};
		params.DamageSource = DamageSource;
		params.Hardpoint = Hardpoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ToggleBlockEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapon_Hardpoint_Salamander_C::ToggleBlockEnabled(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ToggleBlockEnabled");
		
		AWeapon_Hardpoint_Salamander_C_ToggleBlockEnabled_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.UserConstructionScript");
		
		AWeapon_Hardpoint_Salamander_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.CausedDamage_Salamander
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void AWeapon_Hardpoint_Salamander_C::CausedDamage_Salamander(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.CausedDamage_Salamander");
		
		AWeapon_Hardpoint_Salamander_C_CausedDamage_Salamander_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapon_Hardpoint_Salamander_C::BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander(bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander");
		
		AWeapon_Hardpoint_Salamander_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Params params {};
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_C::K2_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize");
		
		AWeapon_Hardpoint_Salamander_C_K2_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize1P
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Salamander_C::K2_Initialize1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize1P");
		
		AWeapon_Hardpoint_Salamander_C_K2_Initialize1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_Salamander_C::ExecuteUbergraph_Weapon_Hardpoint_Salamander(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander");
		
		AWeapon_Hardpoint_Salamander_C_ExecuteUbergraph_Weapon_Hardpoint_Salamander_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_Hardpoint_Salamander_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Hardpoint_Salamander_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C");
		return ptr;
	}

}


