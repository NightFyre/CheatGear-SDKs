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
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.DisableWaterBottle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::DisableWaterBottle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.DisableWaterBottle");
		
		ABPWeap_COV_BaseWeapon_C_DisableWaterBottle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EnableWaterBottle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::EnableWaterBottle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EnableWaterBottle");
		
		ABPWeap_COV_BaseWeapon_C_EnableWaterBottle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Param                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_COV_BaseWeapon_C::GetRepairStyle(int32_t* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle");
		
		ABPWeap_COV_BaseWeapon_C_GetRepairStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Param != nullptr)
			*Param = params.Param;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.UserConstructionScript");
		
		ABPWeap_COV_BaseWeapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ReceiveBeginPlay");
		
		ABPWeap_COV_BaseWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponOnFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::WeaponOnFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponOnFire");
		
		ABPWeap_COV_BaseWeapon_C_WeaponOnFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponPutOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::WeaponPutOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponPutOut");
		
		ABPWeap_COV_BaseWeapon_C_WeaponPutOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponSmokeStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::WeaponSmokeStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponSmokeStop");
		
		ABPWeap_COV_BaseWeapon_C_WeaponSmokeStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.FirstPersonCreated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::FirstPersonCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.FirstPersonCreated");
		
		ABPWeap_COV_BaseWeapon_C_FirstPersonCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EngineStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::EngineStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EngineStart");
		
		ABPWeap_COV_BaseWeapon_C_EngineStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_COV_BaseWeapon_C::Notify_ReloadEnded(bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded");
		
		ABPWeap_COV_BaseWeapon_C_Notify_ReloadEnded_Params params {};
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.StarterSparks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::StarterSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.StarterSparks");
		
		ABPWeap_COV_BaseWeapon_C_StarterSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponStartWatering
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_COV_BaseWeapon_C::WeaponStartWatering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponStartWatering");
		
		ABPWeap_COV_BaseWeapon_C_WeaponStartWatering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_COV_BaseWeapon_C::ExecuteUbergraph_BPWeap_COV_BaseWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon");
		
		ABPWeap_COV_BaseWeapon_C_ExecuteUbergraph_BPWeap_COV_BaseWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_COV_BaseWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_COV_BaseWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C");
		return ptr;
	}

}


