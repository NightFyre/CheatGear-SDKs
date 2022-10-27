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
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Tediore_WeaponData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageRadius                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumMirvProjectiles                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FireRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LoadedAmmo                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ThrowType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32_t* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int32_t* ThrowType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Tediore_WeaponData");
		
		ABPWeap_Tediore_BaseWeapon_C_Tediore_WeaponData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageRadius != nullptr)
			*DamageRadius = params.DamageRadius;
		if (DamageTypeClass != nullptr)
			*DamageTypeClass = params.DamageTypeClass;
		if (NumMirvProjectiles != nullptr)
			*NumMirvProjectiles = params.NumMirvProjectiles;
		if (FireRate != nullptr)
			*FireRate = params.FireRate;
		if (LoadedAmmo != nullptr)
			*LoadedAmmo = params.LoadedAmmo;
		if (ThrowType != nullptr)
			*ThrowType = params.ThrowType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.OnRep_HideLegs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::OnRep_HideLegs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.OnRep_HideLegs");
		
		ABPWeap_Tediore_BaseWeapon_C_OnRep_HideLegs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreShowWeapon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::TedioreShowWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreShowWeapon");
		
		ABPWeap_Tediore_BaseWeapon_C_TedioreShowWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreHideWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::TedioreHideWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreHideWeapon");
		
		ABPWeap_Tediore_BaseWeapon_C_TedioreHideWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreThrowWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ThrownProjectile                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::TedioreThrowWeapon(class AActor** ThrownProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreThrowWeapon");
		
		ABPWeap_Tediore_BaseWeapon_C_TedioreThrowWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThrownProjectile != nullptr)
			*ThrownProjectile = params.ThrownProjectile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.UserConstructionScript");
		
		ABPWeap_Tediore_BaseWeapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ReceiveBeginPlay");
		
		ABPWeap_Tediore_BaseWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Notify_ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::Notify_ReloadStarted(bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Notify_ReloadStarted");
		
		ABPWeap_Tediore_BaseWeapon_C_Notify_ReloadStarted_Params params {};
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.WeaponAttached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::WeaponAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.WeaponAttached");
		
		ABPWeap_Tediore_BaseWeapon_C_WeaponAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeOverhand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeOverhand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeOverhand");
		
		ABPWeap_Tediore_BaseWeapon_C_ThrowTypeOverhand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideRL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeSideRL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideRL");
		
		ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideRL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeUnderhand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeUnderhand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeUnderhand");
		
		ABPWeap_Tediore_BaseWeapon_C_ThrowTypeUnderhand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideLR
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeSideLR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideLR");
		
		ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideLR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ExecuteUbergraph_BPWeap_Tediore_BaseWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_Tediore_BaseWeapon_C::ExecuteUbergraph_BPWeap_Tediore_BaseWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ExecuteUbergraph_BPWeap_Tediore_BaseWeapon");
		
		ABPWeap_Tediore_BaseWeapon_C_ExecuteUbergraph_BPWeap_Tediore_BaseWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_Tediore_BaseWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_Tediore_BaseWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C");
		return ptr;
	}

}


