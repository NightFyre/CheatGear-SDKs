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
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotLightProjectileData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UClass* UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::GetShotLightProjectileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotLightProjectileData");
		
		UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_GetShotLightProjectileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.SetNewGrenadeType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bReadyForSingularityGrenade                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::SetNewGrenadeType(bool bReadyForSingularityGrenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.SetNewGrenadeType");
		
		UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_SetNewGrenadeType_Params params {};
		params.bReadyForSingularityGrenade = bReadyForSingularityGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotProjectileData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UClass* UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::GetShotProjectileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotProjectileData");
		
		UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_GetShotProjectileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher");
		
		UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C");
		return ptr;
	}

}


